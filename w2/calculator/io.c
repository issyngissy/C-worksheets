#include<stdio.h>
#include"io.h"

int readInt() {
    int number;

    printf("please enter an int : ");
    scanf("%d", &number);

    return number;
}