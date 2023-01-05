#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SearchForSameNumbers(int arr[], int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        for (int j = i + 1; j < lenght; j++)
        {
            if (arr[i] == arr[j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    int n = 100; // Число елементів (Використовувати для перевірки!!!)
    int array[n], result;
    printf("\nМасив:\n");
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 1001;
        printf("%i ", array[i]);
    }
    printf("\n");
    printf("\n");

    result = SearchForSameNumbers(array, n);
    if (result == 1)
    {
        printf("Серед елементів масиву Є два однакових.\n");
    }
    if (result == 0)
    {
        printf("Серед елементів масиву НЕМАЄ двох однакових.\n");
    }
}