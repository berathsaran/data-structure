#include <stdio.h>

void insertElement(int arr[],int *size, int index, int value) {
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[index] = value;
    (*size)++;

    printf("Updated Array: ");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, num, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter element to insert at beginning: ");
    scanf("%d", &num);
    insertElement(arr, &size, 0, num);

   
    printf("Enter element to insert in the middle: ");
    scanf("%d", &num);
    insertElement(arr, &size, size / 2, num);


    printf("Enter element to insert at the end: ");
    scanf("%d", &num);
    insertElement(arr, &size, size, num);

    return 0;
}
