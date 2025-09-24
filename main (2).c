#include <stdio.h>

int main() {
    
    // Example 1: Print numbers 1–5
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    // Example 2: Print powers of 2 (up to 32)
    int j = 1;
    do {
        printf("%d ", j);
        j *= 2;
    } while (j <= 32);
    printf("\n");

    // Example 3: Sum of first 5 numbers
    int k = 1, sum = 0;
    do {
        sum += k;
        k++;
    } while (k <= 5);
    printf("Sum = %d\n", sum);

    // Example 4: Print alphabet A–E
    char c = 'A';
    do {
        printf("%c ", c);
        c++;
    } while (c <= 'E');
    printf("\n");

    // Example 5: Countdown from 5 to 1
    int n = 5;
    do {
        printf("%d ", n);
        n--;
    } while (n > 0);
    
    return 0;
}
