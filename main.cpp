#include <SFML/Graphics.hpp>

int main()
{
    sf::Window janela(sf::VideoMode(800,600), "Jogo sem nome", sf::Style::Close);
    sf::Event evento;

    while (janela.isOpen())
    {
        while (janela.pollEvent(evento))
        {
            if (evento.type == sf::Event::Closed)
                janela.close();
        }
    }

    return 0;
}
