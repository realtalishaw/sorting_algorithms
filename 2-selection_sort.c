#include "sort.h"


/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: ldfkls;dfds
 * @size: jfkljsd
 * Return: Always 0
 */

void selection_sort(int *array, size_t size)
{
size_t x, y, mini;
int swaps;

if (array == NULL || size < 2)
return;

for (x = 0; x < size - 1; x++)
{
mini = x;
for (y = x + 1; y < size; y++)
{
if (array[y] < array[mini])
mini = y;
}
if (x != mini)
{
swaps = array[x];
array[x] = array[mini];
array[mini] = swaps;
print_array(array, size);
}
}
}
