#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	FILE *fp;
	char input;
	char c;
	
	fp=fopen("sample.txt", "r");

	while ((input = fgetc(fp)) != EOF)
		putchar(c);
		
	fclose(fp);
}
