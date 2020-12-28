#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <bits/stdc++.h>
#include <F:/Programming/SFML/audiio/source files/game.hpp>


int main()
{
    Game game;
    game.run();

	sf::Music music;

	if (!music.openFromFile("bg_music.ogg"))
	{
		std::cout << "ERROR playing background music" << std::endl;
	}

	music.play();
	music.setLoop(true);
}
