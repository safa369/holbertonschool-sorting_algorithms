#include "sort.h"

/**
 * lomuto_part - function topartition an arrayinto two parts.
 * @array: the array topartition it.
 * @left: left case of array.
 * @right: right case of array
 * @size: size of array
 * Return: return an array part
*/
int lomuto_part(int *array, int left, int right, size_t size)
{
int i, j, pivot, tmp;

pivot = array[right];
i = left;
for (j = left; j <= right; j++)
{
if (array[j] < pivot)
{ 
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
i++;
}
else
continue;
}
tmp = array[right];
array[right] = array[i];
array[i] = tmp;
print_array(array, size);
return (i);
}

 /**
  * quick_sort_rec - function that sorts an array of integers in ascendig order recursevly.
  * @array: array of integers.
  * @left: the lower index of array;
  * @right: the higher index of array;
  *  @size: size of array.
 */

void quick_sort_rec(int *array, int left, int right, size_t size)
{
int index;

if( left < right)
{
index = lomuto_part(array, left, right, size);
quick_sort_rec(array, left,  index - 1, size);
quick_sort_rec(array, index + 1, right, size);
}
}

/**
 * void quick_sort - funtion sorts an array i ascending order.
 * @array: array to sort it.
 * @size: the size of array. 
*/
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quick_sort_rec(array, 0, size - 1, size);
}