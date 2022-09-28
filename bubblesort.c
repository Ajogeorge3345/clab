#include<stdio.h>
int main()
{
	int arr[10],n,i,j,temp,c=0,size;
	printf("Enter the limit:\n");
	c++;
	scanf("%d",&n);
	c++;
	printf("Enter the elements:\n");
	c++;
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	  c++;
	}
	c++;
	for(i=0;i<n-1;i++)
	{
	  for(j=0;j<n-i-1;j++)
	  {
	     if(arr[j]>arr[j+1])
	     {
	       temp=arr[j];
	       c++;
	       arr[j]=arr[j+1];
	       c++;
	       arr[j+1]=temp;
	       c++;
	     }
	  }
	  c++;
	}
	c++;
	printf("The sorted array is:\n");
	c++;
	for(i=0;i<n;i++)
	{
	 printf("%d\n",arr[i]);
	 c++;
	 }
	 c++;
	 size=sizeof(arr)+(4*6);
	 printf("Space complexity=%d\n",size);
	 printf("Time complexity=%d",c);
	
}
