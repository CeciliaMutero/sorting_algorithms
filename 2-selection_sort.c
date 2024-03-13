#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 *
 * Return: Always o (success)
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int min;
	unsigned int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;

			print_array(array, size);
		}
	}
}
