#include <gtest/gtest.h>
#include "sum.h"

TEST(SumTest, AllPositiveNumbers) {
    std::vector<int> nums{1, 2, 3, 4, 5};
    ASSERT_EQ(sum(nums), 15);
}

TEST(SumTest, AllNegativeNumbers) {
    std::vector<int> nums{-1, -2, -3, -4, -5};
    ASSERT_EQ(sum(nums), -15);
}

TEST(SumTest, MixedNumbers) {
    std::vector<int> nums{-1, 2, -3, 4, -5};
    ASSERT_EQ(sum(nums), -3);
}

TEST(SumTest, EmptyVector) {
    std::vector<int> nums{};
    ASSERT_EQ(sum(nums), 0);
}
