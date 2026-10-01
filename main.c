#include <stdio.h>
int main() {

    int answer=56;
    int x;
    int try=0;

   do
   {
    printf("Guess the number: ");
    scanf("%d", &x);
    
    try++;
    
    if (x < answer)
        printf("Too low! Try again: ");
    else if (x > answer)
        printf("Too high! Try again: ");

   } while (answer != x);
   printf("Congratulations! The number was %d.\n try: %d", answer, try);
   

    return 0;
}