#include <stdio.h>
#include <stdlib.h>
#include "keywords.h"
#include "keywords.c"

int is_whitespace(char c)
{
	if(c == ' ' || c == '\r' || c == '\n' || c == '\t')	
	{
		return 1;
	}
	return 0;
}



int fget_word(FILE *fp, char* word)
{
	char c;
	int cnt;

	while((c = fgetc(fp))!=EOF)
	{
		if(is_whitespace(c) == 0)	break;
	}
	if(c == EOF)	return 0;

	cnt = 0;
	word[cnt++] = c;
	word[cnt] = '\0';

	while((word[cnt] = fgetc(fp))!=EOF)
	{
		if(is_whitespace(word[cnt]) == 1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt++;
	}	
	return cnt;
		
}

int main(void) {

	FILE *fp;
	char fname[100];
	char word[100];
	int cnt;

	printf("열 파일 입력하시오 : ");
	scanf("%s", fname);


	fp = fopen(fname, "r");

	if(fp == NULL)
	{
		printf("파일을 못열음 (%s)\n", fname);
		return -1;
	}

	while(fget_word(fp, word) != 0)
	{
		count_word(word);
	}
	print_word();
	

	fclose(fp);
	
	return 0;
}

