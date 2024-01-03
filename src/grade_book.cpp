#include <iostream>
char getGrade(int a, int b, int c)
{
    int sum = a + b + c;
    int avg = sum / 3;
    if (avg >= 90)
    {
        return 'A';
    }
    else if (avg >= 80)
    {
        return 'B';
    }
    else if (avg >= 70)
    {
        return 'C';
    }
    else if (avg >= 60)
    {
        return 'D';
    }
    else if (avg >= 0)
    {
        return 'F';
    }
    else
    {
        return '0';
    }

    // your code here
}

int main(int argc, char const *argv[])
{
    char avg = getGrade(90,80,100);
    std::cout << avg << std::endl;
    return 0;
}
