// Gorky.cpp : Defines the entry point for the application.
//

#include "Gorky.h"
#include <fmt/format.h>
#include <gmock/gmock.h>

int main()
{
    using std::cout;
    using std::endl;
    cout << fmt::format("Hello CMake. {}", "!!!") << endl;
    return 0;
}
