//
// Created by yusuf on 21.03.2021.
//

#include "Human.h"
bool Human::OpenCell() {
    BankCell MyCell;
    auto ptr = std::make_shared<BankCell>(MyCell);
    CurrentCell = ptr;
}
bool Human::AddCell(std::shared_ptr<BankCell> CellPtr) {
    Human::CurrentCell = CellPtr;
}