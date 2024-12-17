#include <iostream>
#include "Vector_Rational.h"
#include "RationalNumbers.h"
#include "Matrix_Rac.h"

using namespace std;

int main()
{
    int m = 2;
    int n = 3;
    
    Vector_Rational v1(n);
    for (int i = 0; i < v1.getSize(); ++i) {
        v1[i] = RationalNumbers(1, 1) + i;  
    }
    
    Vector_Rational v2(n);
    cin >> v2;

    Vector_Rational v3(m);
    cin >> v3;

    cout << "Vector_Rational 1: " << v1 << std::endl;
    cout << "Vector_Rational 2: " << v2 << std::endl;

    RationalNumbers dot = v1.dotProduct(v2);
    cout << "Dot product of v1 and v2: " << dot << std::endl;

    Vector_Rational v5 = v1 / RationalNumbers(2, 1);
    cout << "v1 / 2: " << v5 << std::endl;


    Matrix_Rac m1(m, n);
    m1[0] = v1;
    m1[1] = v2;

    cout << "Matrix 1" << endl << m1 << endl;

    Matrix_Rac m2(n, m);
    m2[0] = v3;
    m2[1] = v3;
    cout << "Matrix 2" << endl << m2 << endl;

    Matrix_Rac multed = m1 * m2;
    
    cout << "Multriplied: " << endl << multed;

    Matrix_Rac multed_copy = Matrix_Rac(multed);

    cout << "Multriplied_Copy: " << endl << multed_copy;

    cout << endl << "Sledovanie: " << multed.Sledovanie();
    return 0;
}


