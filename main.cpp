#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
    // Vector2f data type is used to declare x and y value for size of window

    // VideoMode sets width and height of window, also gets the bits required for color representation and can alter resolutions

    //sf::style::Titlebar -> adds titlebar
    //sf::style::Fullscreen -> creates a fullscreen mode
    //sf::style::Default allows for resize, closing, and title

    sf::RenderWindow window(sf::VideoMode({1024, 600}), "Ethan", sf::Style::Default);

    while (window.isOpen()) {
        window.clear(sf::Color::White);
        window.display();
    }

    return 0;
}
