#include<stdio.h>
 int main()
{
char arr[100];
int i=0;
int ind1=-1;
int ind2=-1;
int j=0;
int c=0;
printf("Enter the mail address:");
scanf("%s",arr);
while(arr[i]!='\0')
{
if ((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z') || (arr[i]>='0' && arr[i]<='9'))

c=1;

else if ((arr[i]=='_' || arr[i]=='-' || arr[i]=='.'|| arr[i]=='@') && (i!=0 && arr[i+1]!=0))
c=1;

else
{
c=-1;
break;
}
if (arr[i]=='@'){
j++;
ind1=i;
}
if(j>1)
{
c=-1;
break;
}
if (arr[i]=='.')
{
ind2=i;
}
i++;
}
if(ind2-ind1<2)
c=-1;
if(j==0)
c=-1;
if (c==1)
printf("Valid Email address\n");
else
printf("invalid Email address\n");
return 0;
}
