#include "stdio.h"

/**
 *main -  UNIX command line interpreter.
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
*/

int main(void)
{
char command[100];

    // Display a formatted prompt
    printf("$: ");
    
    // Read user input
    scanf("%s", command);

    // Display a greeting message
    printf(" %s!\n", command);

    return (0);

}
