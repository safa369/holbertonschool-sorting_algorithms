#include "sort.h"
/**
 * selection_sort - function sorts an array of integers in ascending order.
 * @array: array of integer.
 * @size: size of array.
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, Ncase;
int tmp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size; i++)
{
Ncase = i;
for (j = i + 1; j < size ; j++)
{
if (array[j] < array[Ncase])
{
Ncase = j;
}
if (array[Ncase] != array[i])
{
tmp = array[i];
array[i] = array[Ncase];
array[Ncase] = tmp;
print_array(array, size);
}
}
}
}
