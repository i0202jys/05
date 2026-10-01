#include <stdio.h>
int main() {

    int count=0;
    char c;
    printf("input a string: ");

    while((c = getchar()) != '\n') {
 
        if(c>='0' && c<='9') {
            count++;
        }

    }

    printf("Number of digits: %i\n", count);

    return 0;
}