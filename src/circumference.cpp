//
// Created by 凝雨 on 2022/11/30.
//
#include "../include/circumference.hpp"
#include "../include/circle.hpp"

circumference::circumference() {
    this->r = 5.0;
}

circumference::circumference(double R){
    this->r = R;
}

double circumference::cir() const {
    Circle c1(this->r);
    return cal(this->r) + c1.Area();
}

