#include "main.h"


/**
* create_file - This is a C function that creates a file
* with the name specified in the filename parameter and 
* writes the text content specified 
* in the text_content parameter to it
* @filename: filename is the name of the file to created
* @text_content: is a NULL terminated string to write to the file
*
* Returns: 1 for success, -1 for faillure and NULL
*/
int create_file(const char *filename, char *text_content)
{
int fo, y, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
y = write(fo, text_content, len);
if (fo == -1 || y == -1)
return (-1);
close(fo);
return (1);
}
