//matrix manipulaion program
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int a[30][30],b[30][30],c[30][30],k,i,j,m,n,p,q, choice,flag=1;
 void addition()
     {
       clrscr();                                             //addition function
       printf(" Enter the order of the frist matrix\n");
	scanf("%d%d",&m,&n);
       printf("\n Enter the order of the second matrix\n");
	scanf("%d%d",&p,&q);
	 if (m!=p || n!=q)
	 {                                                  //checking if the rows and columns are not equal
	     printf("\n Addition not possible \n");
	 }					    //if the rows and columns are equal
	 else
	   {
	     printf("\n Enter the elements of first matrix \n");
		 for (i=0;i<m;i++)
		  {                                         //insering first matrix
		    for (j=0;j<n;j++)
		     {
		       scanf("%d",&a[i][j]);
		     }
		  }
	    printf("\n Enter the elements of second matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)                       //inserting second matrix
		     {
		       scanf("%d",&b[i][j]);
		     }
		  }
	    for(i=0;i<m;i++)
	       {                                            //addition of matrix
		 for (j=0;j<n;j++)
		    {
		     c[i][j]=a[i][j]+b[i][j];
		     }
	       }
	    printf("\n\n Frist matrix \n");
		 for (i=0;i<n;i++)
		  {                                         //display of the first matrix
		    for (j=0;j<m;j++)
		     {
		       printf("%d  ",a[i][j]);
		     }
		     printf("\n");
		  }
	    printf("\n Second matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)                       //display of the second matrix
		     {
		       printf("%d\t",b[i][j]);
		     }
		     printf("\n");
		  }
	    printf("\n\n Sum of matrix \n");
		 for (i=0;i<p;i++)
		  {
		    for (j=0;j<q;j++)                       //displaying the added matrix
		     {
		       printf("%d\t",c[i][j]);
		     }
		     printf("\n");
		  }
	    }
	    }							    //end of addition function
//subtraction function
void subtraction()
     {
       clrscr();
       printf(" Enter the order of the frist matrix\n");
	scanf("%d%d",&m,&n);
       printf("\n Enter the order of the second matrix\n");
	scanf("%d%d",&p,&q);
	 if (m!=p || n!=q)
	   {                                                //checking if the matrix is not equal
	       printf("\nSubtraction not possible ");
	   }							    //if the matrix is equal
	 else
	   {
	    printf("\n Enter the elements of first matrix \n");
		 for (i=0;i<m;i++)
		  {                                         //insertion of first matrix
		    for (j=0;j<n;j++)
		     {
		       scanf("%d",&a[i][j]);
		     }
		  }
	    printf("\n Enter the elements of second matrix \n");
		 for (i=0;i<m;i++)
		  {                                         //insertion of second matrix
		    for (j=0;j<n;j++)
		     {
		       scanf("%d",&b[i][j]);
		     }
		  }
	    for(i=0;i<m;i++)
	       {
		 for (j=0;j<n;j++)                          //subtraction
		    {
		     c[i][j]=a[i][j]-b[i][j];
		     }
	       }
	    printf("\n\n Frist matrix \n");
		 for (i=0;i<m;i++)
		  {                                         //displaying the first matrix
		    for (j=0;j<n;j++)
		     {
		       printf("%d\t",a[i][j]);
		     }
		     printf("\n");
		  }
	    printf("\n Second matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)                       //displaying the second matrix
		     {
		       printf("%d\t",b[i][j]);
		     }
		     printf("\n");
		  }
	    printf("\n\n Subtraction of matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)                       //displaying the subtracted matrix
		     {
		       printf("%d\t",c[i][j]);
		     }
		     printf("\n");
		  }
	       }
	    }
