#pragma once
#include <iostream>
#include "RationalNumbers.h"
#include "Vector_Rational.h"

using namespace std;


class Matrix_Rac {
    int size;
    Vector_Rational* rows;
public:
    Matrix_Rac(int width, int height);
    Matrix_Rac(const Matrix_Rac& other);
    Matrix_Rac(): size(0), rows(nullptr) {};
    Vector_Rational& operator[](int index);
    Matrix_Rac operator*(Matrix_Rac&matrix); 
    friend ostream& operator<<(ostream& out, const Matrix_Rac& m);
    RationalNumbers Sledovanie() const;
    Matrix_Rac& operator=(Matrix_Rac& other);
    
    ~Matrix_Rac();
};

// create matrix - done.
// mult matrix - done
// Sledovanie - done
// distructor - done
// copy const - 
