//
// Created by Kenneth Haga on 01/12/22.
//

#include "lib.h"

bool numeri_primi (int i,int n){
    if (n%i==0) {
        return n==i;
    }
    else{
        return numeri_primi(i+1,n);
    }
}
