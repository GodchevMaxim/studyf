#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Vector3D {
private:
    double x;
    double y;
    double z;

public:
    Vector3D();
    Vector3D(double x = 0, double y = 0, double z = 0) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    ~Vector3D() {}
    double getX() const {
        return this->x;
    }
    double getY() const {
        return this->y;
    }
    double getZ() const {
        return this->z;
    }

    void setX(double x) {
        this->x = x;
    }
    void setY(double y) {
        this->y = y;
    }
    void setZ(double z) {
        this->z = z;
    }

    const Vector3D operator*(double c) const {
        return Vector3D(this->x * c, this->y * c, this->z * c);
    }
    const Vector3D operator+(const Vector3D& v3) const {
        return Vector3D(this->getX() + v3.getX(),
            this->getY() + v3.getY(), this->getZ() + v3.getZ());
    }
    const Vector3D operator-(const Vector3D& v3) const {
        return Vector3D(this->getX() - v3.getX(),
            this->getY() - v3.getY(), this->getZ() - v3.getZ());
    }
    const double operator*(const Vector3D& v3) const {
        return this->getX() * v3.getX() +
            this->getY() * v3.getY() + this->getZ() * v3.getZ();
    }

    const double GetLenght() {
        return sqrt(pow(this->getX(), 2) + pow(this->getY(), 2) + pow(this->getZ(), 2));
    }

};
const Vector3D operator*(double c, const Vector3D& v3) {
    return Vector3D(v3.getX() * c, v3.getY() * c, v3.getZ() * c);
}

istream& operator>>(istream& is, Vector3D& v3) {
    double x, y, z;
    is >> x >> y >> z;
    v3.setX(x);
    v3.setY(y);
    v3.setZ(z);
    return is;
}
ostream& operator<<(ostream& os, const Vector3D& v3) {
    os << "(" << v3.getX() << "; " << v3.getY() << "; " << v3.getZ() << ")";
    return os;
}

static bool AreEqual(Vector3D v1, Vector3D v2) {
    return v1.getX() == v2.getX() && v1.getY() == v2.getY() && v1.getZ() == v2.getZ();
}

static bool AreEqualLenght(Vector3D v1, Vector3D v2) {
    return v1.GetLenght() == v2.GetLenght();
}