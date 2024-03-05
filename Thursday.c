#include <stdio.h>

// Function to Display an Array of Elements, remove an element at a specific index and return the removed element
int removeElement(int array[], int originalArray[], int index, int size) {
    int removedElement = array[index];

    // Shift elements after the removed index to the left
    for (int i = index; i < size - 1; ++i) {
        array[i] = array[i + 1];
    }

    return removedElement;
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Declare an array with a capacity of 7 elements
    int myArray[7];

    // Initialize the first 6 elements
    for (int i = 0; i < 6; ++i) {
        myArray[i] = i + 1;  // Initializing with some values, you can change as needed
    }

    // Set the 7th element to a specific value
    myArray[6] = 42;  // You can change this value as needed

    // Create a copy of the original array
    int originalArray[7];
    for (int i = 0; i < 7; ++i) {
        originalArray[i] = myArray[i];
    }

    // Print the elements of the array before the removal
    printf("Array elements before removal:\n");
    for (int i = 0; i < 7; ++i) {
        printf("%d: %d\n", i + 1, myArray[i]);
    }

    // Remove the element at index 3
    int removedElement = removeElement(myArray, originalArray, 3, 7);

    // Perform bubble sort on the array
    bubbleSort(myArray, 6);

    // Print the removed element
    printf("\nElement removed: %d\n", removedElement);

    // Print the elements of the array after the removal and sorting
    printf("\nArray elements after removal and sorting:\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d: %d\n", i + 1, myArray[i]);
    }

    // Print the elements of the original array
    printf("\nReturning the removed element:\n");
    for (int i = 0; i < 7; ++i) {
        printf("%d: %d\n", i + 1, originalArray[i]);
    }

    return 0;
}
