#include <iostream>


#include "funcs.h"

int main()
{
    int n = 100;
    int d = 25;
    std::cout << "Input n: " << n << std::endl;
    std::cout << "Input d: " << d << std::endl;
    std::cout << "Is divisible?" << std::endl;
    if(isDivisibleBy(n, d) == true){
      std::cout << "True" << std::endl;
    }
    else{
      std::cout << "False" << std::endl;
    }

    n = 2;
    std::cout << "Input n: " << n << std::endl;
    if(isPrime(n) == true){
      std::cout << "Is prime?: " << "True" << std::endl;
    }
    else{
      std::cout << "Is prime?: " << "False" << std::endl;
    }

    n = 14;
    std::cout << "Input n: " << n << std::endl;
    std::cout << "Next prime: " << nextPrime(n) << std::endl;

    int a = 2;
    int b = 5;
    std::cout << "Input a: " << a << std::endl;
    std::cout << "Input b: " << b << std::endl;
    std::cout << "Count primes: " << countPrimes(a, b) << std::endl;

    n = 21;
    std::cout << "Input n: " << n << std::endl;
    if(isTwinPrime(n) == true){
      std::cout << "Is twin prime?: " << "True" << std::endl;
    }
    else{
      std::cout << "Is twin prime?: " << "False" << std::endl;
    }

    n = 19;
    std::cout << "Input n: " << n << std::endl;
    std::cout << "Next twin prime: " << nextTwinPrime(n) << std::endl;

    a = 14;
    b = 16;
    std::cout << "Input a: " << a << std::endl;
    std::cout << "Input b: " << b << std::endl;
    std::cout << "Largest twin prime: " << largestTwinPrime(a, b) << std::endl;

  return 0;
}
