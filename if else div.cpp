#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a and b :"<<endl;
    cin>>a>>b;
    if(b==0){
        cout<<"it is not valid"<<endl;
    }
    else{
        c=a/b;
        cout<<"div="<<c<<endl;
    }
    return 0;
}