#include <stdio.h>

int main(void) {
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    printf("%.2f\n", number);

    return 0;
}