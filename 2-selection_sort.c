#include "sort.h"

/**
*selection_sort - Sort an array using selection sort
*@array: array to sort
*@size: size of array
**/

void selection_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	size_t i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
