#include <stdio.h>

int main() {
    float num1, num2, result;
    int operation;

    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Division = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice! Please choose between 1–4.\n");
    }

    return 0;
}

