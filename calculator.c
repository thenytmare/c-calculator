#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                int int_num1 = (int)num1;
                int int_num2 = (int)num2;
                int mod_result = int_num1 % int_num2;
                printf("Result: %d\n", mod_result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}