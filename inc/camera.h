#pragma once
#include <iostream>

namespace mt
{
	struct Pixel
	{
		uint8_t r, g, b, a;
	};

	class Camera
	{
	public:
		Camera(int width, int height);
		~Camera();
		Pixel* Picture();
		void Fill(Pixel pixel);
		void Clear();

	private:
		int m_width;
		int m_height;
		Pixel* m_picture;
	};
}