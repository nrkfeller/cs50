#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
void ccypher(string s, int a);
 
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("You must enter a integer value at agrv[1]\n");
        return 1;
    }
    else
    {
        int num = atoi(argv[1]);
        string s;
        s = GetString();
        ccypher(s, num);
    }
}
void ccypher(string s, int a)
{
    for (int i = 0, n = strlen(s); i < n; i ++)
    {
        if(isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                printf("%c", (s[i] - 'A' + a)%26 + 65);
            }
            else// if (islower(s[i]))
            {
                printf("%c", (s[i] - 'a' + a)%26 + 97);
            }
        }
        else if (s[i] == ' ')
        {
            printf(" ");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}