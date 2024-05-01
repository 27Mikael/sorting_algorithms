#include "sort.h"

/**
 * selection_sort - algorithm used to implement a selection sort
 *
 * @array: the array to sort
 * @size: the size of the array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	int aux = 0;
	size_t i = 0, j = 0, pos = 0;
	if (array == NULL || size == 0)
		return;

	/*iterate through the whole list*/
	for (; i < size -1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			/*find the minimum length of an unsorted list*/
			/*test against the elements that follow*/
			/*if an element is less make it the new minimum*/
			if (array[j] < array[pos])
				/*remember the index*/
                pos = j;
		}
		/*if newMin < oldMin*/
		if (pos!=i)
		{
			/*swap the two elements*/
			aux = array[i];
			array[i] = array[pos];
			array[pos] = aux;
			print_array(array, size);
		}
		
	}
}