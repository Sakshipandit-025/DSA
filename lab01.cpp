//inserting an element in an array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main (){
    int array[11];
    cout<< "Input the elements of the array"<<endl;
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    int x,p;
    cout<<"Write the element to be inserted and its position"<<endl;
    cin>>x>>p;
    for(int i=10;i>=p;i--){
        array[i+1]=array[i];  
        array[p]=x;
    }
    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
return 0;
}
/*vector<int>v 
v.push_back(1)--- insert
v.pop_back -----delete
cout<<v[0]<<endl;
v,size()*/