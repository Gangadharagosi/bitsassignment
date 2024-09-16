#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two numbers
    printf("Enter two numbers (dividend and divisor): ");
    scanf("%f %f", &num1, &num2);

    // Check if the divisor is not zero to avoid division by zero
    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

