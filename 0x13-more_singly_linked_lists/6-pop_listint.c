#include "lists.h"

/**
 *pop_listint -  function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *@head: A pointer to the head of the list
 *Return:  the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *pop;

	if (*head == NULL)
		return (0);

	pop = *head;
	data = pop->n;
	*head = (*head)->next;
	free(pop);

	return (data);
}
