#include <stdio.h>

void print_times_table(int n) {
    // Check if n is within the valid range (0 to 15)
    if (n < 0 || n > 15) {
        return; // Do nothing if n is out of range
    }

    // Print the n times table
    printf("Times Table for %d:\n", n);
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Enter a number (0 to 15): ");
    scanf("%d", &n);
    print_times_table(n);
    return 0;
}

