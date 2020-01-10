#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"What is your name?: ";
    cin>>name;

    double gpa;
    cout<<"What is your GPA?: ";
    cin>>gpa;

    if(gpa>=3.5){
        cout<<name<<" InW Jrim Jrim!!!";
    }
    else{
        cout<<"Try harder, "<<name<<"!!!";
    }
    return 0;
}
