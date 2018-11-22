#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	FILE *fp, *fp2;
	char input;
	char original[100];
	char copy[100];
	int i=0;
	
	printf("original file: ");
	scanf("%s", copy);
	
	fp = fopen(original, "r");
	fp2 = fopen(copy, "w");
	
	while ((input = fgetc(fp)) != EOF)
	{
		fputc(input, fp2);
		i++;
	}
	
	printf("Copy succeed~ (%i Bytes copied)\n", i);
	fclose(fp);
	fclose(fp2);
	
}
