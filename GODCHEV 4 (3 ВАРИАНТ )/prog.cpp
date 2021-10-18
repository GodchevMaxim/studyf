#include <iostream>
#include "Figure.h"

using namespace std;

int main()
{
    int figure;
    setlocale(LC_ALL, "Russian");
    cout << "Какую фигуры вы хотите выбрать?\n[1]Треугольник\n[2]Круг\n[3]Прямоугольник\nФигура: ";
    cin >> figure;

    switch (figure)
    {
    case 1: {
        double at, bt, ct;
        cout << "Вы выбрали треугольник, задайте стороны: ";
        cin >> at >> bt >> ct;
        Triangle triangle = Triangle(at, bt, ct);
        cout << "Треугольник со сторонами: " << triangle.getA() << " " << triangle.getB() << " " << triangle.getC() << " " << endl;
        cout << "Периметр треугольника равен: " << triangle.calc_perimeter() << endl;
        cout << "Площадь треугольнка равна: " << triangle.calc_square() << endl;
        break;
    }
    case 2: {
        double radius;
        cout << "Вы выбрали круг, задайте радиус: ";
        cin >> radius;
        Circle circle = Circle(radius);
        cout << "Круг с радиусом: " << circle.getRadius() << endl;
        cout << "Периметр треугольника равен: " << circle.calc_perimeter() << endl;
        cout << "Площадь треугольнка равна: " << circle.calc_square() << endl;
        break;
    }
    case 3: {
        double ar, br;
        cout << "Вы выбрали прямоугольник, задайте стороны: ";
        cin >> ar >> br;
        Rectangle rectangle = Rectangle(ar, br);
        cout << "Прямоугольник со сторонами: " << rectangle.getA() << rectangle.getB() << endl;
        cout << "Периметр прямоугольник равен: " << rectangle.calc_perimeter() << endl;
        cout << "Площадь прямоугольник равна: " << rectangle.calc_square() << endl;
        break;
    }
    }

    return 0;
}

