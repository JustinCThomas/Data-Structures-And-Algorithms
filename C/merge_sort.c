#include<stdio.h>

void mergeSort(int[], int);
void merge(int[], int[], int[], int, int);

int main(){
  int array[] = {17, 9, 21, 5, 4, 11, 8, 6};
  int size = sizeof(array) / sizeof(int);
  mergeSort(array, size);

  printf("[");
  for (int i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  }
  printf("\b\b]\n");

  return 0;
}

void mergeSort(int arr[], int n) {
  if (n < 2) {
    return;
  }

  int mid = n / 2;
  int left[mid];
  int right[n - mid];

  for (int i = 0; i < mid; i++) {
    left[i] = arr[i];
  }
  for (int i = mid; i < n; i++) {
    right[i - mid] = arr[i];
  }

  mergeSort(left, mid);
  mergeSort(right, n - mid);
  merge(left, right, arr, mid, n - mid);
}

void merge(int left[], int right[], int arr[], int lengthL, int lengthR) {
  int i = 0;
  int j = 0;
  int k = 0;

  while (i < lengthL && j < lengthR){
    if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }
  while (i < lengthL) {
    arr[k] = left[i];
    i++;
    k++;
  }
  while (j < lengthR) {
    arr[k] = right[j];
    j++;
    k++;
  }
}
