#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the day no"<<endl;
    cin>>day;
    if(day==1){
        cout<<"monday"<<endl;
    }
    else if(day==2){
        cout<<"tuesday"<<endl;
    }
    else if(day==3){
        cout<<"wednesday"<<endl;
    }
    else if(day==4){
        cout<<"thursday"<<endl;
    }
    else if(day==5){
        cout<<"friday"<<endl;
    }
    else if(day==6){
        cout<<"saturday"<<endl;
    }
    else if(day==7){
        cout<<"sunday"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    return 0;
}