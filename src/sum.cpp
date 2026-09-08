// src/sum.cpp

#include <vector>
#include "sum.h"

int sum( const std::vector<int>& nums ) {
    int total = 0;

    for( auto i{0}; i < nums.size(); i++ ) {
        total += nums.at(i);
    }

    return total;
}
