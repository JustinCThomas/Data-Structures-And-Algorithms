using System;
using System.Collections.Generic;

namespace C_ 
{
    public class BubbleSort {
        
        public static void sort(int[] arr) {
            for (int i = 1; i < arr.Length - 1; i++) {
                for (int j = 0; j < arr.Length - i; j++) {
                    if (arr[arr.Length - j - 1] < arr[arr.Length - j - 2] ) {
                        int temp = arr[arr.Length - j - 1];
                        arr[arr.Length - j - 1] = arr[arr.Length - j - 2];
                        arr[arr.Length - j - 2] = temp;
                    }
                }
            }
        }
    }
}