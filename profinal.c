#include <stdio.h>
#include <math.h>

#define PI  3.14159

int main() {
char operation;
double num1, num2, result = 0;
printf("________________________________________\n");
printf("\nWELCOME TO HUMNA's Scientific Calculator\n");
 printf("________________________________________\n");
printf("Enter ]ur operation (+, -, *, /, sin, cos, tan, log, sqrt, exp): ");
scanf(" %c", &operation);
if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);
        
switch (operation) {
case '+': result = num1 + num2; 
break;
case '-': result = num1 - num2; 
break;
 case '*': result = num1 * num2; 
 break;
case '/': 
if (num2 != 0)
result = num1 / num2;
else {
printf("Enter valid input!!.\n");
return 1;
 }
 break;
        }
printf("Result: %lf\n", result);
    }
    else {
printf("Enter a   number for degree : ");
        scanf("%lf", &num1);

if          (operation == 's') result = sin(num1 * PI / 180);  
else if  (operation == 'c') result = cos(num1 * PI / 180);
else if   (operation =='t') result = tan(num1 * PI / 180);
else if   (operation =='l') result = log(num1);
else if   (operation =='q') result = sqrt(num1*num1);
else if (operation =='e') result = exp(num1);
        else {
               
            printf("Invalid operation Try again!!\n");
            return 1;
        }

        printf("Result: %.6lf\n", result);
    }

    return 0;
}