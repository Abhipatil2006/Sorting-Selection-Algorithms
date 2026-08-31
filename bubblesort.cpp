// Bubble sort in C

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int i = 0; i < size - 1; i++) {
      
    // loop to compare array elements
    for (int j = 0; j < size - i - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[j] > array[j + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[10],i;
  
  // find the array's length
  int size = 10;
   for(i = 0; i < size; i++) { 
        scanf("%d", &data[i]); 
    } 
    

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
}