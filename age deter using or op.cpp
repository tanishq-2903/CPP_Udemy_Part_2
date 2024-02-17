#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age :"<<endl;
    cin>>age;
    if(age<12||age>50){
        cout<<"you are valid for that offer"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    
    return 0;
}
    
    