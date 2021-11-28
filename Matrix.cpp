#include "Matrix.h"

std::string Matrix::toString()
{
    std::stringstream result;

    result << m_name << std::endl;
    for(std::vector row : m_rows)
    {
        for(float element : row)
        {
            result << element << " ";
        }
        result << std::endl;
    }
    result << "------------------" << std::endl;

    std::string resultStr = result.str();
    return resultStr; // Removing last ',\n' from the string
}