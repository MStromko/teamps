#include <curses.h>
#include <stdlib.h>
#include <string.h>
#include "world.h"
#include "game.h"

// Start is called one in the beginning
void* init_game(){
    // Allocate memory for the state
    struct game* st = calloc(1,(sizeof(struct game)));
    // Initialize state
    st->xplayer_position = 1;
    st->yplayer_position = 10;
	st->xpit_position = 2;
	st->ypit_position = 1;
	st->xbetterpit_position = 3;
	st->xbetterpit_position = 1;
    st->xwall_position[0] = 1;
    st->ywall_position[0] = 0;
	st->xwall_position[1] = 2;
	st->ywall_position[1] = 0;
	st->xwall_position[2] = 3;
	st->ywall_position[2] = 0;
	st->xwall_position[3] = 4;
	st->ywall_position[3] = 0;
	st->xwall_position[4] = 5;
	st->ywall_position[4] = 0;
	st->xwall_position[5] = 5;
	st->ywall_position[5] = 1;
	st->xwall_position[6] = 7;
	st->ywall_position[6] = 1;
	st->xwall_position[7] = 8;
	st->ywall_position[7] = 1;
	st->xwall_position[8] = 9;
	st->ywall_position[8] = 1;
	st->xwall_position[9] = 7;
	st->ywall_position[9] = 2;
	st->xwall_position[10] = 7;
	st->ywall_position[10] = 3;
	st->xwall_position[11] = 8;
	st->ywall_position[11] = 3;
	st->xwall_position[12] = 1;
	st->ywall_position[12] = 4;
	st->xwall_position[13] = 2;
	st->ywall_position[13] = 4;
	st->xwall_position[14] = 3;
	st->ywall_position[14] = 4;
	st->xwall_position[15] = 4;
	st->ywall_position[15] = 4;
	st->xwall_position[16] = 5;
	st->ywall_position[16] = 4;
	st->xwall_position[17] = 7;
	st->ywall_position[17] = 4;
	st->xwall_position[18] = 5;
	st->ywall_position[18] = 5;
	st->xwall_position[19] = 9;
	st->ywall_position[19] = 5;
	st->xwall_position[20] = 1;
	st->ywall_position[20] = 6;
	st->xwall_position[21] = 3;
	st->ywall_position[21] = 6;
	st->xwall_position[22] = 5;
	st->ywall_position[22] = 6;
	st->xwall_position[23] = 9;
	st->ywall_position[23] = 6;
	st->xwall_position[24] = 7;
	st->ywall_position[24] = 7;
	st->xwall_position[25] = 1;
	st->ywall_position[25] = 8;
	st->xwall_position[26] = 3;
	st->ywall_position[26] = 8;
	st->xwall_position[27] = 4;
	st->ywall_position[27] = 8;
	st->xwall_position[28] = 5;
	st->ywall_position[28] = 8;
	st->xwall_position[29] = 7;
	st->ywall_position[29] = 8;
	st->xwall_position[30] = 9;
	st->ywall_position[30] = 8;
	st->xwall_position[31] = 1;
	st->ywall_position[31] = 9;
	st->xwall_position[32] = 3;
	st->ywall_position[32] = 9;
	st->xwall_position[33] = 7;
	st->ywall_position[33] = 9;
	st->xwall_position[34] = 9;
	st->ywall_position[34] = 9;
	st->xwall_position[35] = 5;
	st->ywall_position[35] = 10;
	st->xwall_position[36] = 4;
	st->ywall_position[36] = 11;
	st->xwall_position[37] = 5;
	st->ywall_position[37] = 11;
	st->xwall_position[38] = 8;
	st->ywall_position[38] = 11;
	st->xwall_position[39] = 9;
	st->ywall_position[39] = 11;
	st->xwall_position[40] = 1;
	st->ywall_position[40] = 12;
	st->xwall_position[41] = 5;
	st->ywall_position[41] = 12;
	st->xwall_position[42] = 8;
	st->ywall_position[42] = 12;
	st->xwall_position[43] = 4;
	st->ywall_position[43] = 13;
	st->xwall_position[44] = 5;
	st->ywall_position[44] = 13;
	st->xwall_position[45] = 6;
	st->ywall_position[45] = 13;
	st->xwall_position[46] = 11;
	st->ywall_position[46] = 13;
	st->xwall_position[47] = 6;
	st->ywall_position[47] = 14;
	st->xwall_position[48] = 7;
	st->ywall_position[48] = 14;
	st->xwall_position[49] = 10;
	st->ywall_position[49] = 14;
	st->xwall_position[50] = 11;
	st->ywall_position[50] = 14;
	st->xwall_position[51] = 1;
	st->ywall_position[51] = 15;
	st->xwall_position[52] = 2;
	st->ywall_position[52] = 15;
	st->xwall_position[53] = 3;
	st->ywall_position[53] = 15;
	st->xwall_position[54] = 4;
	st->ywall_position[54] = 15;
	st->xwall_position[55] = 11;
	st->ywall_position[55] = 15;
	st->xwall_position[56] = 4;
	st->ywall_position[56] = 16;
	st->xwall_position[57] = 5;
	st->ywall_position[57] = 16;
	st->xwall_position[58] = 8;
	st->ywall_position[58] = 16;
	st->xwall_position[59] = 13;
	st->ywall_position[59] = 16;
	st->xwall_position[60] = 8;
	st->ywall_position[60] = 17;
	st->xwall_position[61] = 10;
	st->ywall_position[61] = 17;
	st->xwall_position[62] = 11;
	st->ywall_position[62] = 17;
	st->xwall_position[63] = 2;
	st->ywall_position[63] = 18;
	st->xwall_position[64] = 6;
	st->ywall_position[64] = 18;
	st->xwall_position[65] = 11;
	st->ywall_position[65] = 18;
	st->xwall_position[66] = 12;
	st->ywall_position[66] = 18;
	st->xwall_position[67] = 14;
	st->ywall_position[67] = 18;
	st->xwall_position[68] = 15;
	st->ywall_position[68] = 18;
	st->xwall_position[69] = 1;
	st->ywall_position[69] = 19;
	st->xwall_position[70] = 2;
	st->ywall_position[70] = 19;
	st->xwall_position[71] = 3;
	st->ywall_position[71] = 19;
	st->xwall_position[72] = 4;
	st->ywall_position[72] = 19;
	st->xwall_position[73] = 6;
	st->ywall_position[73] = 19;
	st->xwall_position[74] = 8;
	st->ywall_position[74] = 19;
	st->xwall_position[75] = 9;
	st->ywall_position[75] = 19;
	st->xwall_position[76] = 12;
	st->ywall_position[76] = 19;
	st->xwall_position[77] = 15;
	st->ywall_position[77] = 19;
	
	st->xenemy_position[0] = 18;
	st->yenemy_position[0] = 1;
	st->xenemy_position[1] = 22;
	st->yenemy_position[1] = 3;
	st->xenemy_position[2] = 18;
	st->yenemy_position[2] = 5;
	st->xenemy_position[3] = 24;
	st->yenemy_position[3] = 5;
	st->xenemy_position[4] = 20;
	st->yenemy_position[4] = 9;
	st->xenemy_position[5] = 20;
	st->yenemy_position[5] = 11;
	st->xenemy_position[6] = 28;
	st->yenemy_position[6] = 13;
	st->xenemy_position[7] = 24;
	st->yenemy_position[7] = 17;
	st->xenemy_position[8] = 20;
	st->yenemy_position[8] = 17;
	st->xenemy_position[9] = 22;
	st->yenemy_position[9] = 19;
	
	st->xbetterenemy_position[0] = 24;
	st->ybetterenemy_position[0] = 1;
	st->xbetterenemy_position[1] = 28;
	st->ybetterenemy_position[1] = 11;
	st->xbetterenemy_position[2] = 16;
	st->ybetterenemy_position[2] = 15;
	st->xbetterenemy_position[3] = 20;
	st->ybetterenemy_position[3] = 18;
	st->xbetterenemy_position[4] = 22;
	st->ybetterenemy_position[4] = 18;
	
	st->xmine_position[0] = 17;
	st->ymine_position[0] = 4;
	st->xmine_position[1] = 20;
	st->ymine_position[1] = 6;
	st->xmine_position[2] = 22;
	st->ymine_position[2] = 8;
	st->xmine_position[3] = 20;
	st->ymine_position[3] = 12;
	st->xmine_position[4] = 20;
	st->ymine_position[4] = 14;
	st->xmine_position[5] = 18;
	st->ymine_position[5] = 18;
	st->xmine_position[6] = 21;
	st->ymine_position[6] = 19;
	st->xmine_position[7] = 23;
	st->ymine_position[7] = 15;
    // Store pointer to the state to the world variable
    return st;
}

