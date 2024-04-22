#include <iostream>

const int NUMBER_OF_STANDARDS = 7;

const long STANDARD_CODES[NUMBER_OF_STANDARDS] = { 199711L, 201103L,
201402L, 201703L, 202002L, 202302L, 202612L };

const char* STANDARD_NAMES[NUMBER_OF_STANDARDS] = { "Pre-C++11", "C++11",
"C++14", "C++17", "C++20", "C++23", "C++26" };

const int ERROR_CODE = 1;

int main()
{
    long currentStandardCode = __cplusplus;

    if (currentStandardCode == ERROR_CODE)
    {
        std::cout << "Loi: Khong the xac dinh duoc phien ban C++ standard!\n";
        return 0;
    }

    std::cout << "Phien ban C++ standard dang su dung la: ";

    for (int i = 0; i < NUMBER_OF_STANDARDS; ++i)
    {
        if (currentStandardCode <= STANDARD_CODES[i])
        {
            std::cout << STANDARD_NAMES[i];
            if (currentStandardCode < STANDARD_CODES[i])
            {
                std::cout << " (preview)";
            }
            break;
        }
    }

    std::cout << '\n';

    return 0;
}
