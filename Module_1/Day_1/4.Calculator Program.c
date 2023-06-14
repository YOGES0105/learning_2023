#include <stdio.h>

int main() {
    float num1, num2;
    char Operator;
    printf("Enter Operand 1: ");
    scanf("%f", &num1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &Operator);

    printf("Enter Operand 2: ");
    scanf("%f", &num2);
    float Result;
    switch (Operator) {
        case '+':
            Result = num1 + num2;
            break;
        case '-':
            Result = num1 - num2;
            break;
        case '*':
            Result = num1 * num2;
            break;
        case '/':
            Result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %.2f\n", Result);

    return 0;
}
