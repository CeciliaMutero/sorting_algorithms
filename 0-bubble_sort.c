#include "sort.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: pointer to array
 * @size: size of the array
 *
 * Return: Always 0 (success)
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	unsigned int temp;
	unsigned int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;

	}
}
