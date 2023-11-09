#include "shell.h"
/*
*main
*@c:
*@argv
*Return: 0
*/

int main(void) {
    char *prompt = "(shell)> $ ", *buffer;
    
    size_t size = 10;
    

    printf("%s", prompt);
    getline(&buffer, &size, stdin);

    printf("%s\n", buffer);
    free(buffer);
    return (0);
}