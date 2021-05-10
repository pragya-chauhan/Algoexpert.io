#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minTime(vector<int>& queries){
  sort(queries.begin(), queries.end());
  int totaltime = 0;
  int waiting_time = 0;
  for(int i = 1; i < queries.size(); i++){
    waiting_time = queries[i-1]  + waiting_time;  
    totaltime = totaltime + waiting_time;
  
  }
  return totaltime;
}

int main(){
    vector<int> queries = {8, 9, 10, 11};
    cout<<minTime(queries);   
}

// time comp = O(nlogn) space = O(1)
