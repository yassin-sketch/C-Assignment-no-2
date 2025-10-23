#include <stdio.h>


float calculate(char operation, float num1, float num2);

int main() {
    char op;
    float a, b, result;

 
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);  
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    result = calculate(op, a, b);

    if (result == -9999) {
        printf("Error: Invalid operation.\n");
    } else if (result == -8888) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result = %.2f\n", result);
    }

    return 0;
}


float calculate(char operation, float num1, float num2) {
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else
                return -8888;  
        default:
            return -9999; 
    }
}
