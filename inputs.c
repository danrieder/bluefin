# include <stdio.h>
# include <string.h>

/* Get some user input 
 * make sure it can have white space
 * print what we got */

int main(void)
{
    // Initialize the variables we need
    char name[25];  //bytes
    int age;

    // Get the user input - deal with spaces in name
    printf("\nWhat's your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    // Get the age
    printf("\nHow old are you?");
    scanf("%d", &age);
  
    // do something with what we got
    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

}
