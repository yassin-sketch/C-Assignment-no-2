#include <stdio.h>


int countHoles(int num) {
    int holes = 0, digit;

    while (num > 0) {
        digit = num % 10;  
        num = num / 10;    
        
        switch (digit) {
            case 0:
            case 4:
            case 6:
            case 9:
                holes += 1;
                break;
            case 8:
                holes += 2;
                break;
            default:
                
                break;
        }
    }

    return holes;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int totalHoles = countHoles(num);

    printf("Total number of holes in %d = %d\n", num, totalHoles);

    return 0;
}
