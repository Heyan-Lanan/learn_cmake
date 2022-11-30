//
// Created by 凝雨 on 2022/11/29.
//
#include "../include/circle.hpp"

Circle::Circle(){
    this->r = 5.0;
}

Circle::Circle(double R){
    this->r = R;
}

double Circle::Area() const{
    return 3.14 * r * r;
}

double cal(double r){
    return 2 * 3.14 * r;
}