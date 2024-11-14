#include "ssortdeclars.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(void* a, void* b, size_t size) 
{
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

void selection_sort(void *arr, size_t size, size_t elem_size, int (*cmp)(void*, void*)) 
{
    for (size_t i = 0; i < size - 1; i++) 
    {
        size_t min_elem = i;
        for (size_t j = i + 1; j < size; j++) 
        {
            if (cmp((char*)arr + j * elem_size, (char*)arr + min_elem * elem_size) < 0) 
            {
                min_elem = j;
            }
        }
        swap((char*)arr + i * elem_size, (char*)arr + min_elem * elem_size, elem_size);
    }
}

void string_sel_sort(char *arr[], int n) {
    int i, j, min_idx;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

