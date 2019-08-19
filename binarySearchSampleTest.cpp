//
// Created by Zachary Kurmas on 2019-08-19.
//
#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include<vector>
#include "BinarySearch.hpp"

TEST_CASE("find in middle") {
  REQUIRE(2 == binarySearch({2, 4, 6, 8, 10, 12}, 6));
}
