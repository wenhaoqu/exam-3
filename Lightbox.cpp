#include "Lightbox.h"

Lightbox::Lightbox()
{
	this->m_colourname = "null";
	this->m_width = 0;
}

Lightbox::~Lightbox()
{
}

Lightbox::Lightbox(string colourname, int width)
{
	this->m_colourname = colourname;
	this->m_width = width;
}

string Lightbox::get_colour()
{
	return this->m_colourname;
}

int Lightbox::get_width()
{
	return this->m_width;
}
