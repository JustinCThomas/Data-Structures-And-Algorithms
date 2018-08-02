#include<stdio.h>

void selectionSort(int*, int);

int main(){
  int unsortedArray[6] = {2, 5, 9, 1, 6, 3};
  int size = sizeof(unsortedArray) / sizeof(int);

  selectionSort(unsortedArray, size);

  printf("[");
  for (int i = 0; i < size; i++){
    printf("%d, ", unsortedArray[i]);
  }
  printf("\b\b]\n");
  return 0;
}

void selectionSort(int *arr, int size){
  for (int i = 0; i < size - 2; i++){
    int minPosition = i;
    for (int j = i + 1; j < size; j++){
      if (arr[j] < arr[minPosition]) {
        minPosition = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[minPosition];
    arr[minPosition] = temp;
  }
}
