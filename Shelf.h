#pragma once

#include "Lightbox.h"

class Shelf
{
public:
	Shelf();
	Shelf(int width);
	int get_width();
	int get_number_of_lightboxes();
	Lightbox* get_contents();
	bool add_lightbox(Lightbox a_lightbox);
	~Shelf();

private:
	Lightbox* m_boxes;
	int m_width;
	int m_lightboxes_num;
};

