#include<iostream>
using namespace std;
int main(){
    int rollNo;
    cout<<"enter the roll no"<<endl;
    cin>>rollNo;
    if(rollNo<=0)
    {
        cout<<"invalid"<<endl;
    }
    else
    {
        cout<<"valid"<<endl;
    }
    return 0;
}