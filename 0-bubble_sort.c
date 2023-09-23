#include "sort.h"
/**
 * bubble_sort - function that sort an array of integers in ascending order.
 * @array: array of integers.
 * @size: the size of array.
*/
void bubble_sort(int *array, size_t size)
{

unsigned int i, j, swap;
int tmp;

for (i = 0; i < size; i++)
{
swap = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j + 1] < array[j])
{
tmp = array[j + 1];
array[j + 1] = array[j];
array[j] = tmp;
swap = 1;
print_array(array, size);
}
}
if (swap == 0)
break;
}

}
