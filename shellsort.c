//shell sort in c programming
#include <stdio.h>

//shell sort
 void shellsort(int array[],int n){
 	//rearrange elements at each n/2,n/4,n/8....intervals.
 	
 	for(int interval=n/2;interval>0;interval/=2)
 	{
 		for(int i=interval;i<n;i+=1){
 			int temp=array[i];
 			int j;
 			for(j=i;j>=interval&&array[j-interval]>temp;j-=interval){
			 
 			array[j]=array[j-interval];
	    	}
		 array[j]=temp;
	    }
    }
}

//print an array

void printarray(int array[],int size){
	for(int i=0;i<size;i++){
		printf("%d",array[i]);
	}
}

//driver code

int main(){
	int data[]={9,8,3,7,5,6,4,1};
	int size= sizeof(data)/sizeof(data[0]);
	shellsort(data,size);
	printf("sorted array :\n");
	printarray(data,size);
	return 0;
	
	
}
