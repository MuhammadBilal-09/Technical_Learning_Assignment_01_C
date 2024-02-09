#include<stdio.h>
int main()
{
    int number, reverse = 0;

     printf("Enter a two digit number: ");
      scanf("%d", &number);

      if(number < 10 || number > 99)
       {
          printf("Error: Please enter a valid 2-digit number!");
       }
      else
       {
          while(number != 0)
            {
                reverse = reverse * 10 + number % 10;
                  number /= 10;
            }
              printf("Reversed number: %d \n", reverse);
       }
    return 0;
}