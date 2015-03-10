#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    int n;
    do
    {
        printf("Gimme a pos int less than 23\n");
        n = GetInt();
    }
    while((n > 23) || (n < 0));
     
    for (int i = 0; i < n; i++)
    {
        int c;
        c = i;
        while(n - c > 1) 
        {
            printf(" ");
            c++;
        }
        int h;
        h = i+1;
        do
        {
            printf("#");
            h--;
        }while(h>=0);
        printf("\n");
    }
}