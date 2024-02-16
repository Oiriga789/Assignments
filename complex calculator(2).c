#include <stdio.h>

int main() {
    printf("Oiriga's Calculator\n");

    int choice;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Choose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            // Check if the divisor is not zero
            if (num2 != 0) {
                // Check if the numbers are divisible
                if ((int)num1 % (int)num2 == 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Numbers are not divisible!\n");
                }
            } else {
                printf("Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
