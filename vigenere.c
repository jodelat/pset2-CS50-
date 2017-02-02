#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    string line = NULL;
    int endChar = 0;
    int counter = 0;
    
    if(argc != 2)
    {
        printf("Usage: ./asciimath key\n");
        return 1;
    }
    
    for (int n = 0; n < strlen(key); n++)
    {
        if (!isalpha(argv[1][n]))
        {
            printf("enter an aplhebetical char\n");
            return 1;
        }
    }
    
    line = GetString();
    
    for (int i = 0, j = strlen(line); i < j; i++)
    {
        if (isalpha(line[i]))
        {
            counter = (endChar % strlen(key));
        }
        
        if (islower(line[i]))
        {
            if (islower(key[counter]))
            {
                line[i] = ((line[i] - 'a' + key[counter] - 97) %26) + 97;
            }
            
            else
            {
                line[i] = ((line[i] - 'a' + key[counter] - 65) % 26) + 97;
                printf("%c", line[i]);
            }
        }
        
                if (isupper(line[i]))
                {
                    if (islower(key[endChar]))
                        {
                    
                         line[i] = ((line[i] - 'A' + key[counter] - 97) % 26) + 65;
                        printf("%c", line[i]);
                        }
                    else
                        {
                            line[i] = ((line[i] - 'A' + key[counter] - 65) % 26) + 65;
                            printf("%c", line[i]);
                        }
           
                }
        printf("%c", line[i]);
    }
    printf("\n");
}