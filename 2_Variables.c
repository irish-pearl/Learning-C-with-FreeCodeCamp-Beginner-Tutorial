// tuts from https://youtu.be/KJgsSFOSQv0
// these include thingy below helps us use our program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() //method main is important because this is what's gonna be executed
{
    //Basic Data Types
    //Numbers
    int dtAge = 54; //Integer is used to represent WHOLE NUMBERS
    printf("%d\n", dtAge);
    double gpa = 4.2; //double is used to represent DECIMAL NUMBERS
    printf("%f\n", gpa);

    //Characters
    char mood = 'B'; //single character
    printf("%c\n", mood);
    char sMood[] = "Brisky"; //array of charactersl. The brackets also allows the char to properly store a STRING. This is a must 
    printf("%s\n", sMood);

    /*To declare values, we must use the correct % to execute:
        %s for character with array of characters
        %c for single characters
        %d for integers
        %f for decimals
    */

    printf("\n");
    
    //Let's test it out!
    printf("Hello World!\n");
    printf("How are you, World?\n");
    printf("You're around 6,000,000,000 years old?!\n");

    printf("\n");
    //Let's change the name 'World' to 'Earth' without manually typing everything.
    char name[] = "Earth";
    int age = 4540000;

    printf("Hello %s!\n", name);
    printf("How are you, %s?\n", name);
    printf("You're around %d years old?!\n", age);

    printf("Wow! I'm only %d hahahaha. I'm only %f of your age, oldie %s\n", 16, 3.52, name);
    /* the % thingies helps the compjuter know that we're entering a special character.
    The inputs are entered after the closing quotation mark
    Same order inside the sentence, same order after the closing quotation mark.*/

    return 0;
}
