// TOKENIZING MODULE SOURCE
#define _CRT_ SECURE_NO WARNINGS 
#define BUFFER_SIZE 300
#include "tokenizing.h"

/* Version 1 */
void tokenizing(void) 
{
    printf ("*** Start of Tokenizing Words Demo ***\n"); 
    char words[BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;
    do{
        printf ("Type a few words separated by space (q - to quit): \n"); //prompt for user input
        fgets (words, BUFFER_SIZE, stdin) ; //gets user input (up to 300 chars)
        words[strlen (words) - 1] = '\0'; //ensures 'words' is a valid c string 
        if (strcmp (words, "q") != 0) {
            nextWord = strtok(words, " "); //tokenizes groups of chars(words) seperated by a space
            wordsCounter = 1;
            while (nextWord) 
            {
                printf ("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //prints each tokenized word in order and updates 'wordsCounter'
                nextWord = strtok(NULL, " "); //updates already printed token to NULL
            }
        }    
    }while(strcmp(words, "q") != 0); //runs while user does not enter the string literal "q"
    printf ("*** End of Tokenizing Words Demo ***\n\n"); //prints exit message


/* Version 2 */
printf ("*** Start of Tokenizing Phrases Demo ***\n");
char phrases[BUFFER_SIZE];
char* nextPhrase = NULL; 
int phrasesCounter;
do
{
    printf("Type a few phrases separated by comma (q - to quit) :\n");
    fgets(phrases, BUFFER_SIZE, stdin) ;
    phrases [strlen (phrases) - 1] = '\0';
    if((strcmp (phrases, "q") != 0)) 
    {
        nextPhrase = strtok (phrases, ",");
        phrasesCounter = 1;
        while(nextPhrase) 
        {
            printf ("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
            nextPhrase = strtok (NULL, ",");
        }   
    }
}while (strcmp (phrases, "q") != 0);
printf ("*** End of Tokenizing Phrases Demo***\n\n");

/* Version 3 */



}