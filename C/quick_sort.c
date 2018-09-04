#include<stdio.h>

void quicksort(int[], int, int);
int partition(int[], int, int);
void swap(int*, int*);

int main(){
  int array[] = {7, 2, 3, 5, 9, 14, 8, 6};
  int size = sizeof(array) / sizeof(int);
  quicksort(array, 0, size - 1);

  printf("[");
  for (int i = 0; i < size; i++){
    printf("%d, ", array[i]);
  }
  printf("\b\b]\n");

  return 0;
}

void quicksort(int arr[], int start, int end){
  if (start < end) {
    int partitionIndex = partition(arr, start, end);
    quicksort(arr, start, partitionIndex - 1);
    quicksort(arr, partitionIndex + 1, end);
  }
}

int partition(int arr[], int start, int end){
  int pivot = arr[end];
  int partitionIndex = start;
  for (int i = start; i < end; i++){
    if (arr[i] <= pivot) {
      swap(&arr[i], &arr[partitionIndex]);
      partitionIndex++;
    }
  }
  swap(&arr[partitionIndex], &arr[end]);
  return partitionIndex;
}

void swap(int *item1, int *item2){
  int temp = *item1;
  *item1 = *item2;
  *item2 = temp;
}
