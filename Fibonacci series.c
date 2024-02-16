#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci series up to %d: ", n);
    
    while (first <= n) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number to generate Fibonacci series up to: ");
    scanf("%d", &n);
    
    generateFibonacci(n);
    
    return 0;
}768