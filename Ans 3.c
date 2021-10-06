#include<stdio.h>
int main()
{
int p,q; 
printf("Enter the order of 2D matrix(row,col)\n"); 
scanf("%d %d",&p,&q);
int a[p][q]; 
printf("Enter the 2D array\n"); 
for(int i=0;i<p;i++) 
{ for(int j=0;j<q;j++) 
scanf("%d",&a[i][j]); } 
int x=p*q; 
int arr[x]; 
int k=0; 
printf("2D array:\n"); 
for(int i=0;i<p;i++)
{ 
for(int j=0;j<q;j++)
printf("%d ",a[i][j]); 
printf("\n"); }
for(int i=0;i<p;i++)
{ 
for(int j=0;j<q;j++) 
{ 
arr[k]=a[i][j]; 
k++; 
} 
} 
printf("\n1D array:\n"); 
for(int i=0;i<x;i++)
printf("%d ",arr[i]);
}
