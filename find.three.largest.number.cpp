/*Problem Statement
Write a function that takes in an array of integers and returns a sorted array of the three largest integers in the input array. Note that the function should return duplicate integers if necessary; for example, it should return [10, 10, 12] for an input array of [10, 5, 9, 10, 12]. Sample input: [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7] Sample output: [18, 141, 541]

sort the array and return last three
time = )=O(nlogn)
space = O(1)

*/

vector<int> largestNum(vector<int> &arr){
  vector<int> ans;
  sort(arr.begin(), arr.end(), greater<int>());
  if (arr.size()>=3){
    ans.push_back(arr[0]);
    ans.push_back(arr[1]);
    ans.push_back(arr[2]);
    return ans;
  }
  else
    vector<int> result(arr);
    return result;
}
