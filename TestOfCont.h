//
// Created by yusuf on 21.03.2021.
//
#ifndef THEPROJECT_OFHW_TESTOFCONT_H
#define THEPROJECT_OFHW_TESTOFCONT_H
#include <chrono>
#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <forward_list>
#include <deque>
#include <algorithm>
#include <chrono>
#include <cstdlib>
class TestOfCont {
private:
    std::string container;
    std::chrono::steady_clock::time_point start;
public:
    TestOfCont (std::string st);

    ~TestOfCont();
};



#endif //THEPROJECT_OFHW_TESTOFCONT_H
