#include "sort.h"
/**
 * bubble_sort - sort an array elements from min to max values
 * @array: arrays
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, index, temp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			print_array(array, size);
			}
		}
}
