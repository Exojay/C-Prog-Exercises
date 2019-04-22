/* countw.c -- counts the amount of white space in user input
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

	char ch; // Character for user input
	int white_space; // Counter
	while ((ch = fgetc(stdin)) != EOF) {
		if (ch == '\n' || ch == ' ' || ch == '\t')
			++white_space;
	}

	printf("The number of white space was %d\n", white_space);
	return 0;
}
