#include <stdio.h>

int main() {
    char op;
    float a, b, result;

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
