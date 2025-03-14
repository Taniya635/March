#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int size = 5;  
    int pos = 2;   
    int element = 99;

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element; 
    size++; // Increase size

    // Print the updated array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
