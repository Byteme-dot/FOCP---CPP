#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the no. of elements you want to enter: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter Element no."<<i+1<<": ";
        cin>>arr[i];
    }
    int first_largest=arr[0],second_largest,first_smallest=arr[0],second_smallest;
    for(int i=1;i<size;i++){
        if(arr[i]>first_largest){
            first_largest=arr[i];
        }
        if(arr[i]<first_smallest){
            first_smallest=arr[i];
        }
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]<first_largest && arr[i]>arr[i+1]){
            second_largest=arr[i];
        }
        if(arr[i]>first_smallest && arr[i]<arr[i+1]){
            second_smallest=arr[i];
        }
    }
    int rev_arr[size];
    for(int i=0;i<size;i++){
        for(int j=size-1;j=0;j--){
            rev_arr[i]=arr[j];
        }
    }
    cout<<"[";
    for(int i=0;i<size-1;i++){
        cout<<rev_arr[i]<<" , ";
    }
    cout<<rev_arr[size]<<"]";
    return 0;  
}