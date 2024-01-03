#include <string>
#include <iostream>

std::string boolean_to_string(bool b)
{
    switch (b)
    {
    case true:
        return "true";
    default:
        return "false";
    }
}

int main(int argc, char const *argv[])
{
    std::cout << boolean_to_string(true) << std::endl;
    return 0;
}
