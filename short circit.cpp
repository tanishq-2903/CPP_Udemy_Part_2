#include<iostream>
using namespace std;
int main(){
    int a=5,b=7,i=5;
    // here the frst condition of if statement is false then the short circuit is happend
    if(a>b&&++i<b){
        cout<<i;
    }
    return 0;
}