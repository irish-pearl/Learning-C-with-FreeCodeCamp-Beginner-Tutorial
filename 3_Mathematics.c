#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //allows me to perform math

int main() {
    printf("Dealing with numbers\n");
    //C will always print precise numbers

    printf("\n");
    printf("%d", 12 + 11);

    printf("%f\n", pow(2, 3)); //2 raised to the 3rd power
    printf("%f\n", sqrt(12)); //fetching square root
    printf("%f\n", ceil(2.3090)); //rounding up
    printf("%f\n", floor(2.3090)); //rounding off

    return 0;
}