// Step is called in a loop once in interval.
// It should modify the state and draw it.
int game_event(struct event* event,void* game){
	COLS = 30;
	LINES = 20;
    // Get state pointer
    struct game* state = game;
    char msg[200];
    sprintf(msg,"%d",event->type);
    set_message(msg,10,0);
    if ( event->type == EVENT_ESC){
        // Non zero means finish the loop and stop the game.
        return 1;
    }
	int kamen = 0;
	int zelezo =0;
if (event->type == EVENT_KEY){
	
	if((state->xplayer_position == state->xpit_position) && (state->yplayer_position == state->ypit_position) && (event->key ==KEY_ENTER)){
		kamen +=1;
	}
	if((state->xplayer_position == state->xbetterpit_position) && (state->yplayer_position == state->ybetterpit_position) && (event->key ==KEY_ENTER)){
		zelezo +=1;
	}
	if((event->key == KEY_UP) && (event->key == KEY_ENTER)){
		kamen = 99999;
		zelezo = 99999;
	}
	// Move player according to keyboard
        if ( event->key == KEY_UP){
            state->xplayer_position = 0;
            state->yplayer_position = state->yplayer_position -1;
        }
        else if ( event->key == KEY_DOWN){
            state->xplayer_position = 0;
            state->yplayer_position = 1;
        }
        else if ( event->key == KEY_LEFT){
            state->xplayer_position = state->xplayer_position -1;
            state->yplayer_position = 0;
        }
        else if ( event->key == KEY_RIGHT){
            state->xplayer_position = state->xplayer_position +1;
            state->yplayer_position = 0;
        }
}

//Is player on mine?
for(int i = 0; i <= COLS; i++){
	for(int j = 0; j <= LINES; j++){
		if ((state->xplayer_position == state->xmine_position[i]) && (state->yplayer_position == state->ymine_position[j]) && (kamen == 99999) && (zelezo == 99999)){
			continue;
		}
		else if ((state->xplayer_position == state->xmine_position[i]) && (state->yplayer_position == state->ymine_position[j])){
			clear_screen();
			set_message("Mini vybuchuj˙, koniec",15,10);
			return 0;
		}
	}
}


//Is here wall?
for (int i = 0; i < COLS; i++){
	for (int j = 0; j < LINES; j++){
		if ((state->xplayer_position == state->xwall_position[i]) && (state->yplayer_position == state->ywall_position[j])){
			state->xplayer_position -= 1;
			state->yplayer_position -= 1;
		}
	}
}

for (int i = 0; i < COLS; i++){
	for (int j = 0; j < LINES; j++){
		if ((state->xwall_position == state->xenemy_position) && (state->ywall_position == state->yenemy_position)){
			state->xenemy_position[i] -= 1;
			state->yenemy_position[j] -= 1;
		}
	}
}

for (int i = 0; i < COLS; i++){
	for (int j = 0; j < LINES; j++){
		if((state->xwall_position == state->xbetterenemy_position) && (state-> ywall_position == state->ybetterenemy_position)){
			state->xbetterenemy_position[i] -= 1;
			state->ybetterenemy_position[j] -= 1;
		}
	}
}

//Is player out of bounds?
if (state->xplayer_position < 0 || state->yplayer_position >= COLS){
	sprintf(msg,"Width %d is out of bounds (0,%d)",state->xplayer_position,COLS);
}
if (state->yplayer_position < 0 || state->yplayer_position >= LINES){
	sprintf(msg,"Height %d is out of bounds (0,%d)",state->yplayer_position,LINES);
}

//Is player on enemy?
for(int i = 0; i <= COLS; i++){
	for(int j = 0; j <= LINES; j++){
		if ((state->xplayer_position == state->xenemy_position[i]) && (state->yplayer_position == state->yenemy_position[j])){
			if (kamen >= 20){
				state->xenemy_position[i] = -1000;
				state->yenemy_position[j] = -1000;
			}
			else{
				clear_screen();
				set_message("Dostal ùa nepriateæ, koniec",15,10);
				return 0;
		}
	}
}
}

for(int i = 0; i <= COLS; i++){
	for(int j = 0; j <= LINES; j++){
		if ((state->xplayer_position == state->xbetterenemy_position[i]) && (state->yplayer_position == state->ybetterenemy_position[j])){
			if ((kamen >= 40) && (zelezo >=15)){
				state->xbetterenemy_position[i] = -1000;
				state->ybetterenemy_position[j] = -1000;
			}
			else{
				clear_screen();
				set_message("Dostal ùa siln˝ nepriateæ, koniec",15,10);
				return 0;
			}
		}
	}
}
	

//random pohyb enemy
int ene = rand() % 6;
for (int i = 0; i < COLS; i++){
	for (int j = 0; j < LINES; j++){
        if (ene == 0){
            state->yenemy_position[j] -= 1;
        }
        else if (ene == 1){
            state->yenemy_position[j] += 1;
        }
        else if (ene == 2){
            state->xenemy_position[i] -= 1;
        }
        else if (ene == 3){
            state->xenemy_position[i] += 1;
        }
	}
}

//random pohyb betterenemy
int bene = rand() % 6;
for(int i = 0; i <= COLS; i++){
	for(int j = 0; j <= LINES; j++){
        if (bene == 0){
            state->ybetterenemy_position[j] -= 1;
        }
        else if (bene == 1){
            state->ybetterenemy_position[j] += 1;
        }
        else if (bene == 2){
            state->xbetterenemy_position[i] -= 1;
        }
        else if (bene == 3){
            state->xbetterenemy_position[i] += 1;
        }
	}
}


// Draw world state 
    //
    // Draw player
    clear_screen();
    set_color_cell('O',state->xplayer_position,state->yplayer_position,COLOR_BLUE,COLOR_BLACK);
    // Draw enemy
	for(int i = 0; i <= COLS; i++){
		for(int j = 0; j <= LINES; j++){
			set_color_cell('x',state->xenemy_position[i],state->yenemy_position[j],COLOR_MAGENTA,COLOR_BLACK);
		}
	}
	//Draw betterenemy
	for(int i = 0; i <= COLS; i++){
		for(int j = 0; j <= LINES; j++){
			set_color_cell('X',state->xbetterenemy_position[i],state->ybetterenemy_position[j],COLOR_RED,COLOR_WHITE);
		}
	}
	//Draw mine
	for(int i = 0; i <= COLS; i++){
		for(int j = 0; j <= LINES; j++){
			set_color_cell('o',state->xmine_position[i],state->ymine_position[j],COLOR_WHITE,COLOR_BLACK);
		}
	}
	//Draw pit
	set_color_cell(' ',state->xpit_position,state->ypit_position,COLOR_BLACK,COLOR_CYAN);
	//Draw betterpit
	set_color_cell(' ',state->xbetterpit_position,state->ybetterpit_position,COLOR_BLACK,COLOR_YELLOW);
	//Draw wall
	for(int i = 0; i <= COLS; i++){
		for(int j = 0; j <= LINES; j++){
			set_color_cell('W',state->xwall_position[i],state->ywall_position[j],COLOR_WHITE,COLOR_GREEN);
		}
	}
	set_message( state->message,1,0);
    return 0;
}