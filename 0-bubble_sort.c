#include "sort.h"


/**
 * bubble_sort - Entry point
 * @array: ldfkls;dfds
 * @size: jfkljsd
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j =0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}

		}


	}

}
