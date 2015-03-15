#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
 
void vcypher(string s, string a);
 
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string index = argv[1];
        int indexlength = strlen(index);
        for (int i = 0; i < indexlength; i++)
        {
            if (!isalpha(index[i]))
            {
                printf("Your index must be all alpha characters! \n");
                return 1;
            }
        }
        string message = GetString();
        vcypher(message, index);
    }
    else
    {
        printf("You may only enter one argument!\n");
        return 1;
    }
}
void vcypher(string msg, string index)
{
    for(int i = 0; index[i]; i++)
    {
        index[i] = tolower(index[i]);
    }
    int indexlength = strlen(index);
    int j = 0;
    for (int i = 0, msglen = strlen(msg); i < msglen; i++)
    {
        j = j%indexlength;
        if(isalpha(msg[i]))
        {
            if (isupper(msg[i]))
            {
                printf("%c", (msg[i] - 'A' + index[j] - 97)%26 + 65);
                j++;
            }
            else// if (islower(s[i]))
            {
                printf("%c", (msg[i] - 'a' + index[j] - 97)%26 + 97);
                j++;
            }
        }
        else if (msg[i] == ' ')
        {
            printf(" ");
        }
        else
        {
            printf("%c", msg[i]);
        }
         
    }   
    printf("\n");
}