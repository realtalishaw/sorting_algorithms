#include "sort.h"

/**
* quick_sort - sorts an array of integers in ascending order.
*
* @array: array to be sorted
* @size: size of array
*
* Return: nada
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	if (size == 0 || size == 1)
		return;

	sorts(array, 0, size - 1, size);
}


/**
* partitions - partitions array
*
* @arr: array to be sorted
* @low: beginning of comparison
* @pivot: partition index
* @size: size of array
*
* Return: nada
*/

int partitions(int *arr, size_t low, size_t pivot, size_t size)
{
	size_t i, temp;

	for (i = low; i < pivot; i++)
	{
		if (arr[i] < arr[pivot])
		{
			if (i != low)
			{
				temp = arr[low];
				arr[low] = arr[i];
				arr[i] = temp;
			}
			low++;
		}
	}
	if (arr[low] > arr[pivot])
	{
		temp = arr[low];
		arr[low] = arr[pivot];
		arr[pivot] = temp;
		pivot = low;
		print_array(arr, size);
	}
return (pivot);
}

/**
* sorts - recursive function
*
* @array: array to be sorted
* @start: beginning of array
* @end: end of array
* @size: size of array
*
* Return: nada
*/

void sorts(int *array, size_t start, size_t end, size_t size)
{
	size_t pivot;

	if (end <= start || end == 0)
		return;

	pivot = partitions(array, start, end, size);

	if (pivot > start && pivot != 0)
		sorts(array, start, pivot - 1, size);

	if (pivot < size - 1)
		sorts(array, pivot + 1, end, size);
}
