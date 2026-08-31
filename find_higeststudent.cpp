#include<stdio.h>

void bubbleSort(int a[], int size) {
    int i, j, temp;
    
    // 1. Find the highest marks and the student number BEFORE sorting
    int highest_marks = a[0];
    int highest_student_index = 0; // Tracks the 0-based index
    
    for(i = 1; i < size; i++) {
        if(a[i] > highest_marks) {
            highest_marks = a[i];
            highest_student_index = i;
        }
    }

    // 2. Sorting logic
    for(i = 0; i < size; i++) {
        for(j = 0; j < size - j - 1; j++) { // Fixed loop boundary typo (size - i - 1)
            if(a[j + 1] < a[j]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 3. Printing sorted marks
    printf("\nMarks obtained by students (Sorted): ");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    // 4. Printing results using the preserved data
    printf("\n\nHighest marks obtained: %d by Student %d\n", highest_marks, highest_student_index + 1);
    printf("Lowest marks obtained: %d \n", a[0]); 
}

int main() {
    int a[10], i;
    int size = 10;
    
    printf("Enter marks of 10 students of DS out of 100:\n");
    for(i = 0; i < size; i++) {
        printf("Student %d: ", i + 1); // Added for better user tracking during input
        scanf("%d", &a[i]);
    }
    
    bubbleSort(a, size);
    return 0;
}
