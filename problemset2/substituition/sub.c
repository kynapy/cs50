#include <stdio.h>
#include <cs50.h> // get_string()
#include <ctype.h> //
#include <string.h> // strlen()

int main(int argc, string argv[])
{
    // Check if a command line argument is provided
    if (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }
    
    // Check if only letters are provided
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (! isalpha(argv[1][i]))
        {
            printf("Key must only contain alphabetic characters\n");
            return 1;
        }
    }
    
    // Check if 26 letters are provided
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    
    // Check for repeated characters
    for (int i = 0; ; i++)
    
    // Start mapping 
    string plaintext = get_string("plaintext: ");
}