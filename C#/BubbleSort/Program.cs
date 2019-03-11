using System;

namespace C_
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = {4, 11, 6, 27, 84, 53, 39, 45, 122, 99, 113, 2};

            Console.WriteLine("Before Sorting:");
            Console.Write("[");
            foreach (int i in arr){
                Console.Write(i + ", ");
            }
            Console.Write("\b\b]");

            Console.WriteLine("\n");
            BubbleSort.sort(arr);


            Console.WriteLine("After Sorting:");
            Console.Write("[");
            foreach (int j in arr){
                Console.Write(j + ", ");
            }
            Console.Write("\b\b]");
        }
    }
}
