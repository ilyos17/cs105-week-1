#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double radius;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    printf("Area: %.2f\n", PI * radius * radius);

    return 0;
} 