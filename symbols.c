#include "shell.h"

/**
  * handle_comment - Handle the '#' the input
  * @input: Input number
  *
  * Return: Stripped down input
  */

char *handle_comment(char *input)
{
	char *comment_pos;

	comment_pos = strstr(input, " #");

	if (comment_pos)
	{
		*comment_pos = '\0';
	}

	return (input);
}
