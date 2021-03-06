#include <stdio.h>
#include "engine/logger.h"
#include "engine/engine.h"
#include "scenes/splashScene.h"
#include "scenes/finalScene.h"

// available platforms:
// - PLATFORM_POKITTO
// - PLATFORM_WIN
// - PLATFORM_MAC
// - PLATFORM_LINUX
// engines:
// - ENGINE_ALLEGRO (win, mac and linux)
// - ENGINE_POKITTO

int main(int argc, char **argv){

    // informações da plataforma
    setupLogger();
    Logger.info("### SENAC BCC PI 2 // Projeto Betelgeuse ###");

    // setup do ambiente + cena inicial
    Game game = createNewGame();
    changeScene(&game, makeSplashScene(&game));

    // game lyfecycle
    while (game.running) nextFrame(&game);
    endGame(&game);

    return 0;
}
