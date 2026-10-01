#include <stdio.h>
int main() {

    int n;
    int sum=0;
    int i;

    printf("input number: ");
    scanf("%i", &n);

    for(i=0; i<n; i++) {
        sum =sum + i + 1;
    }
printf("Sum of digits: %d\n", sum);

    return 0;
}