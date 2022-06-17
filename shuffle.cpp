#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle (int n, vector<int> arr) {
   int temp = 0;
   vector<int> magic;
   int i = 0; int j = n;
   int switchMagic = 0;
   while(i<n && j<arr.size()){
      if(switchMagic == 0){
         magic.push_back(arr[i]);
         i++;
         switchMagic = 1;
      }else{
         magic.push_back(arr[j]);
         j++;
         switchMagic = 0;
      }
   }
   magic.push_back(arr[arr.size()-1]);
   return magic;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(2*n);
    for(int i_arr = 0; i_arr < 2*n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = shuffle(n, arr);
    cout << out_[0];
    for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}