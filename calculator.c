#include <stdio.h>
#include <math.h>

int main()
{
    char op;
    int num1, num2, sol;
    printf("Enter the operator(+, -, /, *, p >>> power)\n");
    scanf("%c", &op);
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);

    if (op == '+')
    {
        sol = num1 + num2;
    }
    else if (op == '-')
    {
        sol = num1 - num2;
    }
    else if (op == '/')
    {
        sol = num1 / num2;
    }
    else if (op == '*')
    {
        sol = num1 * num2;
    }
    else if (op == 'p')
    {
        sol = pow(num1, num2);
    }
    printf("The solution is %d", sol);
    return 0;
}