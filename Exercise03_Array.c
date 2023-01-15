#include<stdio.h>
int main(){
	//Input number in consolv
	int array[10];
	int i,number;
	printf("Input Array =");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		printf("Areay Num =");
		scanf("%d",&array[i]);
	  }
	  // output
	  for(i=0;i<number;i++){
		printf("Your Array[%d]=%d\n",i,array[i]);
	}
	// insert an element to array
	int newValue;
	int index;
	printf(" Input new value = ");
	scanf("%d",&newValue);
	printf(" Input index to insert = ");
	scanf("%d",&index);
	number++;
	// condiction
	for(i=number-1 ;i>index ;i--){
		array[i] = array[i-1];
	}
	array[index] = newValue;
	
	for(i=0;i<number;i++){
		printf("A[%d] = %d\n",i,array[i]);
	}
	// Delete element with value
	int delete;
	int j;
	
	printf(" Input value to delete = ");
	scanf("%d",&delete);
	
	// condiction
	for(i=0 ;i<number ;i++){
		if( delete == array[i]){
			for( j=i ;j<number ;j++ ){
				array[j] = array[j+1];
			}
			number--;
		}
	}
	// output
	for(i = 0 ;i < number ;i++){
		printf("A[%d] = %d\n",i,array[i]);
	}
	
	// Search in array by value
	int Search;
	printf(" Input number to search = ");
	scanf("%d",&Search);
	
	for(i=0 ;i<number ;i++){
		if( Search == array[i] ){
			printf("Found at index [%d]\n",i);
		}
	}
	// Binary Search
	for	(i=0;i<number;i++){
		for( j=i+1 ;j<number ;j++)
		if(array[i] > array[j]){
			if(array[i] > array[j]){
				int temp ;
				temp = array[i] ;
				array[i] = array[j] ;
				array[j] = temp ;
			}
		}
				
	}
	
}
