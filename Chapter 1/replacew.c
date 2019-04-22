/* replacew -- copies input to output and replaces
	multiple spaces with a single space
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

	int previous, ch, counter;
	while ((ch = fgetc(stdin)) != EOF) {
		if (ch == ' ' && previous == ' ')
			continue;
		fputc(ch, stdout);
		++counter;
		previous = ch;
	}
	
	return 0;
}
