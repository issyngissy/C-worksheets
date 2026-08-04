#include <stdio.h>

int main(void){
    int count, i;
    printf("please enter your number: ");
    scanf("%d", &count);
    
    i = 0;
    for(i=0; i<count; i++) {
        printf("%d\n", i);
    }

}