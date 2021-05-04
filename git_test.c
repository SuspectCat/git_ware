#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char string_input[20];

	fgets(string_input, sizeof(string_input), stdin);
	if (string_input[strlen(string_input) == '\0'])
		string_input[strlen(string_input)] = '\n';

	printf("%s", string_input);

	return 0;
}
