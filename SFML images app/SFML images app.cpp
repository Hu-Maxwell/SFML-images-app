#include <SFML/Graphics.hpp>

#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "image");

    // texture 
    sf::Texture texture;
    if (!texture.loadFromFile("C:/Users/maxwe/source/repos/SFML images app/billyman.png")) { 
        return -1;
    }

    // sprite
    sf::Sprite sprite;
    sprite.setTexture(texture);


    // what is a texture and what is a sprite? 

    while (window.isOpen()) {
        
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}