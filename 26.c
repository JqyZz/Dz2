#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int array[12], result[12];
    printf("Початковий масив:\n");
    for (int i = 0; i < 12; i++)
    {
        array[i] = rand() % 25 - 12;
        printf("%i ", array[i]);
    }
    printf("\nРезультат:\n");

    int j = 0;
    for (int i = 0; i < 12; i++)
    {
        if (i >= 8)
        {
            result[i - 8] = array[i];
        }
        else
        {
            result[i + 4] = array[i];
        }
    }

    for (int i = 0; i < 12; i++)
    {
        printf("%i ", result[i]);
    }
    printf("\n");
}
