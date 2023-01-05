#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int array[20], result[20], index = 0, signal;
    printf("Початковий масив:\n");
    for (int i = 0; i < 20; i++)
    {
        array[i] = rand() % 11;
        printf("%i ", array[i]);
    }
    printf("\nРезультат:\n");

    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (array[i] == array[j])
            {
                for (int k = 0; k < 20; k++)
                {
                    if (array[i] == result[k])
                    {
                        signal = 1;
                        break;
                    }
                    else
                    {
                        signal = 0;
                    }
                }
                if (signal == 0)
                {
                    result[index] = array[i];
                    index++;
                }
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%i ", result[i]);
    }
    printf("\n");
    return 0;
}