#include "main.h"
#include <stdlib.h>


/**
* read_textfile- This function that reads a text file and
* prints it to the POSIX standard output
* @filename: text file being read
* @letters: it should read and print where letters is the number of letters
* Return: returns the actual number of letters it could read and print
*        0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *Myvar;
ssize_t fo;
ssize_t x;
ssize_t y;
fo = open(filename, O_RDONLY);
if (fo == -1)
return (0);
Myvar = malloc(sizeof(char) * letters);
x = read(fo, Myvar, letters);
y = write(STDOUT_FILENO, Myvar, x);
free(Myvar);
close(fo);
return (y);
}
