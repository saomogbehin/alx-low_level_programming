#include <unistd.h>
#include "main.h"
/**
* -putchar - write the character c to stdout
* @c: THe character to print
* Return: ON success 1 else -1
*/
int -putchar(char c)
{return (write(1, &c, 1));
}
