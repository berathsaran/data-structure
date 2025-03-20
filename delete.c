#include <stdio.h>

int main() {
    int arr[100], size, index;

    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index! Deletion failed.\n");
    } else {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Updated Array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
