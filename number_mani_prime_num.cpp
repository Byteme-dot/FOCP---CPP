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
        cout<<"The next greater prime number is: "<<endl;
        for(int i=num+1;;i++){
            for(int j=1;j<=i/2;j++){
                if(i%j==0){
                    new_check++;
                }else{
                    new_check=0;
                }
            }
            if(new_check==0){
                cout<<i;
                break;
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