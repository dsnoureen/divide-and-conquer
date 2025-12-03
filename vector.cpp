#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> number;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        number.push_back(input);
    }
    for(int i=0;i<number.size();i++){
        cout<<number[i]<<" ";
    }
    cout<<"\n";
    number.pop_back();
    number.pop_back();
    for(int i=0;i<number.size();i++){
        cout<<number[i]<<" ";
    }
    cout<<"\n";
    cout<<number.empty()<<"\n";
    cout<< number.front()<< " " <<number.back()<<"\n";
    //number.assign(6,0);  this means index 0-5 porjonto number 0 assigned

    number.clear();
    for(int i=0;i<number.size();i++){
        cout<<number[i]<<" ";
    }
    return 0;
}