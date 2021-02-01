#include "sort.h"


/**
 * bubble_sort - Entry point
 * @array: ldfkls;dfds
 * @size: jfkljsd
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j, tmp;

	if (!array)
		return;

	else
	{
		while (i < size - 1;)
		{
		       	for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}

			}
			i++;

				}
	}

}
