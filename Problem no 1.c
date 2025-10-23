#include <stdio.h>


int cube(int num)
{
    return num * num * num;
}

int main()
{
    int number, result;

    printf("Enter any number: ");
    scanf("%d", &number);

    result = cube(number);

    printf("Cube of %d is: %d\n", number, result);

    return 0;
}
