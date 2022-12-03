#include <iostream>
#include "lib.h"
using namespace std;

int main(){
 int a;
    bool b;
    cout<<"inserire il numero che si vuole verificare:"<<endl;
    cin>>a;
    b=numeri_primi(a);
    if (b==true){

        cout<<"numero primo"<<endl;
    }else if (b==false){
        cout<<"numero non primo"<<endl;
    }
  return 0;
}
