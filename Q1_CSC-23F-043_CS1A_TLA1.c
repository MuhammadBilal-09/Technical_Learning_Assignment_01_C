#include<stdio.h>
#include<math.h>

int main()
{
     int num, originalNum, digit, sum = 0;

       //Take input
          printf("Enter a three digit number: ");
           scanf("%d", &num);
  if(num<100 || num>999)
   {
     printf("Error: Entered number is not a 3-digit number.\n");
   }
  else
   {
     originalNum = num;

       while(originalNum>0)
        {
           digit = originalNum % 10;
            sum += pow(digit, 3);
             originalNum /= 10;
        }
         
    if(sum == num)
     {
        printf("The number %d is an armstrong number.\n", num);
        printf("Digits of the number, one by one:\n");
        printf("%d\n", num / 100);
        printf("%d\n", (num / 10) % 10);
        printf("%d\n", num % 10);
     }
    else
     {
        printf("The number %d is not an armstrong number.\n", num);
     }


   }
       return 0;
}