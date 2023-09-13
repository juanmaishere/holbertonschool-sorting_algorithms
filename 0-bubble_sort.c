#include "sort.h"
/**
 * bubble_sort - the array to sorting
 * @size: the size of the array
*/
void
bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int swap = 0, temp = 0;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			swap = 1;
			print_array(array, size);
			}
		}
		if (swap == 0)
		{
			break;
		}
}
}
