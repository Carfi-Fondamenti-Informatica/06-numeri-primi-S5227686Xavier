#include "lib.h"
bool numeri_primi(int i, int n){
    if ((n%2==0)&&(n!=i)){
        return false;
    }else if((n%i==0)&&(n==i)){
        return true;
    }else{
        return numeri_primi(i+1,n);
    }
}
