#include <stdio.h>
#include <math.h>

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int isArmstrongNumber(int n) {
    int originalNumber = n;
    int numDigits = countDigits(n);
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number
    if (isArmstrongNumber(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
