//
// Created by yusuf on 21.03.2021.
//

#include "TestOfCont.h"

TestOfCont::~TestOfCont() {
    std::cout << "Время для " << TestOfCont::container << std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start).count() << " mcs\n";
}
TestOfCont::TestOfCont (std::string st) : container(st) {
        start = std::chrono::steady_clock::now();
}

