#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	FILE *fp;
	char word[100];
	char filename[100];
	char input[100];
	
	printf("file name : ");
	scanf("%s", filename);	
	
	fp = fopen(filename, "r");
	scanf("%s", word);
	
	while ( fgets(input, 100, fp) != NULL)
	{
		if (strncmp(input, word, strlen(word)) == 0)
		//if (strncmp(input, word) == 0
		{
			printf("find a word %s\n", input);
		}
	}
	
	printf("search done\n");
	
	return 0;
}
