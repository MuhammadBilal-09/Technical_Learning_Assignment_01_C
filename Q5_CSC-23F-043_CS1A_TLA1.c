#include<stdio.h>
#include<math.h>

int isArmstrong(int num)
{
     int originalNum, remainder, result = 0;
      originalNum = num;

          while(originalNum !=0)
            {
               remainder = originalNum % 10;
               result += pow(remainder, 3);
               originalNum /= 10;
            }
            if (result == num)
                return 1;
            else
                return 0;
}

int main()
{
      int choice, num, digit, temp, reversedNum;

      while (1)
{
         printf("****Menu****\n");
         printf("1- Armstrong number\n");
         printf("2- Digit sum\n");
         printf("3- Swap number\n");
         printf("4- Reverse number\n");
         printf("Enter your choice (1-4): ");
         scanf("%d", &choice);

        switch (choice)
   {
        case 1:
             printf("Enter a number: ");
             scanf("%d", &num);
             if (isArmstrong(num))
              {
                  printf("%d is an Armstrong number.\n", num);
              }
             else
              {
                  printf("%d is not an Armstrong number.\n", num);
              }
              break;

         case 2:
              printf("Enter a number: ");
              scanf("%d", &num);
              int sum = 0;
              while (num > 0)
                {
                  digit = num % 10;
                  sum += digit;
                  num /= 10;
                }
                printf("Sum of the digits: %d\n", sum);
                break;

          case 3:
               printf("Enter two numbers seperated by space: ");
               scanf("%d %d", &num, &temp);
               printf("Swapping numbers...\n");
               int swap = num;
               num = temp;
               temp = swap;
               printf("After swapping: %d %d\n", num, temp);
               break;
             
          case 4:
               printf("Enter a number: ");
               scanf("%d", &num);
               reversedNum = 0;
               while (num != 0)
                 {
                    reversedNum = reversedNum * 10 + num % 10;
                    num /= 10;
                 }
                 printf("Reversed number: %d\n", reversedNum);
                 break;  
        }
     }


     return 0;
}