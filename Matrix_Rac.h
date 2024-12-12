#pragma once
#include <iostream>
#include "RationalNumbers.h"
#include "Vector_Rational.h"

using namespace std;


class Matrix_Rac {
    int size;
    Vector_Rational* rows;
public:
    Matrix_Rac(int height, int width) {
        Vector_Rational* rows = new Vector_Rational[height];
        for (int i = 0; i < height; i++) {
            rows[i] = Vector_Rational(width);
            for (int j = 0; j < width; j++) {
                rows[i][j] = RationalNumbers(0, 1);
            }
        }
    }
    Matrix_Rac() {};
    RationalNumbers

    friend ostream& operator<<(ostream& out, const Matrix_Rac& m);

};
    /*Matrix_Rac operator*(Matrix_Rac matrix) const{
        Matrix_Rac result(rows->getSize(), matrix.size);

        for (int i = 0; i < rows1; i++) {
            result[i] = new RationalNumbers[cols2];
            for (int j = 0; j < cols2; j++) {
                result[i][j] = RationalNumbers(0, 1);
            }
        }
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                result[i][j] = RationalNumbers(0, 1);
                for (int k = 0; k < rows2; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        return result;
    }
    Matrix_Rac Summ(const Matrix_Rac matrix) const {
        Matrix_Rac matrix_temp(a1, a2, a3, a4);
        matrix_temp.a1 += matrix.a1;
        matrix_temp.a2 += matrix.a2;
        matrix_temp.a3 += matrix.a3;
        matrix_temp.a4 += matrix.a4;
        return matrix_temp;
    }

    void multByKoef(double koef) {
        a1 *= koef;
        a2 *= koef;
        a3 *= koef;
        a4 *= koef;
    }
    Matrix_Rac Mult(const Matrix_Rac matrix) const {
        Matrix_Rac matrix_temp(a1, a2, a3, a4);
        matrix_temp.a1 = a1 * matrix.a1 + a2 * matrix.a3;
        matrix_temp.a2 = a1 * matrix.a2 + a2 * matrix.a4;
        matrix_temp.a3 = a3 * matrix.a1 + a4 * matrix.a3;
        matrix_temp.a4 = a3 * matrix.a2 + a4 * matrix.a4;
        return matrix_temp;
    }
    double Determinant() const {
        return a1 * a4 - a2 * a3;
    }*/
    


