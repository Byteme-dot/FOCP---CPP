#include<iostream>
using namespace std;
int main(){
    int num,check;
    cout<<"Enter a Number: ";
    cin>>num;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            check++;
        }else{
            check=0;
        }
    }
    if(check==0){
        int new_check;
        cout<<"Given Number is a prime number"<<endl;
        cout<<"The next greater prime number is: ";
        for(int j=num+1;;j++){
            for(int i=1;i<=j/2;i++){
                if(j%i==0){
                    new_check=0;
                }else{
                    new_check=1;
                }
            }
        }
    }else{
        cout<<"Given Number is a not prime number"<<endl;
        cout<<"Given Number's factors are:"<<endl;
        for(int i=1;i<=num/2;i++){
        if(num%i==0){
            cout<<i<<" , ";   
        }
    }   
    }
    return 0;
}