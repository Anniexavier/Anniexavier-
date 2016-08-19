#include <stdio.h>

int main()
{
char str[10];
int count=0;
scanf("%s",&str);
int i;
for(i=0;i<=30;i++);
{
	if(str[i]!='\0')
	{
		count=count+1;
	}
}
printf("%d",count);
	return 0;
}
