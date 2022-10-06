#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("A") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(10, 5) == true);
    CHECK(isDivisibleBy(30, 0) == false);
}

TEST_CASE("B") {
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(17) == true);
    CHECK(isPrime(47) == true);
    CHECK(isPrime(48) == false);
}

TEST_CASE("C") {
    CHECK(nextPrime(-1) == 2);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
}

TEST_CASE("D") {
    CHECK(countPrimes(-5, 0) == 0);
    CHECK(countPrimes(2, 5) == 3);
    CHECK(countPrimes(73, 89) == 4);
}

TEST_CASE("E") {
    CHECK(isTwinPrime(-1) == false);
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(7) == true);
    CHECK(isTwinPrime(21) == false);
    CHECK(isTwinPrime(31) == true);
}

TEST_CASE("F") {
    CHECK(nextTwinPrime(-5) == 3);
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(29) == 31);
}

TEST_CASE("G") {
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
    CHECK(largestTwinPrime(-5, -1) == -1);
}