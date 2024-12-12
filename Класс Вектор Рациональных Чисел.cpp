#include <iostream>
#include "Vector_Rational.h"
#include "RationalNumbers.h"
#include "Matrix_Rac.h"

using namespace std;

int main()
{
    Vector_Rational v1(5);
    for (int i = 0; i < v1.getSize(); ++i) {
        v1[i] = RationalNumbers(1, 1) + i;  
    }

    Vector_Rational v2(5);
    cin >> v2;

    cout << "Vector_Rational 1: " << v1 << std::endl;
    cout << "Vector_Rational 2: " << v2 << std::endl;


    Vector_Rational v3 = v1 + v2;
    cout << "v1 + v2: " << v3 << std::endl;

    RationalNumbers dot = v1.dotProduct(v2);
    cout << "Dot product of v1 and v2: " << dot << std::endl;

    Vector_Rational v5 = v1 / RationalNumbers(2, 1);
    cout << "v1 / 2: " << v5 << std::endl;

    Vector_Rational v6;
    cout << v6;
    Matrix_Rac test(3, 4);
    cout << "Matrix" << test << endl;
    return 0;
}


