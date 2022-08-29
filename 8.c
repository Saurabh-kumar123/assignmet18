#include<stdio.h>
int main()
{
    char str[50];
    int i=0,count=1;
    printf("enter a string\n");
    gets(str);
    if(str[i]==' ')
    while(str[i]==' ')
    {
      i++;
    }
    for(i;str[i];i++)
    {
    if(str[i]==' '&&str[i+1]!=' ')
    count++;
    if(str[i]==' '&&str[i+1]=='\0')
    count--;
    }
    printf("total word is %d",count);
    return 0;
}