#include<stdio.h> 

void bubbleSort(int a[], int size) { 
    int i, j, temp; 
    
    // Sorting logic
    for(i = 0; i < size; i++) { 
        for(j = 0; j < size - i - 1; j++) { 
            if(a[j + 1] < a[j]) { 
                temp = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = temp; 
            } 
        } 
    } 
    
    // Printing sorted marks
    printf("\nMarks obtained by students (Sorted): "); 
    for(i = 0; i < size; i++) { 
        printf("%d ", a[i]); 
    } 
    
    // Dynamic index usage based on size
    printf("\n\nHighest marks obtained: %d \n", a[size - 1]); 
    printf("Lowest marks obtained: %d \n", a[0]); 
} 

int main() { 
    int a[10], i; 
    int size = 10; 
    
    printf("Enter marks of 10 students of DS out of 100:\n"); 
    for(i = 0; i < size; i++) { 
        scanf("%d", &a[i]); 
    } 
    
    bubbleSort(a, size); 
    return 0; 
}
