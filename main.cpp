#include <iostream>
#include "Human.h"
using namespace std;

int main() {
    Human H1;
    Human H2;
    H1.OpenCell();
    H2.AddCell(H1.CurrentCell);
}
