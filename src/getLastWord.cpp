/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int len=0, start, end;

	if (str == NULL)return NULL;
	
	while (str[len] != '\0')
	{
		len++;
	}
	if (len == 0)return "";
	start = len - 1;
	end = len-1;

	while ((str[end] == ' ') && (end>0))
	{
		end--;
	}
	if (end==0)
	{
		return "";
	}
	start = end;

	while ((str[start] != ' ') && (start>0))
	{
		start--;
	}
	
	char *res = (char *)malloc(sizeof(char)*(end - start + 1));
	if (start!=0)
	start++;

	int i = 0;
	while (start <= end)
	{
		res[i] = str[start];
		start++;
		i++;
	}
	res[i] = '\0';

	return res;
	
}
