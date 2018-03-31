#include <SFML/Graphics.hpp>

int main()
{
    sf::Window janela(sf::VideoMode(800,600), "Jogo sem nome", sf::Style::Close); //Adiciona uma janela de tamanho 800 x 600 pixels que só permite ser fechada
    sf::Event evento;

    while (janela.isOpen())
    {
        while (janela.pollEvent(evento)) //Ocorre quando algum evento está sendo requerido para ser processado
        {
            if (evento.type == sf::Event::Closed)
                janela.close();
        }
    }

    return 0;
}
