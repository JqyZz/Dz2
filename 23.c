#include <stdio.h>

int main() 
{
  int number[5], loop, count, sum = 0;
  double average;

  printf("Введіть кількість чисел: ");
  scanf("%d", &count);

  for(loop = 0; loop < count; loop++) 
  {
    printf("Введіть %d число: ", loop + 1);
    scanf("%d", &number[loop]);
          
    sum += number[loop];
  }
  
  average = (double) sum / count;
  printf("Average = %.2lf", average);

  return 0;
}