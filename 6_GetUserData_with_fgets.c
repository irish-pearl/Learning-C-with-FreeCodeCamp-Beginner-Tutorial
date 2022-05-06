#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Using 'fgets' to grab a line of texts without breaking\n");
    printf("\n");

    char fullName[50];
    printf("Enter your full name: \n");
    fgets(fullName, 50, stdin); //Variable name, maximum number of characters, "Standard Input"
    printf("Welcome, %s", fullName);

    /*Upon entering the data, there's an empty line under the last printf.
    That's because when we hit enter, it gets stored as a new line character */

    return 0;
}
