// execution command: g++ source.cpp insertion.cpp -o source

#include "insertion.h"
#include <iostream>
using namespace std;

int main(void){
    cinsertion obj; // object generation
    int table[obj.size] = {20,6,55,74,3,45,13,87,46,30};
    obj.show(&table[0]);
    obj.isort(&table[0]);
    obj.show(&table[0]);

    return 0;
}