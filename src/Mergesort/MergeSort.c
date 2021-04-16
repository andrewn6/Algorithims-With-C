#include <stdio.h>
#include <stdlib.h>

// Main code for merge sort data structure
void merge(int arr[], int l, int m, int r) {
  int i, j, k;

}

// Merge sort
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

// Print the array after sorted.
void printArray(int arr[], int size) {
  int i;
  for( i = 0; i < size; i++)
    printf("%d", arr[i])
  print("\n");
}

// Driver code
int main() {
  int arr[] = { 12, 11, 13, 5, 6, 7};
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  printf("Given array is \n");
  printArray(arr, arr_size);

  mergeSort(arr, 0, arr_size -1);

  printf("\n Sorted array is \n");
  printArray(arr, arr_size);
  return;
}
