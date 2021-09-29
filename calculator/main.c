#include <stdio.h>

int main() {
    double num1, num2, output;
    char op;
    printf("Please enter operator (+, -, *, /):");
    scanf("%c", &op);
    printf("Please enter first number:");
    scanf("%lf", &num1);
    printf("Please enter second number:");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
            output = num1 + num2;
            printf("%f + %f = %f", num1, num2, output);
            break;
        case '-':
            output = num1 - num2;
            printf("%f - %f = %f", num1, num2, output);
            break;
        case '*':
            output = num1 * num2;
            printf("%f * %f = %f", num1, num2, output);
            break;
        case '/':
            output = num1 / num2;
            printf("%f / %f = %f", num1, num2, output);
            break;
        default:
            printf("Error! Operator not correct!");
    }
    return 0;
}