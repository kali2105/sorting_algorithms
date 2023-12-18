#include "sort.h"

/**
 * swap_ints - A function that swap two integers in an array
 * @a: The 1st integer to be swapped
 * @b: The 2nd integer to be swapped
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - A function that sort an array of integers in ascending order
 * @array: The array of integers to sort
 * @size: The size of the array
 *
 * Description: Printing the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
