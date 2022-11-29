//
// Created by 凝雨 on 2022/11/28.
//
#include <iostream>
#include "circle.hpp"
using namespace std;

int main(int argc, char const *argv[]){
    Circle c(3);
    cout << "Area = " << c.Area() << endl;
    cout << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << endl;
    }
    return 0;
}