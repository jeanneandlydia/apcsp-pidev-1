#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", str1);
	char str2[27];
	char c = 'a';
	for(int i = 0; i < 26; i++)
	{
		str2[i] = c;
		c++;
	}
	str2[26] = '\0';
	printf("%s\n", str2);
	if (strcmp(str1, str2) == 0)
		printf("The strings are identical\n");
	else
		printf("The strings are different\n");

        for (int i = 0; i < 26; i++)
        {
                str2[i] -= 32;
        }
        printf("%s\n", str2);
        if (strcmp(str1, str2) == 0)
                printf("The strings are identical\n");
        else
                printf("The strings are different\n");

	char str3[54] = "";
	strcat(str3, str1);
	strcat(str3, str2);
	printf("%s\n", str3);
}
