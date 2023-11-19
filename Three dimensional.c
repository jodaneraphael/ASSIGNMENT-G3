#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int y;
	int z;
	int i;
	int j;
	int k;
	int a[10][10][10];
	
		// Enter the numbers of row and column
		printf("enter the row and column\n");
		scanf("%d%d%d",&x,&y,&z);
		
		// Enter the values
		printf("Enter the element\n");
		
		 for(i=0; i<x; i++)
		 {
		 	for(j=0; j<y; j++)
			 {
		 		for(k=0; k<z; k++)
				 {
				 	// Display their indexes
		 			printf("a[%d][%d][%d]",i,j,k);
				 	// Storing the entered values
		 			scanf("%d",&a[i][j][k]);
		   		}
		 	}
		}
		
 		printf("the matrix is\n");
		
		for(i=0; i<x; i++)
		{
		 	for(j=0; j<y; j++)
			 {
		 		for(k=0; k<z; k++){
		 			// printing the values
		 	 	printf("%d\t",a[i][j][k]);
			 }
			 // Matrice allocated space
			  printf("\n\n");
		 }
		
		}


	return 0;
}
