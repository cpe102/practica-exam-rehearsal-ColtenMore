#include<iostream>
using namespace std;

int main(){
    int x=1;
    int sum=0;
    while(x != 0){
        cout<<"Enter x: ";
        cin>>x;
        if(x>0){
            sum=sum+x;
        }
        sum=sum;
    }
    cout<<"sum= "<<sum;
    return 0;
}


