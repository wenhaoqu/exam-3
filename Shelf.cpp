#include "Shelf.h"

Shelf::Shelf()
{
	this->m_width = 0;
	this->m_lightboxes_num = 0;
	this->m_boxes = NULL;
}

Shelf::Shelf(int width)
{
	this->m_width = width;
	this->m_lightboxes_num = 0;
	this->m_boxes = new Lightbox[width];
}

int Shelf::get_width()
{
	return this->m_width;
}

int Shelf::get_number_of_lightboxes()
{
	return this->m_lightboxes_num;
}

Lightbox* Shelf::get_contents()
{
	return this->m_boxes;
}

bool Shelf::add_lightbox(Lightbox a_lightbox)
{
	if (m_lightboxes_num < m_width)
	{
		for (int i=0; i< m_width; i++)
		{
			if (m_boxes[i].get_width() == 0)
			{
				m_boxes[i] = a_lightbox;
				break;
			}
		}
		m_lightboxes_num++;
		return true;
	}
	return false;
}

Shelf::~Shelf()
{

}
