#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int a = 0, r = 0;
	int tmp;

	if (size < 2)
		return;

	for (a = 0; a < size; a++)
	{
		for (r = 0; r < (size - a - 1); r++)
		{
			if (array[r] > array[r + 1])
			{
				tmp = array[r];
				array[r] = array[r + 1];
				array[r + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
