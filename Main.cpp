#include <iostream>
#include "Earphones.h"
#include "Inner\\Brush.h"
using namespace std;

int main() {
    Earphone e;
    e.playRight();
    e.playLeft();
    e.playMono();
    e.playStereo();

    cout << "\nEarphones portion done.\n\n";

    Brush b;
    b.scrubLeft();
    b.scrubRight();
    b.scrubUp();
    b.scrubDown();

    cout << "\nBrush portion done.\n\n";
}