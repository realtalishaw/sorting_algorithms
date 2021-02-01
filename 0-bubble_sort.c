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
	int bool;

	if (!array)
	{
		return;
	}
	if (size < 2)
	{
		print_array(array, size);
	}
	else
	{
		for (i = 0; i < size - 1; i++)
		{
			bool = 0;
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					bool = 1;
					print_array(array, size);
				}

			}
			if (bool == 0)
				break;

		}
	}

}
