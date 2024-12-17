#include "Vector_Rational.h"

Vector_Rational::Vector_Rational(int s) : size(s) 
{
    mas = new RationalNumbers[s];
    //for (int i = 0; i < size; ++i) { // Нужно убрать из программы?(Проверить в конце).
    //    mas[i] = RationalNumbers(0, 1);
    //}
}

RationalNumbers& Vector_Rational::operator[](int index) 
{
    if (index >= 0 && index < size) {
        return mas[index];
    }
    throw "Index out of range";
}

Vector_Rational::Vector_Rational(const Vector_Rational& other) : size(other.size)
{
    mas = new RationalNumbers[size];
    for (int i = 0; i < size; ++i) {
        mas[i] = other.mas[i];
    }
}

Vector_Rational Vector_Rational::operator/(RationalNumbers number) const
{
    if (number == RationalNumbers(0, 1)) {
        throw "Division by zero";
    }
    Vector_Rational result(size);
    for (int i = 0; i < size; ++i) {
        result.mas[i] = mas[i] / number; // сделать перегрузку деления
    }
    return result;
}

Vector_Rational Vector_Rational::operator*(RationalNumbers number) const
{
    Vector_Rational result(size);
    for (int i = 0; i < size; ++i) {
        result.mas[i] = mas[i] * number; 
    }
    return result;
}

Vector_Rational& Vector_Rational::operator=(const Vector_Rational& other) {
    if (this != &other) {
        delete[] mas;  // Освобождаем старую память
        size = other.size;
        mas = new RationalNumbers[size];
        for (int i = 0; i < size; ++i) {
            mas[i] = other.mas[i];
        }
    }
    return *this;
}

RationalNumbers Vector_Rational::dotProduct(const Vector_Rational& other) const {
    if (size != other.size) {
        throw "Vector_Ints must have the same size for dot product";
    }
    RationalNumbers result(0, 1);
    for (int i = 0; i < size; ++i) {
        result += mas[i] * other.mas[i];
    }
    return result;
}

Vector_Rational Vector_Rational::operator+(const Vector_Rational& other) const { // покомпонетно
    if (size != other.size) {
        throw "Vector_Ints must have the same size for addition";
    }
    Vector_Rational result(size);
    for (int i = 0; i < size; ++i) {
        result.mas[i] = mas[i] + other.mas[i];
    }
    return result;
}

istream& operator>>(istream& in, Vector_Rational& v) {
    for (int i = 0; i < v.size; ++i) {
        in >> v.mas[i];
    }
    return in;
}

ostream& operator<<(ostream& out, const Vector_Rational& v)
{
    for (int i = 0; i < v.size; ++i) {
        out << v.mas[i] << " ";
    }
    return out;
}
void Vector_Rational::print() const {
    for (int i = 0; i < size; ++i) {
        cout << mas[i] << " ";
    }
    cout << std::endl;
}
