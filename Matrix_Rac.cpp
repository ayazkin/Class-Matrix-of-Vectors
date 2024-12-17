#include "Matrix_Rac.h"

ostream& operator<<(ostream& out, const Matrix_Rac& m)
{
    for (int i = 0; i < m.size; i++) {
        for (int j = 0; j < m.rows[i].getSize(); j++) {
            cout << m.rows[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return out;
}

Matrix_Rac Matrix_Rac::operator*(Matrix_Rac &matrix)
{
    int cols1 = rows[0].getSize();
    int cols2 = matrix.rows[0].getSize();
    int rows1 = size;
    int rows2 = matrix.size;
    
    Matrix_Rac result(rows1, cols2);
    if (rows2 != cols1) cout << "Incorrect size of matrixs";

    for (int i = 0; i < rows1; i++)
    {
        for (int t = 0; t < cols1; t++) {
            result.rows[i] = result.rows[i] + matrix.rows[t] * rows[i][t];
        }
    }
    return result;
}

RationalNumbers Matrix_Rac::Sledovanie() const
{
    if (size != rows[0].getSize()) {
        cout << "Следование возможно только для квадратных матриц" << endl;
        exit(-1);
    }
    RationalNumbers result(0, 1);
    for (int i = 0; i < size; i++) {
        result = result + rows[i][i];
    }
    return result;
}

Matrix_Rac& Matrix_Rac::operator=(Matrix_Rac& other)
{
    if (this != &other) {
        delete[] rows;  // Освобождаем старую память
        size = other.size;
        rows = new Vector_Rational[size];
        for (int i = 0; i < size; ++i) {
            rows[i] = other.rows[i];
        }
    }
    return *this;
}

Matrix_Rac::~Matrix_Rac()
{
     delete[] rows;
}

Matrix_Rac::Matrix_Rac(int height, int width)
{
    size = height;
    rows = new Vector_Rational[height];
    for (int i = 0; i < height; i++) {
        rows[i] = Vector_Rational(width);
    }
}

Matrix_Rac::Matrix_Rac(const Matrix_Rac& other)
{
    size = other.size;
    rows = new Vector_Rational[other.rows[0].getSize()];
    for (int i = 0; i < size; i++) {
        rows[i] = other.rows[i];
    }
}

Vector_Rational& Matrix_Rac::operator[](int index)
{
    if (index >= 0 && index < size) {
        return rows[index];
    }
    throw "Index out of range";
}

