#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if (argc != 3) {
    printf("Usage: ./div <number1> <number2>\n");
    return 1;
  }
  float num1 = atof(argv[1]);
  float num2 = atof(argv[2]);
  if (num2 == 0) {
    printf("Error: Division by zero not allowed\n");
    } else {
      printf("Result: %.4f\n", num1 / num2); 
    }

  return 0;
}
