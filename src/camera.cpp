#include <camera.h>

namespace mt
{
	Camera::Camera(int width, int height)
	{
		m_height = height;
		m_width = width;
		m_picture = new Pixel[m_width * m_height];

		Clear();
	}

	Camera::~Camera()
	{
		delete[] m_picture;
	}

	Pixel* Camera::Picture() { return m_picture; }

	void Camera::Fill(Pixel pixel)
	{
		for (int i = 0; i < m_height; i++)
			for (int j = 0; j < m_width; j++)
				m_picture[i * m_width + j] = pixel;
	}

	void Camera::Clear()
	{
		for (int i = 0; i < m_height; i++)
			for (int j = 0; j < m_width; j++)
				m_picture[i * m_width + j] = { 0, 0, 0, 0 };
	}
}