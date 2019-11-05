#include <stdio.h>
#include <string.h>
int main()
{
	char nome[] = {"Luiz Carlos"};
	char *c;
	int i;
	
	for(i = strlen(nome) -1; i>=0 ; i--) {
		c = &nome[i];
		printf("%c\n", *c);
	}
	return 0;
}
