#include <vector>
#include <iostream>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int sum = 0;
  for(int g:classPoints) {
    sum += g;
  }
  return yourPoints > (sum / classPoints.size());
}

int main(int argc, char const *argv[])
{
    std::vector<int> vector = std::vector<int>();
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    std::cout << betterThanAverage(vector, 3) << std::endl;
    return 0;
}
