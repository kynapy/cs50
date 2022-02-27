#include <stdio.h>
#include <cs50.h> // get_string()
#include <stdlib.h> // atoi()
#include <ctype.h> // isdigit(), isalpha(), isupper(), islower()

int main(int argc, string argv[])
{
    // Ensuring I get only one command line variable (DONE)
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    else
    {
        // Going through the key to ensure it is all integers (DONE)
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            if (! isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        // Converting string key to int key (DONE)
        int key = atoi(argv[1]);
        
        // Ensuring I get a non-negative integer as a key
        if (key <= 0)
        {
            printf("Key cannot be less than 0\n");
            return 1;
        }
     
        // Asking for the plaintext
        string plaintext = get_string("plaintext: ");
        
        for (int i = 0; plaintext[i] != '\0'; i++)
        {
            if (isalpha(plaintext[i]))
            {
                if (isupper(plaintext[i]))
                {
                    plaintext[i] = (plaintext[i] - 64 + key) % 26;
                    plaintext[i] = plaintext[i] + 64;
                    
                }
                else if (islower(plaintext[i]))
                {
                    plaintext[i] = (plaintext[i] - 96 + key) % 26;
                    plaintext[i] = plaintext[i] + 96;
                }
            }
        }
        
        // Printing out the ciphertext
        printf("ciphertext: %s\n", plaintext);
        return 0;
    }
}