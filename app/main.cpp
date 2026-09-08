#include <iostream>
#include <vector>

#include "sum.h"

int main(int argc, char** argv) {
    std::vector<int> numbers{10, 20, 30, 40, 50};

    std::cout << sum(numbers) << std::endl;

    return 0;
}
