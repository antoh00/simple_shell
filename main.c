#include "shell.h"
/*
*main
*@c:
*@argv
*Return: 0
*/

int main(void) {
    char *prompt = "$ ", *buffer;
    
    size_t size = 10;
    
    while (1)
    {
        printf("%s", prompt);
        getline(&buffer, &size, stdin);

        
        free(buffer); 
    }
    
    return (0);
}