#include <stdio.h>

int isDivisible(int num1,int num2) {
    if(num1 % num2 == 0) {
        printf("The number is divisible!");
    } else {
        printf("The number is NOT divisible!");
    }
}

int main(void) {
    int num1, num2;

    printf("enter the numerator: ");
    scanf("%d", &num1);
    printf("enter the denominator: ");
    scanf("%d", &num2);

    isDivisible(num1, num2);

    return 0;
}

