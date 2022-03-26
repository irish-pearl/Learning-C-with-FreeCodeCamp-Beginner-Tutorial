#include <stdio.h>
#include <stdlib.h>
#include <string.h> //allows me renew a value of a char array: line #14
#include <math.h>

int main() {
    printf("Making a variable constant\n");
    printf("\n");


    //non-constant
    char nonConst[] = "Jonah Cutie";
    printf("%s\n", nonConst);
    strcpy(nonConst, "My wifey");
    printf("%s\n", nonConst);

    printf("\n");
    int nonConstNum = 1;
    printf("%d\n", nonConstNum);
    nonConstNum = 2;
    printf("%d", nonConstNum);


    //Constant
    const int constNum = 23;
    printf("%d\n", constNum);
    /* constNum = 4; //will always be ERROR and the code won't run because the int costNum value can't be replaced
    printf("%d", constNum); */

    return 0;
}
