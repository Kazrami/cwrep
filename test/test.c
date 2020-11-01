#include "..src/calc.h"

void test_plus() {
    double test_a = 1;
    double test_b = 2;
    double result_test = 0;

    result_test = test_a + test_b;

    if(result_test == plus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_minus() {
    double test_a = 12.5;
    double test_b = 2.75;
    double result_test = 0;

    result_test = test_a - test_b;

    if(result_test == minus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}



void test_plus1() {
    double test_a = 1235.45;
    double test_b = 214.36;
    double result_test = 0;

    result_test = test_a + test_b;

    if(result_test == plus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}

void test_minus1() {
    double test_a = 1221.512;
    double test_b = 221.752;
    double result_test = 0;

    result_test = test_a - test_b;

    if(result_test == minus(test_a, test_b)) {
        printf("%s OK %s\n", GREEN, KNRM);
    } else {
        puts("Failure");
    }
}



int main () {
    test_plus();
    test_minus();
  

    test_plus1();
    test_minus1();
  
}
