#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes the character c to the stdout
 * @c: character printed
 *
 * Return: On sucess 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

