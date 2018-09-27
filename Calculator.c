#include <stdio.h>

int main(int argc, char const *argv[]) {

  printf("Calculator\n");
  printf("----------\n");
  printf("\n");


int number;

  do {
    printf("Wählen sie eine Option\n");
    printf("Add(1)\n");
    printf("Subtract(2)\n");
    printf("Multiply(2)\n");
    printf("Devide(4)\n");
    printf("Stop Programm (-1)\n");

    printf("Enter your Choice: ");

    scanf("%d\n", &number);
    printf("%d\n",number);
} while(number != -1);

  return 0;
}
