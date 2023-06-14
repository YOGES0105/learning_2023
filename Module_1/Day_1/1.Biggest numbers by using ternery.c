#include <stdio.h>

int LargeNumber(int num1, int num2) {
    int large = (num1 > num2) ? num1 : num2;
    return large;
}

int main() {
    int number1, number2;
    printf("Enter the 1st number: ");
    scanf("%d", &number1);
    printf("Enter the 2nd number: ");
    scanf("%d", &number2);

    int large = LargeNumber(number1, number2);
    printf("The largest number is: %d\n", large);

    return 0;
}
