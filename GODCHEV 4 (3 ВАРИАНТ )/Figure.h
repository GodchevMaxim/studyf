#pragma once

#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

class Figure { //Базовый, абстрактный класс

public:

    //Чисто виртуальные функции базового (абстрактного) класса

    virtual double calc_square() const = 0;
    virtual double calc_perimeter() const = 0;
};

class Triangle : public Figure { //Класс-потомок (треугольник)

private:

    double a, b, c;

public:

    //Реализуем виртуальные методы базового (абстрактного) класса

    double calc_square() const { //Функция вычисления площади фигуры (треугольника)           
        double p = a + b + c;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    double calc_perimeter() const { //Функция вычисления периметра фигуры (треугольника)            
        return a + b + c;
    }

    //Конструктор с параметром (инициализирующий конструктор)

    Triangle(double side_a, double side_b, double side_c)
        : a(side_a), b(side_b), c(side_c) {}

    //Гетеры
    double getA() const {
        return this->a;
    };

    double getB() const {
        return this->b;
    };

    double getC() const {
        return this->c;
    };
};

class Circle : public Figure { //Класс-потомок (круг)

private:

    double r;

public:

    //Реализуем виртуальные методы базового (абстрактного) класса

    double calc_square() const { //Функция вычисления площади фигуры (круга)           
        return M_PI * r * r;
    }

    double calc_perimeter() const { //Функция вычисления периметра фигуры (круга)            
        return 2 * M_PI * r;
    }

    //Конструктор с параметром (инициализирующий конструктор)

    Circle(double radius)
        : r(radius) {}

    //Гетер

    double getRadius() const {
        return this->r;
    }
};

class Rectangle : public Figure { //Класс-потомок (прямоугольник)

private:

    double a, b;

public:

    //Реализуем виртуальные методы базового (абстрактного) класса

    double calc_square() const { //Функция вычисления площади фигуры (прямоугольника)           
        return a * b;
    }

    double calc_perimeter() const { //Функция вычисления периметра фигуры (прямоугольника)            
        return 2 * (a + b);
    }

    //Конструктор с параметром (инициализирующий конструктор)

    Rectangle(double side_a, double side_b)
        : a(side_a), b(side_b) {}

    //Гетеры
    double getA() const {
        return this->a;
    };

    double getB() const {
        return this->b;
    };
};

#endif