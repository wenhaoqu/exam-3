#pragma once
#include <string>

using namespace std;

class Lightbox
{
public:
	Lightbox();
	~Lightbox();
	Lightbox(string colourname, int width);
	string get_colour();
	int get_width();

private:
	string m_colourname;
	int m_width;
};

