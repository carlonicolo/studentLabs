#include <stdio.h>
#include "math_utils.h"

int main() {
    int a = 10, b = 2;
    

    printf("Sum: %d\n", sum(a, b));
    printf("Subtract: %d\n", subtract(a, b));
    printf("Product: %d\n", mult(a, b));
    printf("Division: %d\n", div(a, b));

    return 0;
}
