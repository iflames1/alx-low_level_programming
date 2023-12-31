#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes function given as parameter on each element
 *@array: pointer to array
 *@size: size of array
 *@action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
