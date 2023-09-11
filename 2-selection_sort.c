#include "sort.h"
void
selection_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    size_t index = 0, i, j;
    int temp = 0;
    
    for (i = 0; i < size - 1; i++)
    {
        index = i;
        
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[index])
            {
                index = j;
            }
        }
        
        if (index != i)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
            print_array(array, size);
        }
    }
}
