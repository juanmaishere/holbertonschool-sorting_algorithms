#include "sort.h"

int
partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int greater = (start - 1);
	int i, temp;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			greater++;
			if (greater < i)
			{
				temp = array[greater];
				array[greater] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[end] < array[greater + 1])
	{
		temp = array[greater + 1];
		array[greater + 1] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (greater + 1);
}
