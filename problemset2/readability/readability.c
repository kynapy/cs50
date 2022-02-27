#include <stdio.h> 
#include <cs50.h> // get_string
#include <ctype.h> //isaplha
#include <math.h> // round()

int main(void)
{
    // Getting text from user (DONE)
    string text = get_string("Text: ");
    
    // Counting and then printing number of letters in text (DONE)
    float letters = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }


    // Counting number of words in text (Redone)
    float words = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ' && text[i + 1] != ' ')
        {
            words++;
        }
    }
    words++;
    
    
    // Counting number of sentences (Redone)
    float sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '?' || text[i] == '.' || text[i] == '!')
        {
            sentences++;
        }
    }
    
    // Calculating grade level using Coleman-Liau index (Has some calculation error due to decimal)
    double L = letters / words * 100;
    double S = sentences / words * 100;
    double index = 0.0588 * L - 0.296 * S - 15.8;
    int fin = round(index);
    
    // Printing data (DONE)
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", fin);
    }
}