#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#define MAX_LINE_LENGTH 1000

const char* spellChecker(char* myString){
    FILE *textfile;
    char line[MAX_LINE_LENGTH];
    textfile = fopen("readme.txt", "r");
    if(textfile == NULL)
        return "Nothing to Compare to";
    while(fgets(line, MAX_LINE_LENGTH, textfile)){
        if(line[0] == 'a'){
        }
        else if(line[0] == 'b'){
        }
        else if(line[0] == 'c'){
        }
        else if(line[0] == 'd'){
        }
        else if(line[0] == 'e'){
        }
        else if(line[0] == 'f'){
        }
        else if(line[0] == 'g'){
        }
        else if(line[0] == 'h'){
        }
        else if(line[0] == 'i'){
        }
        else if(line[0] == 'j'){
        }
        else if(line[0] == 'k'){
        }
        else if(line[0] == 'l'){
        }
        else if(line[0] == 'm'){
        }
        else if(line[0] == 'n'){
        }
        else if(line[0] == 'o'){
        }
        else if(line[0] == 'p'){
        }
        else if(line[0] == 'q'){
        }
        else if(line[0] == 'r'){
        }
        else if(line[0] == 's'){
        }
        else if(line[0] == 't'){
        }
        else if(line[0] == 'u'){
        }
        else if(line[0] == 'v'){
        }
        else if(line[0] == 'w'){
        }
        else if(line[0] == 'x'){
        }
        else if(line[0] == 'y'){
        }
        else{}
    }
    fclose(textfile);
}

//Word in index of hash table
typedef struct node
{
    char word[25];
    struct node *next;
}
node;

node* HashTable[26]; //Table for all alphabets

int main(void){
    printf("%s",spellChecker(""));
}
