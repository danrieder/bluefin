// CS50 PS1 hello
// drieder 2022

#include <cs50.h>
#include <stdio.h>

int main(void) {
  string name = get_string("May I ask your name? ");
  printf("Hello, %s \n", name);
}
