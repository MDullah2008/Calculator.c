#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846  

int main() {
    char operation;
    double num1, num2;

    printf("Welcome to Simple Calculator.........  ; )\n");
    printf("Here are the available operations\n");
    printf("Arithmetic: +, -, *, /\n");
    printf("Trigonometric: s for sin, c for cos, t for tan\n");
    printf("Inverse Trigonometric: m (asin), n (acos), o (atan)\n");
    printf("Enter 'x' to Exit.\n");

    while (1) {
        printf("\nEnter operation please: ");
        scanf(" %c", &operation); // Notice the space before %c

        if (operation == 'x') {
            break;
        }

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            switch (operation) {
                case '+':
                    printf("RESULT: %.2lf\n", num1 + num2);
                    break;
                case '-':
                    printf("RESULT: %.2lf\n", num1 - num2);
                    break;
                case '*':
                    printf("RESULT: %.2lf\n", num1 * num2);
                    break;
                case '/':
                    if (num2 != 0) {
                        printf("RESULT: %.2lf\n", num1 / num2);
                    } else {
                        printf("Denominator cannot be zero.\n");
                    }
                    break;
                default:
                    printf("Invalid operator selected.\n");
                    break;
            }
        } else if (operation == 's' || operation == 'c' || operation == 't') {
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);

            num1 = num1 * (PI / 180); // Convert to radians

            switch (operation) {
                case 's':
                    printf("RESULT: %.2lf\n", sin(num1));
                    break;
                case 'c':
                    printf("RESULT: %.2lf\n", cos(num1));
                    break;
                case 't':
                    printf("RESULT: %.2lf\n", tan(num1));
                    break;
                default:
                    printf("Invalid trigonometric operator selected.\n");
                    break;
            }
        } else if (operation == 'm' || operation == 'n' || operation == 'o') {
            printf("Enter value please: ");
            scanf("%lf", &num1);

            switch (operation) {
                case 'm':
                    if (num1 >= -1 && num1 <= 1) {
                        printf("RESULT: %.2lf degrees\n", asin(num1) * (180 / PI));
                    } else {
                        printf("Error: Value out of range for asin. Must be between -1 and 1.\n");
                    }
                    break;
                case 'n':
                    if (num1 >= -1 && num1 <= 1) {
                        printf("RESULT: %.2lf degrees\n", acos(num1) * (180 / PI));
                    } else {
                        printf("Error: Value out of range for acos. Must be between -1 and 1.\n");
                    }
                    break;
                case 'o':
                    printf("RESULT: %.2lf degrees\n", atan(num1) * (180 / PI));
                    break;
                default:
                    printf("Invalid inverse trigonometric operation chosen.\n");
                    break;
            }
        } else {
            printf("Invalid operation. Please try again. Tysm.\n");
        }
    }

    printf("Goodbye!\n");
    return 0;
}
