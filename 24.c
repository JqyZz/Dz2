#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num[10];
    int i, sum, random;
    int min = 0, max = 0;
    int upper = 10, lower = -10;
    
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        random = rand() % (upper - lower + 1) + lower;
        num[i] = random;
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }

        sum += random;
        printf("%d\t", num[i]);
    }
    printf("\n\nMax: %d", max);
    printf("\nMin:%d", min);

    return 0;
}