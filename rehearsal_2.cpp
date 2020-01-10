#include<iostream>
using namespace std;

int main(){
    double x=1;
    double sum=0;
    while(x != 0){
        cout<<"Enter x: ";
        cin>>x;
        if(x>0){
            sum=sum+x;
        }
        else{
            ;
        }
    }
    cout<<"sum= "<<sum;
    return 0;
}


