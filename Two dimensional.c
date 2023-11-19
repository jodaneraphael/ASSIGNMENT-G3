#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, i, j, a[10][10];
	
	// Entering the number of row and column
	printf("enter the row and column\n");
	scanf("%d%d",&x,&y);

	// Entering The elements in the array
	printf("Enter the element\n");
	 for(i=0; i<x; i++)
	 {
	 	for(j=0; j<y; j++)
		 {
	 		// Displaying their index
	 		printf("a[%d][%d]",i,j); 
	 		// Storing entered values
	 		scanf("%d",&a[i][j]);
	   }
	 }

 	printf("the matrix is\n");
	
	for(i=0; i<x; i++)
	{
	 	for(j=0; j<y; j++)
		 {
		 	// Displaying the matrice
		 	 printf("%d\t",a[i][j]);
		 }
			 // Spaces between the matrice
			  printf("\n\n");
	 }


	return 0;
}
