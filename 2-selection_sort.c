#include "sort.h"
/**
 * selection_sort - function sorts an array of integers in ascending order.
 * @array: array of integer.
 * @size: size of array.
*/
void selection_sort(int *array, size_t size)
{
size_t i, j;
int tmp;

for (i = 0; i < size; i++)
{
for (j = i + 1; j < size ; j++)
{
if (array[i] > array[j])
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
}
}
