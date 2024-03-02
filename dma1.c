/* To allocate memory dynamically for int array of size 10 and display their sum*/ 
#include<stdio.h>
#include<stdlib.h>
main()
{
  int n,i,sum=0;
  int *ptr;
  printf("Enter the no. of elements: ");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  if (ptr!=NULL)
  {
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    for(i=0;i<n;i++)
	sum=sum+(*(ptr+i));
        printf("Sum=%d",sum);
  }
  else
  {
     printf("Memory not allocated");
  }
  return 0;
}  
  
