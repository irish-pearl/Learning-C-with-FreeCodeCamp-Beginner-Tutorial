// tuts from https://youtu.be/KJgsSFOSQv0
// these include thingy below helps us use our program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() //method main is important because this is what's gonna be executed
{
    printf("Hello Cutie!\n"); // prints "Hello World" on the terminal
    printf("We got no line break! "); // the '\n' breaks the line so the next code would start on another line. In this case, we don't have a line break.
    printf("I have one!\n"); // the line break '\n' makes the first printf part of the triangle stars on another line, instead of the same line

    // Let's draw a triangle shape

    // '\n' is a break so if u write it this way (see code below), only the first half will be printed
    printf("   /|\n");
    printf("  / | \n");
    printf(" /  |  \n");
    printf("/___|___\n");

    printf("\n");

    return 0;
}
