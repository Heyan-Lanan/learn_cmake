//
// Created by 凝雨 on 2022/11/30.
//

#ifndef LEARN_CMAKE_CIRCUMFERENCE_HPP
#define LEARN_CMAKE_CIRCUMFERENCE_HPP

class circumference {
    private:
        double r;//半径
    public:
        circumference();//构造函数
        explicit circumference(double R);//构造函数
        [[nodiscard]] double cir() const;//求面积函数
};

#endif //LEARN_CMAKE_CIRCUMFERENCE_HPP
