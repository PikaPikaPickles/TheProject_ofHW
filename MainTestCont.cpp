//
// Created by yusuf on 21.03.2021.
//

#include "MainTestCont.h"
MainTestCont::MainTestCont() {

    srand(13);

    std::array<int, 10000> HromoyJoeArAr;
    for (auto& x : HromoyJoeArAr) {
        x = rand();
    }
    std::vector<int> VectorniyHans(std::begin(HromoyJoeArAr), std::end(HromoyJoeArAr));
    std::list<int> SpisokShindlera(std::begin(HromoyJoeArAr), std::end(HromoyJoeArAr));
    std::forward_list<int> VperedPhistech(std::begin(HromoyJoeArAr), std::end(HromoyJoeArAr));
    std::deque<int> DeqaWinka(std::begin(HromoyJoeArAr), std::end(HromoyJoeArAr));

    {
        TestOfCont t("vector ");
        std::sort(VectorniyHans.begin(), VectorniyHans.end());
    }
    {
        TestOfCont t("array ");
        std::sort(HromoyJoeArAr.begin(), HromoyJoeArAr.end());
    }
    {
        TestOfCont t("list ");
        SpisokShindlera.sort();
    }
    {
        TestOfCont t("forward_list ");
        VperedPhistech.sort();
    }
    {
        TestOfCont t("deque ");
        std::sort(DeqaWinka.begin(), DeqaWinka.end());
    }
//    провнвлизировал немного код, когда запускал на винде - разброс был в 2-2.5 раза
//    На линуксе же разброс всего в 1.01-1.1 раз. С чем связано - вопрос к Осевикам.
}
