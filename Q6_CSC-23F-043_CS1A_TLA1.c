#include <stdio.h>

void decimalToBase(int decimal, int base) {
    int result[32];
    int index = 0;

    while (decimal > 0) {
        result[index] = decimal % base;
        decimal /= base;
        index++;
    }

    printf("Decimal number %d in base %d is : ", decimal, base);

    for (int i = index - 1; i >= 0; i--) {
        if (result[i] < 10) {
            printf("%d", result[i]);
        } else {
            printf("%c", 'A' + (result[i] - 10));
        }
    }

    printf("\n");
}

int main() {
    char choice;
    int decimal, base;

    while (1) {
        printf("To convert into Hexadecimal Enter 'H'\n");
        printf("To convert into Octal Enter 'O'\n");
        printf("To convert into Binary Enter 'B'\n");
        printf("To exit Enter 'E'\n>> ");

        scanf(" %c", &choice);

        if (choice == 'E') {
            break;
        }

        if (choice != 'H' && choice != 'O' && choice != 'B') {
            printf("Invalid input. Please enter 'H', 'O', 'B', or 'E'.\n");
            continue;
        }

        printf("Enter the decimal number: ");
        scanf("%d", &decimal);

        switch (choice) {
            case 'H':
                base = 16;
                break;
            case 'O':
                base = 8;
                break;
            case 'B':
                base = 2;
                break;
        }

        decimalToBase(decimal, base);
    }

    return 0;
}
