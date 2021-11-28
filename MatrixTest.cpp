#include <iostream>
#include <vector>
#include "Matrix.h"

int main()
{
    std::vector<std::vector<float>> matrix
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    Matrix testMatrix(matrix);

    std::cout << testMatrix.toString();

    return 0;
}