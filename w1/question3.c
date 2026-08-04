#include <stdio.h>

int factorial(int num1) {
    int answer = 1;
    for (int i = 1; i <= num1; i++){
        answer = answer * i;
    }
    return answer;
}

int main(void){
    int num1;
    printf("enter number: ");
    scanf("%d", &num1);
    if(num1 >= 0) {
        printf("%d\n", factorial(num1));
    } else {
        printf("number is out of range g");
    }
}