//end of the subtraction function
//multiplication
   void multiplication()
     {
       clrscr();
       printf(" Enter the order of the frist matrix\n");
	scanf("%d%d",&m,&n);
       printf("\n Enter the order of the second matrix\n");
	scanf("%d%d",&p,&q);
	    printf("\n Enter the elements of frist matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)                       //inserting frist matrix elements
		     {
		       scanf("%d",&a[i][j]);
		     }
		  }
	    printf("\n Enter the elements of second matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)
		     {                                      //inserting second matrix elements
		       scanf("%d",&b[i][j]);
		     }
		  }
	    for(i=0;i<m;i++)
	       {
		 for (j=0;j<q;j++)
		    {
		     c[i][j]=0;                             //multipication
			 for (k=0;k<n;k++)
			    {
			    c[i][j]= c[i][j]+a[i][k]*b[k][j];
			    }
		     }
	       }
	    printf("\n Frist matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)
		     {
		       printf("%d\t",a[i][j]);              //displaying frist matrix
		     }
		     printf("\n");
		  }
	    printf("\n Second matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)
		     {                                      //displaying second matrix
		       printf("%d\t",b[i][j]);
		     }
		     printf("\n");
		  }
	    printf("\n Product of matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)
		     {                                      //displaying multiple matrix
		       printf("%d\t",c[i][j]);
		     }
		     printf("\n");
		  }
//transpose
 void transpose()
     {
       clrscr();
       printf(" Enter the order of the matrix\n");
	scanf("%d%d",&m,&n);
	    printf("\n Enter the elements of the matrix \n");
		 for (i=0;i<m;i++)
		  {                                         //inserting matrix elements
		    for (j=0;j<n;j++)
		     {
		       scanf("%d",&a[i][j]);
		     }
		  }
	    for(i=0;i<m;i++)
	       {
		 for (j=0;j<n;j++)                          //transposing
		    {
		     b[j][i]=a[i][j];
		     }
	       }
	    printf("\n Matrix before transpose \n");
		 for (i=0;i<m;i++)
		  {                                         //displaying the matrix before transpose
		    for (j=0;j<n;j++)
		     {
		       printf("%d\t",a[i][j]);
		     }
		     printf("\n");
		  }
	    printf("\n Matrix after transpose\n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)                       //displaying the transposed matrix
		     {
		       printf("%d\t",b[i][j]);
		     }
		     printf("\n");
		  }
	    }
//identity
 void identity()
     {
       clrscr();
       printf(" Enter the order of the matrix\n");
	scanf("%d%d",&m,&n);
	    printf("\n Enter the elements of matrix \n");
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)
		     {
		       scanf("%d",&a[i][j]);                //inserting the martix
		     }
		  }
	    if (n!=m)
	       {
	       printf("matrix not a square\n");                 //checking if the matrix is square
	       getch();
	       }
	    else
	    {
	    for(i=0;i<m;i++)
	       {
		 for (j=0;j<n;j++)
		    {
		    if (a[i][j]!=1 && a[j][i]!=0)           //checking if the matrix is square
		       {
			  flag =0;
			  break;
		       }
		     }
	       }
	    if (flag!=1)
	     {
	       printf ("\n Not a identity matrix\n");           //if the matrix is not identity
	     }
	    else
	    {
	    printf("\n Matrix is identity \n");            //if the matrix is identity
		 for (i=0;i<m;i++)
		  {
		    for (j=0;j<n;j++)
		     {
		       printf("%d\t",a[i][j]);
		     }
		    printf("\n");
		  }
	     }
	     }
	    }
	//main function
	    void main()
	       {
		  while(1)                                  //menu loop
		      {
		       clrscr();
			 printf("\n 1.Add two matrix");
			 printf("\n 2.Subtract two matrix");
			 printf("\n 3.Multiplication two matrix");        //menu choice
			 printf("\n 4.Transpose matrix");
			 printf("\n 5.To find if its identity matrix");
			 printf("\n 6.Exit\n");
			 printf("\n\n Enter the choice from 1 to 5:");
			  scanf("%d",&choice);
			  switch(choice)
			      {                                               //switch statement
				 case 1 : addition();                         //addition
					  break;
				 case 2 : subtraction();
					  break;                              //subtraction
				 case 3 : multiplication();
					  break;                              //multipication
				 case 4 : transpose();
					  break;                              //transpose matrix
				 case 5 : identity();
					  break;                              //identity matrix
				 case 6 : printf("\n Thank you for using the program.");
					  getch();                                              //end of program
					  exit(0);
				default : printf("\n Invalid input");                           //invalid input entered
					  getch();
			      }
			      printf("press enter to view the menu or exit");
			      getch();                                         //to go back to the menu
			  }
			  getch();
		       }
