#include "sort.h"
/**
 *selection_sort- Sorting using selection
 *@array: The array to be sorted
 *@size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if( min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}

	}
}
