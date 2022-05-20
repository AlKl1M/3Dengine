#pragma once
#include <SFML/Graphics.hpp>
#include <camera.h>
#include <string>

namespace mt
{
	class Scene
	{
	public:
		Scene(int width, int height);
		~Scene();
		void LifeCycle();
		void objFromFile(std::string filename, Point* point, Pixel* pixel);

	private:
		std::unique_ptr<Camera> m_camera;

		int m_width;
		int m_height;

		std::unique_ptr<sf::RenderWindow> m_window;
		std::unique_ptr<sf::Texture> m_texture;
		std::unique_ptr<sf::Sprite> m_sprite;

		Point* m_points = nullptr;
		Pixel* m_pixel = nullptr;
		int m_size = 0;
	};
}
