#include <iostream>
int basicOp(char op, int val1, int val2)
{
    switch (op)
    {
    case '+':
        return val1 + val2;
        /* code */
    case '-':
        return val1 - val2;
    case '*':
        return val1 * val2;
    case '/':
        return val1 / val2;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    std::cout << basicOp('+', 6,7) << std::endl;
    return 0;
}
