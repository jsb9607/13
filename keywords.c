#define	MAX_NAME	30
#include <stdio.h>
#include <string.h>


struct keytab{
	int nums;
	char name[MAX_NAME];
};

struct keytab	keywords[13] = {
{0, "int"}, 
{0, "float"}, 
{0, "return"}, 
{0, "if"}, 
{0, "for"}, 
{0, "goto"}, 
{0, "swich"}, 
{0, "case"}, 
{0, "void"}, 
{0, "default"}, 
{0, "char"}, 
{0, "do"}, 
{0, "while"}
};


int count_word(char *word)
{
	int i;

	for(i=0; i<13; i++)
	{
		if(strncmp(keywords[i].name, word, strlen(keywords[i].name)) == 0)
		{
			keywords[i].nums++;
			break;
		}
	}
}
void print_word()
{
	int i;
	for(i=0; i<13; i++)
	{
		printf("%s : %i\n", keywords[i].name, keywords[i].nums);
	}
}

