#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"


/**
 *main -  UNIX command line interpreter.
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
*/

int main(void)
{
char cwd[1024];
char command[100];

    // Display a formatted prompt
    printf("$: ");
    
    // Read user input
    scanf("%s", command);

    // Display a greeting message
    //printf(" %s!\n", command);
    if (getcwd(cwd, sizeof(cwd)) !== NULL){
        printf("%s:")
    }
    else{
        perror("./shell: No such file directory")
    }

    return (0);

}
