#include "shell.h"
/*
*main
*@c:
*@argv
*Return: 0
*/

int main(void) {
    char *prompt = "$ ", *buffer;
    
    size_t size = 100;
    ssize_t num_chars;
    
    while (1)
    {
        printf("%s", prompt);
        num_chars = getline(&buffer, &size, stdin);
        
        if(num_chars = -1){
            printf("$ Closing shell....\n");

            return (-1);
        }
        
        
    }
    free(buffer); 
    return (0);
}