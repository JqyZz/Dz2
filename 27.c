#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int array[10], a;
    printf("Початковий масив:\n");
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 101;
        printf("%i ", array[i]);
    }
    printf("\nРезультат:\n");

    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if ((array[i] % 10) > (array[j] % 10))
            {
                a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    return 0;
}