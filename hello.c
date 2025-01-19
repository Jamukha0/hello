
#include <stdio.h> 
int main()
{
int num1, num2;
float result;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
result = (float) (num1 + num2) / 2;
printf("XXX of %d and %d is: %.2f", num1, num2, result);
return 0;
}