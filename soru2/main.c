#include <stdio.h>
#include <stdlib.h>



int minEleman(int dizi[], int n)
{
    int min = dizi[0];
    int i;
    for (i = 1; i < n; i++)
        if (dizi[i] < min)
            min = dizi[i];
    return min;
}

