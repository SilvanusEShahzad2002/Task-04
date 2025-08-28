#include <stdio.h>

int main() {
    int num;
    int count = 0;

    do {
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if (num != -1) {
            count++;
        }

    } while (num != -1);

    printf("Total numbers entered: %d\n", count);

    return 0;
}
