#include <iostream>
#include <numeric>
#include <vector>
#include <array>
#include <algorithm>

int main()
{
    using namespace std;

    int chunk_length = 3;
    std::vector nums {
        1, 2, 3, 
        4, 5, 6, 
        7, 8};

    std::vector<std::array<int*, 3>> splitted((int(nums.size()/chunk_length)) + 1);

    for (size_t i = 0; i < nums.size(); i++) {
        if (i%chunk_length == 0) {
            splitted.at(i/chunk_length) = std::array<int*, 3>{&nums.at(i)};
        } else {
            splitted.at(i/chunk_length).at(i%chunk_length) = &nums.at(i);
        }
    }

    /* TODOs
    make it functional
    */

    std::cin.get();
    return 0;
}