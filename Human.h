//
// Created by yusuf on 21.03.2021.
//
#include "BankCell.h"
#ifndef THEPROJECT_OFHW_HUMAN_H
#define THEPROJECT_OFHW_HUMAN_H


class Human {
public:
    bool OpenCell ();
    bool AddCell  (std::shared_ptr<BankCell> CellPtr);

    std::shared_ptr<BankCell> CurrentCell = std::make_shared<BankCell>();
};


#endif //THEPROJECT_OFHW_HUMAN_H
