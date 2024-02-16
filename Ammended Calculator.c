#include <stdio.h>

// Function prototypes
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

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
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;  // Exit the program with an error code
    }

    printf("Result: %.2lf\n", result);

    return 0;
}

// Function definitions
double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    // Check if the divisor is not zero
    if (num2 != 0) {
        // Check if the numbers are divisible
        if ((int)num1 % (int)num2 == 0) {
            return num1 / num2;
        } else {
            printf("Numbers are not divisible!\n");
            return 0;  // Return 0 for non-divisible case
        }
    } else {
        printf("Cannot divide by zero!\n");
        return 0;  // Return 0 for division by zero
    }
}
 