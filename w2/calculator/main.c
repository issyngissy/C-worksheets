#include<stdio.h>
#include"io.h"    //quotation marks for local file
#include"calc.h"

#define SQUARE(x) ((x) * (x))


int main() { 
    int num1, num2;

    printf("5 squared is %d\n", SQUARE(5));

    num1 = readInt();
    num2 = readInt();

    printf("%d\n%d\n", addition(num1, num2), minus(num1,num2));


    return 0;
}

