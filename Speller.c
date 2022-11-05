#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>


//Word in index of hash table
typedef struct node
{
    char word[25];
    struct node *next;
}
node;

node* HashTable[26]; //Table for all alphabets

const char* spellChecker(char* myString){
    
}

int main(void){
    printf("%s",spellChecker(""));
}
