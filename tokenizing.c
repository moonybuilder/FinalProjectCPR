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
printf ("*** Start of Tokenizing Phrases Demo ***\n");//start of phrases tokenizer
char phrases[BUFFER_SIZE];
char* nextPhrase = NULL; 
int phrasesCounter;
do
{
    printf("Type a few phrases separated by comma (q - to quit) :\n");//prompt for user input
    fgets(phrases, BUFFER_SIZE, stdin) ;//gets user input (up to 300 chars)
    phrases [strlen (phrases) - 1] = '\0';//ensures 'phrases' is a valid c string 
    if((strcmp (phrases, "q") != 0)) 
    {
        nextPhrase = strtok (phrases, ",");//tokenizes groups of chars(phrases) seperated by a comma
        phrasesCounter = 1;
        while(nextPhrase) 
        {
            printf ("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);//prints each tokenized phrase in order and updates 'phrasesCounter'
            nextPhrase = strtok (NULL, ","); //updates already printed token to NULL
        }   
    }
}while (strcmp (phrases, "q") != 0); //runs while user does not enter the string literal "q"
printf ("*** End of Tokenizing Phrases Demo***\n\n"); //end of phrases tokenizer

/* Version 3 */
printf ("*** Start of Tokenizing Sentences Demo ***\n") ; //start of sentence tokenizer
char sentences [BUFFER_SIZE];
char* nextSentence = NULL;
int sentencesCounter;
do {
    printf ("Type a few sentences separated by dot (q - to quit) :\n");//prompt for user input
    fgets(sentences, BUFFER_SIZE, stdin);//gets user input (up to 300 chars)
    sentences[strlen(sentences) - 1] = '\0';//ensures 'sentences' is a valid c string
    if ((strcmp (sentences, "q") != 0)){
        nextSentence = strtok (sentences,".");//tokenizes groups of chars(sentences) seperated by a period
        sentencesCounter = 1;
        while (nextSentence){
            printf ("Senetnce #%d is \'%s\'\n", sentencesCounter++, nextSentence);//prints each tokenized sentence in order and updates 'sentencesCounter'
            nextSentence = strtok(NULL, ".");
        }
    }
} while (strcmp (sentences, "q") != 0) ;//runs while user does not enter the string literal "q"
printf ("*** End of Tokenizing Sentences Demo ***\n\n"); //end of sentence tokenizer

}