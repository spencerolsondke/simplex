#include <vector>
#include <string>
#include <sstream>

class Matrix
{
    public:
        Matrix(std::vector<std::vector<float>> rows, std::string name="N/A") :
            m_rows(rows), m_name(name) {};
        std::string toString();

    private:
        std::string m_name;
        std::vector<std::vector<float>> m_rows;
};