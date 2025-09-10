//we have to merge two sorted arrays. 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements in array 1"<<endl;
    int n1;
    cin>>n1;
    int array1[n1];
    for(int i=0;i<n1;i++){
        cin>>array1[i];
    }
    cout<<"Enter the number of elements in array 2"<<endl;
    int n2; 
    cin>>n2;
    int array2[n2];
    for(int i=0;i<n2;i++){
        cin>>array2[i];
    }
    int array3[n1+n2];
    int l=0,r=0,k=0;
    while(l<n1 && r<n2){
    if(array1[l]<array2[r]){
    array3[k]=array1[l];
    l++;
    k++;
    }
    else{
    array3[k]=array2[r];
    r++;
    k++;
    }
    }
    while(l<n1){
        array3[k]=array1[l];
        l++;
        k++;
    }
    while(r<n2){
        array3[k]=array2[r];
        r++;
        k++;
    }
    cout<<"The merged array is"<<endl;
    for(int i=0;i<n1+n2;i++){
        cout<<array3[i]<<" ";
    }
return 0;
}