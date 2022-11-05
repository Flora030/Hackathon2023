#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

<<<<<<< HEAD
const char* spellChecker(char* myString){
    FILE    *textfile;
    char    line[MAX_LINE_LENGTH];
    
    textfile = fopen("readme.txt", "r");
    if(textfile == NULL)
        return 1;
    
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        printf(line);
    }
    
    fclose(textfile);
=======

//Word in index of hash table
typedef struct node
{
    char word[25];
    struct node *next;
}
node;

node* HashTable[26]; //Table for all alphabets

const char* spellChecker(char* myString){
    
>>>>>>> e9250929422c7631586fcff553ae674864887323
}

int main(void){
    printf("%s",spellChecker(""));
}
