#include <stdio.h>

int main() {
    // Variable declaration
    int n;
    
    // Get input from user
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Check if number is positive or non-positive
    if (n > 0) {
        printf("Positive");
    } else {
        printf("Non-positive");
    }
    
    return 0;
}
