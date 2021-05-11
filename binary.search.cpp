/*Problem Statement
Write a function that takes in a sorted array of integers as well as a target integer. The function should use the Binary Search algorithm to nd if the target number is contained in the array and should return its index if it is, otherwise -1.

Sample input: [0, 1, 21, 33, 45, 45, 61, 71, 72, 73], 33

Sample output: 3

for(array n)    comp = O(n)
  if peresent
    return i
return -1

sort array      logn
middle left right


*/

#include<iostream>

int binarySearch(vector<int> &sortarray, int target){
      int n =  sortarray.size() ;
      int lower = sortarray[0];
    int higher = sortarray[n-1];
        int mid = lower + (higher - lower)/2;

   for(int i = 0; i< sortarray.size(); i++ ){
     if (mid == target)
       return i;
     else if(target > mid){
          lower = mid +1;
       else
         higher = mid -1
          
     }
     return -1;
       
  
  }

}



int main(){}

