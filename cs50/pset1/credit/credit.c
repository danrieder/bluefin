// CS50 Pset1 credit
// drieder 2022
// compile with -lcs50
//
// Validate a CC number
// Answer with CC type or invalid

#include <cs50.h>
#include <stdio.h>

int main(void) {
  // Read the card number
  long entnum = get_long("Please enter a valid CC Number: ");

  // Validate the number length
  int i = 0;
  long ccnum = entnum;

  while (ccnum > 0) {
    ccnum = ccnum / 10;
    i++;
  }
  // Check the value of i for valid length
  if (i != 13 && i != 15 && i != 16) {
    printf("INVALID\n");
    return 0;
  }
  // Calculate sum with Luhn's Algorithm
  int evensum = 0, oddsum = 0, total = 0;
  int add1, add2, doub1, doub2;
  long ccnumber = entnum;

  do {
    // Remove last digit and add to evensum
    add1 = ccnumber % 10;
    ccnumber = ccnumber / 10;
    evensum = evensum + add1;
    // Remove second last digit
    add2 = ccnumber % 10;
    ccnumber = ccnumber / 10;
    // Double second last digit and add digits to oddsum
    add2 = add2 * 2;
    doub1 = add2 % 10;
    doub2 = add2 / 10;
    oddsum = oddsum + doub1 + doub2;
  } while (ccnumber > 0);
  total = evensum + oddsum;

  // Evaluate total
  if (total % 10 != 0) {
    printf("INVALID\n");
    return 0;
  }

  // Get and check the leading digits to find type
  long leading = entnum;
  do {
    leading = leading / 10;
  } while (leading > 100);

  // debug mastercard
  // printf("%ld \n", leading);

  if ((leading / 10 == 5) && (0 < leading % 10 && leading % 10 < 6)) {
    printf("MASTERCARD\n");
  } else if ((leading / 10 == 3) && (leading % 10 == 4 || leading % 10 == 7)) {
    printf("AMEX\n");
  } else if (leading / 10 == 4) {
    printf("VISA\n");
  } else {
    printf("INVALID\n");
  }
}
