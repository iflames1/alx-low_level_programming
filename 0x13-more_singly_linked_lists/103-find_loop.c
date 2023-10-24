#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *here = head;

	while (tortoise != NULL && here != NULL && here->next != NULL)
	{
		/* Move the tortoise one step */
		tortoise = tortoise->next;
		/* Move the hare two steps */
		here = here->next->next;

		/* If they meet, there's a loop */
		if (tortoise == here)
		{
			/* Reset one pointer to the head */
			tortoise = here;

			/* Move them at the same speed until they meet */
			while (tortoise != here)
			{
				tortoise = tortoise->next;
				here = here->next;
			}
			/* The node where the loop starts */
			return (tortoise);
		}
	}
	/* No loop found */
	return (NULL);
}
