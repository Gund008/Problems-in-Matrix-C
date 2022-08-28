#include<stdio.h>

/*
write a program in c Accept the number of column and number of rows and Display below matrix
-input:        -output
1 2 3 4         1 1 1 1
1 2 3 4    =    2 2 2 2
1 2 3 4         3 3 3 3
1 2 3 4         4 4 4 4
*/

/////////////////////////////////////////////////////////////////

void MatrixT(int irow,int icol,int ino[][icol])
{
    int i=0;
    int j=0;
    int Matrix[irow][icol];

    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            Matrix[i][j]=ino[i][j];
        }
    }
    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
           ino[j][i]=Matrix[i][j];   
        }
    }
    for(i=0;i<irow;i++)
    {
        for(j=0;j<icol;j++)
        {
            printf("%d\t",ino[i][j]);
        }
        printf("\n");
    }
}
    int main()
{
    int no1=0;
    int no2=0;

    int i,j=0;

    printf("Enter the first Array:\n");
    scanf("%d",&no1);

    printf("Enter the second Array:\n");
    scanf("%d",&no2);

    int Arr[no1][no2];     //2-D Array

    for(i=0;i<no1;i++)
    {
        for(j=0;j<no2;j++)
        {
             scanf("%d",&Arr[i][j]);
        }
    }

    MatrixT(no1,no2,Arr);  //declaration
    return 0;

}