#include<stdio.h>
 main()
 {
     int i,j,n;
     printf("enter no lines");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++){
            if(j>=n+1-i&&j<=n-1+i)
                printf("*");
               else
                printf(" ");
        } printf("\n");
     }



     }
                    //* * * * *
                     //* * * *
                       //* *
                        //*


