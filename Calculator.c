#include <stdio.h>

int main(int argc, char const *argv[]) {

  printf("Calculator\n");
  printf("----------\n");
  printf("\n");


int number;


    printf("Wählen sie eine Option\n");
    printf("Add(1)\n");
    printf("Subtract(2)\n");
    printf("Multiply(2)\n");
    printf("Devide(4)\n");
    printf("Stop Programm (-1)\n");

    printf("Enter your Choice: ");
    scanf("%d", &number);

    if(number == 1)
    {
      int summandOne;
      int summandTwo;
      int sum;

      printf("1. Summand: ");
      scanf("%d", &summandOne );
      printf("2. Summand: ");
      scanf("%d", &summandTwo);

      sum = summandOne+summandTwo;

      printf("Ergebniss: %d\n", sum);
    }
    else if(number == 2)
    {
      int subtrahent;
      int minuent;
      int differenc;

      printf("Minuend: ");
      scanf("%d", &minuent );
      printf("Subtrahend: ");
      scanf("%d", &subtrahent);

      differenc = minuent - subtrahent;

      printf("Erbegbniss: %d", differenc );
    }
    else if(number == 3)
    {

    }
    else if(number == 4)

  return 0;
}
