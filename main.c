#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*We start by declaring Four variables*/
    int size,i,j,tempnum;
    /*First variable if for array size*/
    /*Second and third variable are for the loop construct*/
    /*Last variable is for storing the temporary number of array value*/

    printf("Enter The size of the Array: ");
    scanf("%d",&size);


    int aryNumb[size];
    /*We Now make Size an array*/

    for(i=0; i<size; i++)
    {

        /* We now ask the user to input in elements into the array*/
        printf("Enter The Element You want in Array: ");
        scanf("%d",&aryNumb[i]);

    }

    for(i=0; i<size-1; i=i+1)
    {
        /*First the for i loop is going to pick the first value in array
         and the j loop is going to test
        it to the next value on the
        first for i=0 iteration.*/
        for(j=0; j<size-1-i; j=j+1)
        {
            if(aryNumb[j] > aryNumb[j+1])
            {
                tempnum = aryNumb[j];

                aryNumb[j]=aryNumb[j+1];
                aryNumb[j+1]=tempnum;
            }
        }
    }

    for(i=0; i<size; i++)
    {
        printf("\n%d",aryNumb[i]);
    }

}
