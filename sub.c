#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  if (argc != 3){
    printf("Usage: %s <operand1> <operand2>\n", argv[0]);
    return 1;
  }
  int operand1 = atoi(argv[1]);
  int operand2 = atoi(argv[2]);
  printf("%d\n", operand1 - operand2);
  
  return 0;
}
