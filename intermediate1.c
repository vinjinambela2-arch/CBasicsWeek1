#include <stdio.h>

// Function declaration
void checkEvenOdd(int num);

int main() {
    int number;
    
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call function to check even or odd
    checkEvenOdd(number);
    
    return 0;
}

// Function definition to check if number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
}
