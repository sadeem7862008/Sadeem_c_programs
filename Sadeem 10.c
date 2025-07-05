#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;  
        else if (arr[mid] < key)
            low = mid + 1;  
        else
            high = mid - 1; 
    }
    return -1;  
}
int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
printf("Enter a number to search:");
scanf("%d",& key);
    int result = binarySearch(arr, size, key);
    if (result != -1)
        printf("Element %d found at index %d.\n", key, result);
    else
        printf("Element %d not found in the array.\n", key);
    return 0;
}
