#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
    const sf::Vector2u viewSize(1024.0f, 768.0f);

    sf::RectangleShape rect(sf::Vector2f(400.0f, 200.0f));
    rect.setFillColor(sf::Color::Red);
    rect.setPosition(sf::Vector2f(viewSize.x / 2, viewSize.y / 2));
    rect.setOrigin(sf::Vector2f(rect.getSize().x / 2, rect.getSize().y / 2));

    sf::VideoMode vm({viewSize.x, viewSize.y});
    sf::RenderWindow window(vm, "Ethan", sf::Style::Default);

    while (window.isOpen()) {
        window.clear();
        window.draw(rect);
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) window.close();
        }
        window.display();
    }

    return 0;
}
