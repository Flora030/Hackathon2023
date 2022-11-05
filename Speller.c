#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#define MAX_LINE_LENGTH 1000

const char* spellChecker(char* myString){
    FILE    *textfile;
    char    line[MAX_LINE_LENGTH];
    textfile = fopen("readme.txt", "r");
    if(textfile == NULL)
        return 1;
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        
    }
    fclose(textfile);
=======
#define MAX_LINE_LENGTH 1000

const char* spellChecker(char* myString){
    FILE *textfile;
    char line[MAX_LINE_LENGTH];
    textfile = fopen("readme.txt", "r");
    if(textfile == NULL)
        return "Nothing to Compare to";
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        if (strcmp(myString,line)){
            return myString;
        }
        if(line[0] == 'a'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'b'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[1]=Word;
        }
        else if(line[0] == 'c'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[2]=Word;
        }
        else if(line[0] == 'd'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[3]=Word;
        }
        else if(line[0] == 'e'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[4]=Word;
        }
        else if(line[0] == 'f'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[5]=Word;
        }
        else if(line[6] == 'g'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'h'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'i'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'j'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'k'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'l'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'm'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'n'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'o'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'p'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'q'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'r'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 's'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 't'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'u'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'v'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'w'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'x'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else if(line[0] == 'y'){
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
        else{
            char *currentWord=tolower(line[0]);
            node *Word=calloc(1,sizeof(Word));
            *Word=currentWord;
            HashTable[0]=Word;
        }
    }
    fclose(textfile);
}
>>>>>>> a1e15084869e1bef639e11b2ccf1c4118c8c84bb

//Word in index of hash table
typedef struct node
{
    char word[25];
    struct node *next;
}
node;

node* HashTable[26]; //Table for all alphabets

<<<<<<< HEAD


const char* spellChecker(char* myString){
    
}

=======
>>>>>>> a1e15084869e1bef639e11b2ccf1c4118c8c84bb
int main(void){
    printf("%s",spellChecker(""));
}
