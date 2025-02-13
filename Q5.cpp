#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of Square matrix: ";
    cin>>size;
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<endl<<"Enter the value for ("<<i+1<<","<<j+1<<"): ";
        cin>>arr[i][j];
        }
    }
    cout<<"Original Matrix"<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"90 Degree rotated Matrix"<<endl;
    for(int i=0;i<size;i++){
        for(int j=size-1;j>=0;j--){
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
