#include <stdio.h>
#include <string.h>

int main()
{
	char str1[27];
	char str3[27] = "";
	for(int i = 0; i < 26; i++){
		str1[i] = 97 + i;
	}
	str1[26] = '\0';

	char str2[] = "abcdefghijklmnopqrstuvwxyz";

	if (strcmp(str1, str2) == 0)
		printf("The strings are the same\n");
	else 
		printf("the strings are different\n");


	for(int i = 0; i < 26; i++){
		str1[i] = 65 + i;
	}

	printf("String One: %.26s\n", str1);

	if (strcmp(str1, str2) == 0)
		printf("the strings are same\n");
	else
		printf("the strings are different\n");


	printf("String One: %.27s\n", str1);
	printf("String Two: %.27s\n", str2);
	strcat(str3, str1);
	strcat(str3, str2);
	printf("String Three: %.54s\n", str3);
}

