#include "sort.h"

void
insertion_sort_list(listint_t **list)
{
    listint_t *back;
    listint_t *current;
    listint_t *next;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        back = current->prev;
        next = current->next;

        while (back != NULL && back->n > current->n)
        {
            
            if (back->prev != NULL)
                back->prev->next = current;
            else
                *list = current;

            if (current->next != NULL)
                current->next->prev = back;

            back->next = current->next;
            current->prev = back->prev;
            current->next = back;
            back->prev = current;

            if (back->next != NULL)
                back->next->prev = back;
            
            if (current->prev != NULL)
                current->prev->next = current;

            print_list(*list);

            back = current->prev;
        }

        current = next;
    }
}
