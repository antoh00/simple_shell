#include "shell.h"
/*
*main
*@c:
*@argv
*Return: 0
*/

int main(void) {
    char *prompt = "(shell)> $ ";
    
    size_t size = 10;
    char *buf = malloc(sizeof(char) * size);

    printf("%s", prompt);
    getline(&buf, &size, stdin);

    printf("%s\n", buf);
    free(buf);
    return (0);
}