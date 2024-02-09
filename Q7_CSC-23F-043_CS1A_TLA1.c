#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms you want to generate in the Fibonacci sequence: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    if (n >= 1) {
        printf("0");
    }

    if (n >= 2) {
        printf(", 1");
    }

    int a = 0, b = 1;
    for (int i = 3; i <= n; i++) {
        int next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
