#include "sort.h"

/**
 * bubble_sort - the bubble_sort function that will sort
 *
 * @array: The array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped = 0;

	/*iterate through the main loop*/
	for (j = 0; j < size - 1; j++)
	{
		/*compare elements in a list that are side by side*/
		for (i = 0; i < size - 1; i++)
		{
			/*if the element to the left is larger*/
			if (array[i] > array[i + 1])
			{
				/*swap with the one on the right*/
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}

		/*if no swaps*/
		if (!swapped)
		{
			/*quit*/
			return;
		}
	}
}
