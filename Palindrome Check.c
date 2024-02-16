#include <stdio.h>

int isPalindrome(int n) {
    int reversed = 0, original = n;
    
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    if (original == reversed) {
        return 1; // palindrome
    } else {
        return 0; // not palindrome
    }
}

int main() {
    int n;
    
    printf("Enter a number to check if it's a palindrome: ");
    scanf("%d", &n);
    
    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    
    return 0;
}