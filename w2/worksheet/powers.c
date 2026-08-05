#include <stdio.h>

void main() {
    int i;

    for (i = 0; i < 10; i++){
        print("%d\n", result());
    }
    return 0;
}

int result() {
    int result = 1;
    result = result * 2;
    return result;
}