#include "sort.h"
/**
 * bubble_sort- sorting element in ascending order
 * @array: This contain the array to be sorted
 * @size: The length of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, flag;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
