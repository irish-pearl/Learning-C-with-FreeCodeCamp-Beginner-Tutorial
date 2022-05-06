//C Programming Tutorial by FreeCodeCamp
//Getting data input from users

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //FETCHING INTEGERS

    printf("FETCHING INTEGER\n");

    int age; //for this fetching, the user will give input/value to the int age instead of (we) declaring it
    printf("Enter your age: ");
    scanf("%d", &age); //Explanation below

    /*
    1. Scanf allows the user to type an input into the program, kinda like the input thingy in html
    2. Since we're getching their age, we'll type %d because this executes the integer values
    3. The & before the 'age' is what we call the pointer and it helps us store information (integer, float, char).
    */

    printf("Wew, you're %d years old", age); //After we store the age that the user typed, this printf will show the age that the user entered

    printf("\n");
    printf("\n");



    //DOUBLE VARIABLE TYPE

    printf("FETCHING A DECIMAL\n");

    double mathGrade;
    printf("What's your highest grade in Mathematics during High School? ");
    scanf("%lf", &mathGrade); //Use %lf when scanning double variable data typess

    printf("Nice! You got a %f", mathGrade);

    printf("\n");
    printf("\n");



    /* //SINGLE CHARACTER VARIABLE TYPE

    printf("FETCHING A LETTER-TYPE GRADE\n");

    char grade;
    printf("Enter your Science Subject grade: ");
    scanf("%c", &grade);

    printf("Eyoo!! You got %c", grade);

    printf("\n");
    printf("\n"); */



    //STRING CHARACTER VARIABLE TYPE

    printf("FETCHING A CHARACTER\n");

    char name[50]; //The 50 inside the square brackets indicates the maximum characters that can be typed
    printf("Hi cutie, what's your name? ");
    scanf("%s", name);

    printf("What a pretty name for a pretty face, %s\n", name);

    /* However, when entering a string of characters (for example the name), C would cut off until the first space.
    Try to type two names (e.g. "Jennie Kim"), it will only print "Jennie".

    To get a line of texts, we can use the 'fgets' function.
    It only stores the input into a string and not exactly in a variable.

    See the next code. */

    return 0;
}
