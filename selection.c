#include<stdio.h>
int main()
{
	int arr[10],n,i,j,min,temp,c,size;
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
	  min=i;
	  c++;
	  for(j=i+1;j<n;j++)
	  {
	    if(arr[j]<arr[min])
	    {
	      min=j;
	      c++;
	    }
	  }
	  c++;
	  temp=arr[i];
	  c++;
	  arr[i]=arr[min];
	  c++;
	  arr[min]=temp;
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
	size=sizeof(arr)+(4*7);
	printf("Space complexity=%d\n",size);
	printf("Time complexity=%d\n",c);
}
