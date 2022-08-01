// CS50 PSet1 mario
// compile with -lcs50
//
// Print a pyramid for mario to jump, based on user input.
// The pyramid must be between 1 and 8 blocks high

#include <cs50.h>
#include <stdio.h>

int main(void) {
  int count = 0;
  int min = 1;
  int max = 8;

  // Check for a valid int between min and max
  do {
    count = get_int("Height of the pyramid: ");
  } while (count < min || count > max);

  // Print the pyramid of size count
  for (int i = 1; i < count + 1; i++) {
    printf("%*c", max - (i - 1), ' ');
    printf("%.*s", i, "########");
    printf("%*c", 2, ' ');
    printf("%.*s", i, "########");
    printf("\n");
  }
}
