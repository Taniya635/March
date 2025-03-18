#include <stdio.h>

int main() {
    int n, i;

    // Input size of the array
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // Input first array
    printf("Enter elements of first array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter elements of second array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Addition of arrays
    for(i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Output result
    printf("Sum of arrays: ");
    for(i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    
    return 0;
}
