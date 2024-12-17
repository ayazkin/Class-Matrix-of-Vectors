#pragma once

#include <iostream>
#include "RationalNumbers.h"

using namespace std;

class Vector_Rational
{
private:
	int size;
	RationalNumbers* mas;
public:
	Vector_Rational() : size(0), mas(nullptr) {}

	Vector_Rational(int s);

	Vector_Rational& operator=(const Vector_Rational& other);

	RationalNumbers& operator[](int index);

	Vector_Rational(const Vector_Rational& other);

	Vector_Rational operator/(RationalNumbers number) const;

	Vector_Rational operator*(RationalNumbers number) const;

	~Vector_Rational() { /////////////
		delete[] mas;
	}

	RationalNumbers dotProduct(const Vector_Rational& other) const;

	Vector_Rational operator+(const Vector_Rational& other) const;

	friend istream& operator>>(istream& in, Vector_Rational& v);

	friend ostream& operator<<(ostream& out, const Vector_Rational& v);

	void print() const;

	int getSize() const {
		return size;
	}
};