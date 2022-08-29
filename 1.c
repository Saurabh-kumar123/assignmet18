#include<stdio.h>
int rev(char []);
int main()
{
    char str[20];
    printf("enter a string\n");
    fgets(str,20,stdin);
    printf("length is %d",rev(str));
    return 0;
}
int rev(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return --i;
}