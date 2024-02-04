#include <stdio.h>

int main() {
  char letter = 'A';
  int number = 10;
  float floating = 10.1;
  long int long_number = 20;
  double double_floating = 20.51;
  char string[] = "This is a string";

  printf("letter is %c & it's size is %d bytes \n", letter, sizeof letter);
  printf("number is %d & it's size is %d bytes \n", number, sizeof number);
  printf("floating is %f & it's size is %d bytes \n", floating,
         sizeof floating);
  printf("long_number is %lg & it's size is %d bytes \n", long_number,
         sizeof long_number);
  printf("double_floating is %lf & it's size is %d bytes \n", double_floating,
         sizeof double_floating);

  printf("string = %s\n", string);
}