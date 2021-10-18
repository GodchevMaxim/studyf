#include <iostream>
#include <math.h>
#include "InvalidParameters.h"
#include "DivideByZero.h"

using namespace std;\

int main()
{
    try
    {
        cout << S(-1, -2, 3) << endl;
        cout << X(0, 2) << endl;
        cout << P(-2, -5, 4123) << endl;
    }
    catch (...)
    {
        cout << "ERROR!" << endl;
    }
    
    return 0;
}

static double S(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        throw InvalidParameters();
    }
    else {
        try
        {
            double p = (a + b + c) / 2;
            double S = sqrt(p * (p - a) * (p - b) * (p - c));
            return S;
        }
        catch (...)
        {
            cout << "Less than 0 under the root" << endl;
        }
        
    }
}

static double X(double a, double b) {
    if (a == 0) {
        throw DivideByZero();
    }
    else {
        double x = (-1 * b) / a;
        return x;
    }
}

static double P(double b, double c, double alf) {
    if (b <= 0 || c <= 0 || alf > 1 || alf < -1) {
        throw InvalidParameters();
    }
    else {
        try
        {
            double p = sqrt(pow(b, 2) + pow(c, 2) - 2 * b * c * cos(alf)) + b + c;
            return p;
        }
        catch (...)
        {
            cout << "Less than 0 under the root" << endl;
        }
    }
}