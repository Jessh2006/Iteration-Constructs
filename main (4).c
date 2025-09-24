#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (5 to stop):\n");

    // Sentinel-controlled FOR loop
    for (;;) {   // infinite loop, sentinel breaks it
        scanf("%d", &num);
        if (num == -1) {
            break; // stop when sentinel value found
        }
        printf("You entered: %d\n", num);
    }

    printf("Loop ended. Sentinel value detected.\n");
    
    return 0;
}
