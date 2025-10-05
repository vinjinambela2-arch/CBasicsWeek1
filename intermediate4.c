#include <stdio.h>

// Function declaration
float calculateAverage(float a, float b, float c);

int main() {
    // Variable declarations
    float num1, num2, num3, avg;
    
    // Get three numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    // Calculate average using function
    avg = calculateAverage(num1, num2, num3);
    
    // Display result
    printf("Average of %.2f, %.2f and %.2f = %.2f\n", num1, num2, num3, avg);
    
    return 0;
}

// Function to calculate average of three numbers
float calculateAverage(float a, float b, float c) {
    return (a + b + c) / 3.0;
}
