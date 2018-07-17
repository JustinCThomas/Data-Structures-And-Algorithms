#include<stdio.h>

void sortArray(int*, int);

int main() {
  int unsortedArray[12] = {4, 11, 6, 27, 84, 53, 39, 45, 122, 99, 113, 2};
  int size =  sizeof(unsortedArray) / sizeof(int);

  sortArray(unsortedArray, size);

  printf("[");
  for (int i = 0; i < size; i++){
    printf("%d, ", unsortedArray[i]);
  }
  printf("\b\b]\n");
  return 0;
}

void sortArray(int *arr, int size){
  printf("%d\n", size);
  for (int i = 1; i < size; i++) {
    for (int j = 0; j < size - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
