
#include <iostream>
#include "Lightbox.h"
#include "Shelf.h"

int main()
{
    Lightbox box1("blue", 10);
    Lightbox box2("red", 20);
    Lightbox box3("black", 30);
    Lightbox box4("yellow", 40);
    Shelf sh(3);
    int num = 0;
    cout << "width of Shelf is " << sh.get_width() << endl;
    num = sh.get_number_of_lightboxes();
    cout << "my shelf has " << num << " lightboxes" << endl;
    if (sh.add_lightbox(box1))
    {
        //cout << "add box1 success!" << endl;
        num = sh.get_number_of_lightboxes();
        cout << "my shelf has " << num << " lightboxes" << endl;
    }
    else
    {
        cout << "failed" << endl;
        cout << "not enough space on shelf" << endl;
    }
    if (sh.add_lightbox(box2))
    {
        //cout << "add box2 success!" << endl;
        num = sh.get_number_of_lightboxes();
        cout << "my shelf has " << num << " lightboxes" << endl;
    }
    else
    {
        cout << "failed" << endl;
        cout << "not enough space on shelf" << endl;
    }
    if (sh.add_lightbox(box3))
    {
        //cout << "add box3 success!" << endl;
        num = sh.get_number_of_lightboxes();
        cout << "my shelf has " << num << " lightboxes" << endl;
    }
    else
    {
        cout << "failed" << endl;
        cout << "not enough space on shelf" << endl;
    }
    if (sh.add_lightbox(box4))
    {
        //cout << "add box4 success!" << endl;
    }
    else
    {
        cout << "failed" << endl;
        cout << "not enough space on shelf" << endl;
    }

    num = sh.get_number_of_lightboxes();
    cout << "my shelf has " << num << " lightboxes" << endl;
    Lightbox* lb = sh.get_contents();
    for (int i = 0; i < num; i++)
    {
        cout << "colour: " << lb[i].get_colour() << ", Width: " << lb[i].get_width() << endl;
    }

    return 0;
}
