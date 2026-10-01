#include <stdio.h>
int main() {

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("this is an unsigned integer\n");
    } else if (num == 0) {
        printf("this is zero\n");
    } else {
        printf("this is a negative integer\n");
    }

    return 0;
}