#include<stdio.h>
int main()
{
    int num, sum = 0;

     printf("Enter a 4-digit number: ");
      scanf("%d", &num);

      if(num<1000 || num>9999)
       {
         printf("Error: Please enter a valid 4-digit number!");
       }
      else
       {
           while(num>0)
            {
               sum += num % 10;
                num/=10;
            }

               if(sum % 2 == 1)
                {
                     printf("The sum of the digits is odd. Square of the sum is: %d\n", sum * sum);
                }
               else
                {
                     printf("The sum of the digits is even. Cube of the sum is: %d\n", sum * sum * sum);
                }
       }
             return 0;

}