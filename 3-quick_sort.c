#include "sort.h"

/**
*swap - swap the value of two indexes
*@x: index to swap
*@y: index to swap
**/

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 *partion - sorts the array in respect to the pivot index
 *@array: arrar to sort
 *@size: size of the array
 *@low: the lowest index of an array
 *@high: the highest index of an array
 *Return: the index of the pivot
 **/

int partion(int *array, size_t size, int low, int high)
{
	int pivot_value = array[high];
	int i = low;
	int j = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[j], &array[i]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	print_array(array, size);
	return (i);
}

/**
*quick_sort_recursion -  quick sort algorithm implementation
*@array: an array to sort
*@size: size of an array
*@low: index of first element
*@high: index of highest element
*Return: index of partioned element
**/

void quick_sort_recursion(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partion(array, size, low, high);

		quick_sort_recursion(array, size, low, pivot_index - 1);
		quick_sort_recursion(array, size, pivot_index + 1, high);
	}
}

/**
*quick_sort - sort an array using the quick sort algorithm
*@array: an array to sort
*@size: size of an array
**/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, size, 0, size - 1);
}
