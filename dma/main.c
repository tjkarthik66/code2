#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of integers to allocate: ");
    scanf("%d", &n);

    // Allocate memory for an array of n integers
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    // Input values into the array
    for (int i = 0; i < n; i++) {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the input values
    printf("You entered the following integers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Release the allocated memory when done
    free(arr);

    return 0;
}
