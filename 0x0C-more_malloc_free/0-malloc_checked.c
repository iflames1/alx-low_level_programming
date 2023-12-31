#include "main.h"

/**
 *malloc_checked - allocates memory
 *@b: size to allocate
 *Return: pointer to the allocated memory.
 *	If malloc fails, the function exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
