#ifndef _GAME_H_INCLUDE_
#define _GAME_H_INCLUDE_
#include "world.h"

struct game{
//	//player X speed
//	int xplayer;
//	//player Y speed
//	int yplayer;
	//player X position
	int xplayer_position;
	//player Y position
	int yplayer_position;
	//wall X position
	int xwall_position[78]; 
	//wall Y position
	int ywall_position[78];
	//enemy X position
	int xenemy_position[9];
	//enemy Y position
	int yenemy_position[9];
	//X better_enemy position
	int xbetterenemy_position[4];
	//Y better_enemy position
	int ybetterenemy_position[4];
	//X pit position
	int xpit_position;
	//Y pit position
	int ypit_position;
	//X better_pit position
	int xbetterpit_position;
	//Y better_pit position
	int ybetterpit_position;
	//X mine position
	int xmine_position[7];
	//Y mine position
	int ymine_position[7];
	//message
	char message[100];
};

// Returns pointer to  newly allocated state
void* init_game();

// Changes world according to the game state (pressed key, screen size or other event)
int game_event(struct event* event,void* game);

#endif