#include<stdio.h>
#include<string.h>
void cmp(char str[])
{
     int i,a=0,n=0;
     for(i=0;str[i];i++)
     {
         if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
          a=1;
         if(str[i]>='0'&&str[i]<='9')
          n=1;
     }
         if(n==1&&a==1)
     printf("this string is alpha numeric");
     else
          printf("it is not alpha numerinc");
}
int main()
{
    char str[20];
    printf("enter a lower case string\n");
    gets(str);
     cmp(str);
    return 0;
}

