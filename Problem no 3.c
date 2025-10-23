#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

// Function to display prime numbers between two intervals
void displayPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num1, num2;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &num1, &num2);

    // Ensure correct order of intervals
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    displayPrimes(num1, num2);

    return 0;
}
