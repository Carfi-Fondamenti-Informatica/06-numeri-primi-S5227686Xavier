#include <iostream>

int main(){
  int num;
    cout<<"inserire il numero che si vuole verificare:"<<endl;
    cin>>num;
    if (numeri_primi(2,num)){
        cout<<"numero primo";
    }else{
        cout<<"numero non primo";
    }
  return 0;
}
