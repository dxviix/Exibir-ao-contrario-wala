#include <stdio.h>
#include <string.h>
int main()
{
	char nome[] = {"Luis Carlos Silva Sauro"};
	char *c;
	int i;
	
	for(i = 0; i < strlen(nome); i++) {
		c = &nome[i];
		printf("%c\n", *c);
	}
	return 0;
}
