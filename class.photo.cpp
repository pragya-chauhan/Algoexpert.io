#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool classPhoto(vector<float> &red, vector<float> &blue){
  sort(red.begin(), red.end(), greater<float>());
  sort(blue.begin(), blue.end(), greater<float>());
  bool back_red;
  if( red[0] > blue[0] )
    back_red = true;
  else
    back_red = false;
  for(int i = 0; i< red.size(); i++){
    if (back_red && red[i] <= blue[i] )
      return false;
    else if(!back_red && blue[i] <= red[i])
      return false;
  }
  return true;
  



}



int main(){
    vector<float> red = {3,3};
    vector<float> blue = {3,3};
    cout<<classPhoto(red, blue);
    
    
}
