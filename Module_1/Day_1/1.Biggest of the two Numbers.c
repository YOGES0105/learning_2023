#include <stdio.h>
int Largenumber(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    int large = Largenumber(num1, num2);
    printf("The largest number is: %d\n", large);

    return 0;
}
