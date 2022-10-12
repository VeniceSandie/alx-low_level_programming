#include <stdio.h>
#include "funtion_pointers.h"

/**
* array iterator - iterates an array.
* array: array of elements.
* @size: size of array
* @action: function pointer
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
