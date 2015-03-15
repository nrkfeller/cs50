#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
 
void initials(string s);
int main(void)
{
    string s;
    //printf("Give a name to put in initals: \n");
    s = GetString();
    initials(s);
     
}
void initials(string s)
{
    printf("%c", toupper(s[0]));
    for (int i = 0, n = strlen(s); i < n; i++)
        if (s[i] == ' ')
        {
            printf("%c", toupper(s[i+1]));
        }
    printf("\n");
}