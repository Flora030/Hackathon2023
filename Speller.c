#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LINE_LENGTH 1000

//Word in index of hash table
typedef struct node
{
    char word[25];
    struct node *next;
}
node;

const char* spellChecker(char* myString){
    FILE *textfile;
    char line[MAX_LINE_LENGTH];
    textfile = fopen("readme.txt", "r");
    node* HashTable[26]; //Table for all alphabets
    if(textfile == NULL)
        return "Nothing to Compare to";
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        if (strcmp(myString,line)){
            return myString;
        }
        char *currentWord=tolower(line);
        node *Word=calloc(1,sizeof(Word));
        if(line[0] == 'a'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'b'){
            *Word=currentWord;
            HashTable[1]=Word;
        }
        else if(line[0] == 'c'){
            *Word=currentWord;
            HashTable[2]=Word;
        }
        else if(line[0] == 'd'){
            *Word=currentWord;
            HashTable[3]=Word;
        }
        else if(line[0] == 'e'){
            *Word=currentWord;
            HashTable[4]=Word;
        }
        else if(line[0] == 'f'){
            *Word=currentWord;
            HashTable[5]=Word;
        }
        else if(line[6] == 'g'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'h'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'i'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'j'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'k'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'l'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'm'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'n'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'o'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'p'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'q'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'r'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 's'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 't'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'u'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'v'){

            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'w'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'x'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'y'){
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else{
            *Word=currentWord;
            HashTable[0]=Word;
        }
    }
    fclose(textfile);
}

int main(void){
    printf("%s",spellChecker(""));
}
