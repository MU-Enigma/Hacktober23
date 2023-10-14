#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int **arr; // Declare a pointer to a pointer to int
    int rows, cols,i,j,size,address;
    char ch;
    size=sizeof(int);
    int base=(int)&arr[0][0];
    //taking the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Dynamically allocating memory for the 2D array
    arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) 
    {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    //ask user the index of the array to find the address of that index
    do
    {
        printf("\nEnter row no.: ");
        scanf("%d",&i);
        printf ("\nEnter col no.: ");
        scanf("%d",&j);
        if(i>rows||j>cols||i<0||j<0)
        {
            printf("you are trying to find the address of a non allocated memory\n");
        }
        else
        {
            address = base+(i*cols+j)*size;
            printf("Memory address of arr[%d][%d]: %p\n", i, j, (void *)address);
        }
        printf("Do you want to try again with the other index:- Y/y for Yes\n");
        scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');
    // Freeing the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
