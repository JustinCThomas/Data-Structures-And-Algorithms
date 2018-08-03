#include<stdio.h>

void insertionSort(int[], int);

int main()
{
  int arr[6] = {2, 5, 9, 1, 6, 3};
  int size = sizeof(arr) / sizeof(int);

  insertionSort(arr, size);

  printf("[");
  for (int i = 0; i < size; i++){
    printf("%d, ", arr[i]);
  }
  printf("\b\b]\n");
  return 0;

  return 0;
}

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++){
      int value = arr[i];
      int posToFill = i;
      while(posToFill > 0 && arr[posToFill - 1] > value){
        arr[posToFill] = arr[posToFill - 1];
        posToFill -= 1;
      }
      arr[posToFill] = value;
    }
}
