#include<iostream>
using namespace std;
//Check if the no is prime or not
int main(){
        int n;
        cin>>n;
        int i=2;
        bool isprime = true;
        while(i<n){
                if(n%i==0){
                        cout<<"Not Prime"<<endl;
                        isprime = false;
                        break;
                }
                i++;
        }
        if(isprime){
                cout<<"Prime"<<endl;
        }
}