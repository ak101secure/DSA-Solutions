#include<bits/stdc++.h>
using namespace std;
template<typename T> void inputArray(vector<T>& arr, int n) { for (int i = 0; i < n && cin >> arr[i]; ++i); }

int main(){

    int n;cin>>n;
    if(n>2 && n%2 ==0){
        cout<<"YES"<<endl;
    }
    else{
       cout<<"NO"<<endl;
    }

    return 0;
}
