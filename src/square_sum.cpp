#include <vector>
#include <iostream>

int square_sum(const std::vector<int>& numbers)
{
    int sum = 0;
    for(auto c:numbers) {
        sum += c * c;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    std::vector<int> vector = std::vector<int>();
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    std::cout << square_sum(vector) << std::endl;
    return 0;
}
