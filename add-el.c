#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // An array with extra space
    int size = 5;  // Current number of elements
    int pos = 2;   // Position to insert at (0-based index)
    int element = 99;

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element; // Insert the new element
    size++; // Increase size

    // Print the updated array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
