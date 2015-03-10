#include <cs50.h>
#include <stdio.h>
#include <math.h>
 
 
int main(void)
{
    float c;
    int p;
    int numofcoins = 0;
    do{
    printf("How many coins for this stinker!!???\n");
    c = GetFloat();
    }while (c < 0);
    c = round(c*100);// - (floor(c) *100);
    p = c;
    //printf("%i\n", p);
    while (p >= 25)
    {
        p = p - 25;
        numofcoins++;
    }
    while (p >= 10)
    {
        p = p - 10;
        numofcoins++;
    }
    while (p >= 5)
    {
        p = p - 5;
        numofcoins++;
    }
    while (p >= 1)
    {
        p = p - 1;
        numofcoins++;
    }
    printf("%i\n", numofcoins);
}
// must be float must be non negative
// use round function