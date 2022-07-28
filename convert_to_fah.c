# include <stdio.h>

/* Print a Celsius to Fahrenheit table
 * for celsius = 0 ... 300; floating-point version 
 */

int main (void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;    /* lower limit of temp */
    upper = 300;  /* upper limit */
    step  = 20;   /* step size */

    celsius = lower;

    printf("Cel to Fah\n");
    printf("==========\n");

    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
