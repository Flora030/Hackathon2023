#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

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
}

int main(void){
    printf("%s",spellChecker(""));
}
