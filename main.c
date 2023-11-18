#include "shell.h"
/*
*main
*@c:
*@argv:
*Return: 0
*/
int _putchar(char c)
{
    return(write(1, &c, 1));
}
int _printString(char *str)
{
    int i = 0, count = 0;
    while (str[i])
    {
        count += _putchar(str[i++]);
    }
    return (count);
}


int main(void) {
    char *prompt = "(shell)$ ";
    
    char *buffer;
    size_t size = 32;
    ssize_t character_count;
    int i = 0;
    

    buffer = (char *)malloc(size * sizeof(char));
    
    for (i = 1; i > 0; i++)
    {
        _printString(prompt);
        character_count = getline(&buffer, &size, stdin);
        if (character_count == -1)
        {
           _printString("$ Exiting shell.....\n");
           return(-1);
        }
        _printString(buffer);
        
    }
    
    free(buffer);
    

    return (0);
}
