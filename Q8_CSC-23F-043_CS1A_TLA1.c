#include <stdio.h>

int main() {
    int n;

    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Loop to print the hollow triangle
    for (int i = 1; i <= n; i++) {
        // Print asterisk for the first and last row
        if (i == 1 || i == n) {
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
        }
        // Print asterisk only at the beginning and end of other rows
        else {
            printf("* ");
            for (int j = 1; j <= i - 2; j++) {
                printf("  "); // Print spaces for the hollow part
            }
            printf("* ");
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
