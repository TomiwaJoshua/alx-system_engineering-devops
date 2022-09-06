#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Basic Calculator with single function(I found a way to make it multifunctional)//
int main()
{
    double num1;
    double num2;
    int answer;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("What would you like to do?(mul : 1, add : 2, sub : 3, div : 4): ");
    scanf("%d", &answer);
    if (answer == 1)
        printf("Answer: %f", num1 * num2);

   else if (answer == 2)
        printf("Answer: %f", num1 + num2);

   else if (answer == 3)
        printf("Answer: %f", num1 - num2);

   else if (answer == 4)

        printf("Answer: %f", num1 / num2);
   else
        printf("Error: Wrong Input");

    return 0;
}

