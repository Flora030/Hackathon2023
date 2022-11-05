#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LINE_LENGTH 1000

const char* spellChecker(char* myString){
    FILE *textfile;
    char line[MAX_LINE_LENGTH];
    textfile = fopen("readme.txt", "r");
    node* HashTable[1]; //Table for all alphabets
    if(textfile == NULL)
        return "Nothing to Compare to";
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        if (strcmp(myString,line)){
            return myString;
        }
        char *currentWord=tolower(line);
        node *Word=calloc(1,sizeof(Word));
        if(line[0] == 's'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
    }
}
