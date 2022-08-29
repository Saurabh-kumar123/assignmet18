#include<stdio.h>
#include<string.h>
void cmp(char str[])
{
     int i;
     for(i=0;str[i];i++)
          printf("%c",str[i]-32);
}
int main()
{
    char str[20];
    printf("enter a lower case string\n");
    gets(str);
     cmp(str);
    return 0;
}
