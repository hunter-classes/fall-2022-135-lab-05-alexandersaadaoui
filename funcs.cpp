#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d){
    if((d != 0) && (n%d == 0)){
        return true;
    }
    return false;
}

bool isPrime(int n){
    bool test;
    if(n >=2){
        for(int i = 2; i < n; i++){
        if(n%i == 0){
            test = false;
            break;
        }
        else{
            test = true;
        }
        }
    }
    else{
        test = false;
    }
    if(n == 2){
        test = true;
    }
    return test;
}

int nextPrime(int n){
    int prime = (n+1);
    while(isPrime(prime) == false){
        prime++;
    }
    return prime;
}

int countPrimes(int a, int b){
    int num = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i) == true){
            num++;
        }
    }
    return num;
}

bool isTwinPrime(int n){
    if((isPrime(n) == true) && ((isPrime(n-2) == true) || (isPrime(n+2) == true))){
        return true;
    }
    return false;
}

int nextTwinPrime(int n){
    int prime = (n+1);
    while(isTwinPrime(prime) == false){
        prime++;
    }
    return prime;
}

int largestTwinPrime(int a, int b){
    int large = 0;
    int largest = 0;
    for(int i = a; i <= b; i++){
        if(isTwinPrime(i) == true){
            large = i;
        }
        if(large >= largest){
            largest = large;
        }
    }

    if(largest > 0){
        return largest;
    }
    return -1;
}


