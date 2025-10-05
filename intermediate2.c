#include <stdio.h>

// Function declaration
long long factorial(int n);

int main() {
    int num;
    
    // Get input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check for valid input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display factorial
        long long result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}

// Function to calculate factorial recursively
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
