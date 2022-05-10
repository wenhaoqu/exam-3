
#include <iostream>
#include "Lightbox.h"

int main()
{
    Lightbox box1("blue", 10);
    Lightbox box2("red", 20);
    Lightbox box3("black", 30);
    Lightbox box4("yellow", 40);
    cout << box1.get_colour() << endl << box1.get_width() << endl;
    cout << box2.get_colour() << endl << box2.get_width() << endl;
    cout << box3.get_colour() << endl << box3.get_width() << endl;
    cout << box4.get_colour() << endl << box4.get_width() << endl;

    return 0;
}
