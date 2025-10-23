#include <stdio.h>

int checkNumber(int n) {
    int temp;

    if (n <= 0)
        return -1; 
    temp = n;
    while (temp % 2 == 0) {
        temp /= 2;
    }
    if (temp == 1)
        return 1; 

    
    temp = n;
    while (temp % 3 == 0) {
        temp /= 3;
    }
    if (temp == 1)
        return 0; 

    
    return -1;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = checkNumber(num);

    if (result == 1)
        printf("%d is a power of 2.\n", num);
    else if (result == 0)
        printf("%d is a power of 3.\n", num);
    else
        printf("%d is neither a power of 2 nor a power of 3.\n", num);

    return 0;
}
