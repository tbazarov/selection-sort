#include <stddef.h>

int compare_int(void *a, void *b);
int compare_float(void *a, void *b);
int compare_char(void *a, void *b);
int compare_string(void *a, void *b);
void selection_sort(void *arr, size_t size, size_t elem_size, int (*cmp)(void*, void*));
void string_sel_sort(char *arr[], int n);
void swap(void *a, void *b, size_t size);
