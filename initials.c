#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i = 0;
    string name;
    name = GetString();
    char first;
    first = name[0];
    printf("%c", toupper(first));
    for(i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
           
            printf("%c", toupper(name[i + 1]));
        }
    }
  printf("\n");
}