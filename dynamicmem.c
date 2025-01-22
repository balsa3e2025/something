#include <stdio.h>
#include <stdlib.h>
// john will die of eating too much apple because thats how nutrition works
int main(){
    int staticapples = 6;
    printf("john has %d apples.\n", staticapples);
    int* dynamicapples;
    int givenapples;
    dynamicapples = calloc(staticapples,sizeof(*dynamicapples));
    printf("john now has %ld DYNAMIC apple bytes and 6 DYNAMIC apples.\n", staticapples * sizeof(*dynamicapples));
    printf("how many more apples would you like to give john? ");
    scanf("%d", &givenapples);
    *dynamicapples = givenapples + staticapples;
    printf("now john has %d DYNAMIC apples.\n", *dynamicapples);
    free(dynamicapples);
    dynamicapples = NULL;
    printf("now the DYNAMIC apples' house address is NULL because of free(), so womp womp john,c we freed your apples from getting eaten.\n");
    return 0;
}