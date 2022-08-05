#include <cs50.h>
#include <stdio.h>
#include <string.h>

/*
int count_l(string);
int count_w(string);
int count_s(string);
*/

float l, w, s;
string txt;
int count_letters(string text);

int main(void) {
  string txt = get_string("Text: ");
  int i = strlen(txt);
  printf("%d letters\n", i);
}

int count_letters(string text) {
  l = 0;
  for (int i = 0, n = strlen(txt); i < n; i++)
    l++;
  //return l;
}
