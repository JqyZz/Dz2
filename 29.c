#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int n = 20; // Число елементів (для простого збільшення складності задачі)
    int array[n], a, search;
    printf("Початковий масив:\n");
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 101;
        printf("%i ", array[i]);
    }
    printf("\nРезультат:\n");

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (array[i] > array[j])
            {
                a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    search = get_int("Який елемент шукаємо: ");

    int first = 0;
    int last = n - 1;
    int middle = (first+last)/2;

    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("%d знайдено на місці %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Не знайдено! %d не присутнє в масиві.\n", search);

    return 0;
}