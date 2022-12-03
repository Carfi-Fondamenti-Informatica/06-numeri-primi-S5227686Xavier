#include <iostream>
#include "lib.h"
using namespace std;

int main (){
    int num;
    int a;
    cout<<"inserire il numero che si vuole verificare:"<<endl;
    cin>>num;
    a=numeri_primi(1,num);
    if (a==true){

        cout<<"numero primo"<<endl;
    }else{
        cout<<"numero non primo"<<endl;
    }
    return 0;

}
