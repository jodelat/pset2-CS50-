#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int key = 0;
    string line;
    
    if(argc != 2)
    {
        printf("Usage: ./asciimath key\n");
        return 1;
    }
    
    key = atoi(argv[1]);
    
    
    line = GetString();
    
    for (int i = 0, j = strlen(line); i < j; i++)
    {
        if (islower(line[i]) && isalpha(line[i]))
        {
            line[i] = (line[i] - 'a' + key) % 26 + 97;
        }
        
        else if (isupper(line[i]) && isalpha(line[i]))
        {
            line[i] = (line[i] - 'A' + key) % 26 + 65;
        }
        
        printf("%c", line[i]);
    }
    
    printf("\n");
    
}