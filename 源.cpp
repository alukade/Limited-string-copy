#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "To be or not to be";
	char str2[40];
	char str3[40];

	strncpy_s(str2, str1, sizeof(str2));
	strncpy_s(str3, str2, 5);//5个字符不包含结束符
	str3[5] = '\0';

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	return 0;

}