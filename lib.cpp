#include "lib.h"

bool numeri_primi(int a){
    int div=1,conta=0;
    
    while(conta<=1 && div<=2){
        if (n%div==0){
            conta++;
        }
        div++;
    }
    if (conta==1){
        return true;
    }else{
        return false;
    }
}
