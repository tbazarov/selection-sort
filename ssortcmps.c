#include "ssortdeclars.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int compare_int(void* a, void* b) 
{
    return (*(int*)a - *(int*)b);
}

int compare_float(void* a, void* b) 
{
    return (*(float*)a - *(float*)b) > 0 ? 1 : -1;
}

int compare_char(void* a, void* b) 
{
    return (*(char*)a - *(char*)b);
}


