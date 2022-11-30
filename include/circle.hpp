//
// Created by 凝雨 on 2022/11/29.
//

#ifndef LAB6_CIRCLE_HPP
#define LAB6_CIRCLE_HPP
class Circle{
    private:
        double r;//半径
    public:
        Circle();//构造函数
        explicit Circle(double R);//构造函数
        [[nodiscard]] double Area() const;//求面积函数
};
double cal(double r);
#endif //LAB6_CIRCLE_HPP
