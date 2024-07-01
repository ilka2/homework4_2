#include <iostream>
#include <Windows.h>

using namespace std;


//Треугольник
class Triangle
{
protected:
    string name = "Треугольник";

    int a = 1, b = 2, c = 3;
    int A = 60, B = 130, C = 80;

public:
    void PrintInfo()
    {
        cout << name << ":" << endl;
        cout << "Стороны: " << a << ", " << b << ", " << c << endl;
        cout << "Углы: " << A << ", " << B << ", " << C << "\n\n";
    }
};

//Прямоугольный треугольник
class RecTriangle : public Triangle
{
public:
    RecTriangle()
    {
        C = 90;
        name = "Прямоугольный треугольник";
    }
};

//Равнобедренный треугольник
class RBTriangle : public Triangle
{
public:
    RBTriangle()
    {
        a = c;
        A = C;

        name = "Равнобедренный треугольник";
    }
};

//Равносторонний треугольник
class RSTriangle : public Triangle
{
public:
    RSTriangle()
    {
        a = b;
        c = b;

        A = B;
        C = B;

        name = "Равносторонний треугольник";
    }
};

//Четырехугольник
class Quadro
{
protected:
    string name = "Четырехугольник";

    int a = 1, b = 2, c = 3, d = 4;
    int A = 80, B = 90, C = 100, D = 110;
public:
    void PrintInfo()
    {
        cout << name << ":" << endl;
        cout << "Стороны: " << a << ", " << b << ", " << c << ", " << d << endl;
        cout << "Углы: " << A << ", " << B << ", " << C << ", " << D << "\n\n";
    }
};

//Параллелограмм
class Parallelogram : public Quadro
{
public:
    Parallelogram()
    {
        a = c;
        b = d;

        A = C;
        B = D;

        name = "Параллелограмм";
    }
};

//Прямоугольник
class RRectangle : public Parallelogram
{
public:
    RRectangle()
    {
        a = c;
        b = d;

        A = 90;
        B = 90;
        C = 90;
        D = 90;

        name = "Прямоугольник";
    }
};

//Квадрат
class Square : public RRectangle
{
public:
    Square()
    {
        a = b;
        c = b;
        d = b;

        A = B;
        C = B;
        D = B;

        name = "Квадрат";
    }
};

//Ромб
class Rhomb : public Parallelogram
{
public:
    Rhomb()
    {
        a = b;
        c = b;
        d = b;

        A = C;
        B = D;

        name = "Ромб";
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle;
    triangle.PrintInfo();

    RecTriangle recTriangle;
    recTriangle.PrintInfo();

    RBTriangle rbTriangle;
    rbTriangle.PrintInfo();

    RSTriangle rsTriangle;
    rsTriangle.PrintInfo();

    Quadro quadro;
    quadro.PrintInfo();

    Parallelogram parallelogram;
    parallelogram.PrintInfo();

    RRectangle rRectangle;
    rRectangle.PrintInfo();

    Square square;
    square.PrintInfo();

    Rhomb rhomb;
    rhomb.PrintInfo();
}