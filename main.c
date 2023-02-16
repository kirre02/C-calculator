#include <stdio.h>

int main()
{
  char operator;
  double firstNumber, secondNumber;

  printf("Select an operator (+, -, *, /) :");
  scanf("%c", &operator);

  printf("Enter two numbers");
  scanf("%lf %lf", &firstNumber, &secondNumber);

  switch (operator)
  {
  case '+':
    printf("%.1lf + %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
    break;

  case '-':
    printf("%.1lf - %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
    break;

  case '*':
    printf("%.1lf * %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
    break;

  case '/':
    printf("%.1lf / %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
    break;

  default:
    printf("incorrect operator\n");
    break;
  }
}
