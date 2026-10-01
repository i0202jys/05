#include <stdio.h>
int main() {

    int n1, n2;
    char op;
    int result;

    printf("input the calculation: ");
    scanf("%i%c%i", &n1, &op, &n2);

     if(op =='+')
        result = n1 + n2;
    else if(op == '-')
    
        result = n1 - n2; 

    else if(op == '*')
  
        result = n1 * n2;
   
    else if(op == '/')
    
        result = n1 / n2;
else
        printf("error\n");


    printf("= %i\n", result);

    return 0;
}