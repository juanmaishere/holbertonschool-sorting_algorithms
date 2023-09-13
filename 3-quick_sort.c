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

void
sort_recursion(int *array, int start, int end, size_t size)
{
	int pivot = 0;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		sort_recursion(array, start, pivot - 1, size);
		sort_recursion(array, pivot + 1, end, size);
	}
}

void
quick_sort(int *array, size_t size)
{
	sort_recursion(array, 0, size - 1, size);
}
