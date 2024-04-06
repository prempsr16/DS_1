#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a[10]={90,50,20,80,10,40},b[10]={20,40,50,60,70,80};
int n=6,n1=6,i,j,flag=0,high,low,ele,ch1,ch2,mid,min,temp;

void  linear1()
   {
   clrscr();
      printf("Array elements\n");
	for (i=0;i<n1;i++)
	  {
	   printf("%d\t",b[i]);
	  }
      printf("\nEnter the elements to search\n");
       scanf("%d",&ele);
	for (i=0;i<n;i++)
	   {
	    if (b[i]==ele)
	      {
		flag=1;
		break;
	      }
	   }
	   i++;
       if(flag==1)
	  {
	   printf("\n%d elements found at a[%d] position ",ele,i);
	  }
       else
	 {
	   printf("\nElements not found");
	  }
	 getch();
       }
void binary1()
    {
    clrscr();
	  printf("\nArray elements\n");
	for (i=0;i<n1;i++)
	  {
	   printf("%d\t",b[i]);
	  }
      printf("\nEnter the elements to search\n");
       scanf("%d",&ele);
      low=0;
      high=n-1;
	 while(low<=high)
	    {
	     mid=(low+high)/2;
		if(ele==b[mid])
		  {
		   flag=1;
		   break;
		  }
	       else
		if(ele<b[mid])
		   {
		    high=mid-1;
		   }
		else
		 {
		  low=mid+1;
		  }
	       }
	       mid++;
       if(flag==1)
	  {
	   printf("\n%d elements found at a[%d] position ",ele,mid);
	  }
       else
	 {
	   printf("\nElements not found");
	  }
	  getch();
       }

void bubble()
    {
     clrscr();
	   printf("\nArray elements before\n");
	for (i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
	  }
	for (i=1;i<n;i++)
	   {
	    for (j=0;j<n-i;j++)

	       {
		 if (a[j]>a[j+1])
		   {
		    temp=a[j];
		    a[j]=a[j+1];
		  a[j+1]=temp;
		   }
	       }
	   }
       printf("\nArray after sorting\n");
	for(i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
	  }
	getch();
       }

void select()
    {
     clrscr();
	   printf("\nArray elements before\n");
	for (i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
	  }
	for (i=0;i<n-1;i++)
	   {
	     min=i;
	    for (j=i+1;j<n;j++)

	       {
		 if (a[j]<a[min])
		   {
		     min=j;
		   }
	       }
		 if (min!=i)
		   {
		      temp=a[min];
		    a[min]=a[i];
		      a[i]=temp;
		   }
	       }
       printf("\nArray after sorting\n");
	for(i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
	  }
	 getch();
       }
void insert()
   {
   clrscr();
	 printf("\nArray elements before\n");
	for (i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
	  }
	for (i=1;i<n;i++)
	   {
	    temp=a[i];
	    j=i-1;
	      while(j>=0 && a[j]>temp)
		   {
		    a[j+1]=a[j];
		    j--;
		   }
		    a[j+1]=temp;
	       }
       printf("\nArray after sorting\n");
	for(i=0;i<n;i++)
	  {
	   printf("%d\t",a[i]);
	  }
	 getch();
       }


void main()
    {
      while(1)
	{
 luna:	 clrscr();
	 printf("\nHello nice to meet you \n");
	 printf("\n1.Search\n");
	 printf("2.Sort\n");
	 printf("3.Exit the program\n");
	 printf("\nChoose if you want to search or sort elements: ");
	 scanf("%d",&ch1);
	   switch(ch1)
	       {
		case 1: while(1)
			{
			 clrscr();
			 printf("\nSearching method");
			 printf("\n1.Linear Search");
			 printf("\n2.Binary Search");
			 printf("\n3.To go back to main menu");
			 printf("\nEnter your choose :");
			 scanf("%d",&ch2);
			   switch(ch2)
			     {
			      case 1 :linear1();
				      break;
			      case 2 :binary1();
				      break;
			      case 3 :printf("\Please don't go\nPress enter to go back");
				      getch();
				      goto luna;
			     default :printf("\nInvaild input");
				      getch();

			    }

			}
		case 2: while(1)
			{
			 clrscr();
			 printf("\nSorting method");
			 printf("\n1.Bubble Sort");
			 printf("\n2.Selecion Sort");
			 printf("\n3.Insertion Sort");
			 printf("\n4.To go back to main menu");
			 printf("\nEnter your choose :");
			 scanf("%d",&ch2);
			   switch(ch2)
			     {
			      case 1 :bubble();
				      break;
			      case 2 :select();
				      break;
			      case 3 :insert();
				      break;
			      case 4 :printf("\nPlease don't go\nPress enter to go back");
				      goto luna;
			     default :printf("\nInvaild input");
				      getch();
			    }
			  }
		case 3:printf("\nThank you for using the program");
		       getch();
		       exit(0);
		default:printf("\nInvaild input");
			getch();
	   }
	}
	getch();
      }
