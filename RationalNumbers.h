#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class RationalNumbers {
public:
    RationalNumbers(int numerator, int denomintor);
    RationalNumbers() {
        numerator = 0;
        denominator = 1;
    };
    void SetNumerator(int value) {
        numerator = value;
    }
    void SetDenominator(int value) {
        denominator = value;
    }
    int GetNumuerator() const {
        return numerator;
    }
    int GetDenominator() const{
        return denominator;
    }
    void Print() const {
        cout << numerator << "/" << denominator << " ";
    }
    void Sum(const RationalNumbers number);
    RationalNumbers Mult(const RationalNumbers number) const;
    RationalNumbers operator+ (const RationalNumbers & number) const;
    RationalNumbers operator* (const RationalNumbers& number) const;
    RationalNumbers operator++ ();
    RationalNumbers operator++ (int);
    friend ostream& operator<<(ostream& out, const RationalNumbers& number);
    void operator+= (const RationalNumbers & number) {
        *this = *this + number;
    }
    void operator+= (const int number) {
        *this = *this + number;
    }
    RationalNumbers operator+(const int n);
    
    bool operator== (const RationalNumbers& number) const {
        return ((numerator == number.GetNumuerator()) && (denominator == number.GetDenominator()));
    }// перегрузкуа ==;
    
    RationalNumbers operator/ (const RationalNumbers& number) const {
        int newNumerator = numerator * number.GetDenominator();
        int newDenominator = denominator * number.GetNumuerator();
        return RationalNumbers(newNumerator, newDenominator);
    }

private:
    int numerator, denominator;
    void ReduceFraction();
};

istream& operator>>(istream& in, RationalNumbers& number);



