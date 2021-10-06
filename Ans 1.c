#include<stdio.h>

int main()
{
    int i;
    char arr[100];
    i=0;
    scanf("%s",arr);
    while(arr[i]!='\0'){
    if(arr[i]=='.'){
    if(arr[i+1]!='\0'){
    printf("valid floating number.");
    break;
    }}
    i=i+1;
    }
    if(arr[i]!='.')
    printf("invalid floating number.");
    return 0;
}
