#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int array[10], half1[5], half2[5];
    printf("Початковий масив:\n");
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 21 - 10;
        printf("%i ", array[i]);
    }
    printf("\nРезультат:\n");

    int j = 0;
    for (int i = 4; i >= 0; i--)
    {
        half1[j] = array[i];
        printf("%i ", half1[j]);
        j++;
    }
    j = 0;
    for (int i = 9; i >= 5; i--)
    {
        half2[j] = array[i];
        printf("%i ", half2[j]);
        j++;
    }
    printf("\n");
}