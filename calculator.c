#include <stdio.h>
int main() 
{
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("!! Division by zero is not allowed !!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("!! Modulo by zero is not allowed !!\n");
            } else {
                printf("!! Modulo will be calculated using integer parts only !!\n");
                int int_num1 = (int)num1;
                int int_num2 = (int)num2;
                int mod_result = int_num1 % int_num2;
                printf("Result: %d\n", mod_result);
            }
            break;
        default:
            printf("!! Invalid operator selected !!\n");
            break;
    }

    return 0;
}
