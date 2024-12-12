#include "Matrix_Rac.h"

ostream& operator<<(ostream& out, const Matrix_Rac& m)
{
    for (int i = 0; i < m.size; i++) {
        for (int j = 0; j < m.rows[i].getSize(); i++) {
            cout << m.rows[i][j];
        }
    }
    return out;
}
