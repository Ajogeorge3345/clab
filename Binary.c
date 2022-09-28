#include<stdio.h>

int main()

{

	int n,i,key,first=0,last,tem,middle,f=0,arr[10],c=0,size;	printf("Enter the limt\n");

	c++;

	scanf("%d",&n);

	c++;

	last=n-1;

	c++;

	printf("Enter the elements \n");

	c++;

	for(i=0;i<n;i++)

	 {

	 scanf("%d",&arr[i]);

	 c++;

	}

	c++;

	 

	middle=(first+last)/2;

	c++;

	printf("enter the search element\n");

	c++;

	scanf("%d",&key);

	c++;

	while(first<=last)

	{

		if(arr[middle]==key)

		 {

		 f=1;

		c++;

		

		  break;

		  c++;

		 }

		else if(arr[middle]<key)

		{

		  first=middle+1;

		  c++;

		  }

		else 

		  {

		  last=middle-1;

		  c++;

		  }

	 middle=(first+last)/2; 

	c++;

	}

	c++;

	if(f==1)

	   {

	     printf("Element %d found at %d \n",key,middle+1);

	  c++;

	  }

	  else

	  {

	    printf("Element not found\n");

	    c++;

	    }

	 size=sizeof(arr)+(4*9);

	 printf("Space complexity=%d\n",size);   

	  printf("Time complexity=%d\n",c);

	  

}
