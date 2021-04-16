// Pre processors
#include <stdio.h>

// Swap two integers.
void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

// Main bubble sort code arr = array, and j for swapping.
void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n-1; i++)
    for (j = 0; j < n-i-1; j++)
      if (arry[j] > arr[j+1])
      swap(&arr[j], &arr[j+1]);
}

// Print the array
void printArray(int arr[], int size) {
  int i;
  for (i=0; i < size; i++)
    printf("%d", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {65, 32, 24, 11, 21, 11, 90};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, n);
  printf("Sorted array.");
  printArray(arr, n);
  return;
}
