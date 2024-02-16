 
// OIRIGA ELIJAH(ENE212-0093/2021)
#include <stdio.h>

int main() {
    // Declare variables
    double num1, num2, result;
    char operation;

    // Input
    printf("Enter first number: ");
    scanf_s("%lf", &num1);

    printf("Enter operator (+ for addition, - for subtraction): ");
    scanf_s(" %c", &operation, sizeof(operation));

    printf("Enter second number: ");
    scanf_s("%lf", &num2);

    // Perform calculation
    if (operation == '+') {
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } else if (operation == '-') {
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } else {
        printf("Invalid operator. Please use + or - for addition or subtraction.\n");
        return 1; // Return an error code
    }

    printf("THANK YOU FOR USING OIRIGA'S CALCULATOR\n");

    return 0; 
}
