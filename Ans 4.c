#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selection_sort(long long int arr[],long long int n)
{ 
for(int i=0;i<n-1;i++) 
{ 
for(int j=i+1;j<n;j++) 
{ 
if(arr[j]<arr[i]) 
{
int t=arr[j]; 
arr[j]=arr[i]; 
arr[i]=t; } } } 
printf("Selection Sorted Array:\n"); 
for(int i=0;i<n;i++)
printf("%d ",arr[i]); printf("\n"); 
return;
}
void bubble_sort(long long int arr[],long long int n){
int c=1;
while(c<n) 
{ for(int i=0;i<n-c;i++) { 
if(arr[i]>arr[i+1]) 
{ 
int t=arr[i]; 
arr[i]=arr[i+1]; 
arr[i+1]=t; 
} } 
c++; 
} 
printf("Bubble Sorted Array:\n"); 
for(int i=0;i<n;i++) 
printf("%lld ",arr[i]); 
printf("\n"); 
return;
}
int main()
{ 
printf("Enter no of elements:\n"); 
long long int n;
scanf("%lld",&n); 
long long int arr[n];
for(int i=0;i<n;i++){
scanf("%lld",&arr[i]);}
clock_t start1,end1;
long int t1; 
start1=clock(); 
selection_sort(arr,n);
end1=clock(); 
t1=end1-start1; 
printf("Total time elapsed for selection sort: %f\n",(double)t1/(double)CLOCKS_PER_SEC);
clock_t start2,end2; 
long int t2;
start2=clock(); 
bubble_sort(arr,n);
end2=clock();
t2=end2-start2; 
printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);}
