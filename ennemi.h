#ifndef enemy_H_INCLUDED
#define enemy_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

//structures

typedef struct 
{
   SDL_Surface *sprite; /*!< Surface.*/
   SDL_Rect pos; /*!< Rectangle*/
   int direction;
   int vie;
   SDL_Rect pos_sp; /*!< Rectangle*/ 
   Mix_Chunk* collisionSound;
   int vitesse;
   int pos_max,pos_min;

}Ennemi;

//entites des fonctions

void initEnnemi(Ennemi*e);    
void afficherEnnemi(Ennemi e, SDL_Surface * screen);
void animerEnnemi( Ennemi * e);
void deplacer( Ennemi * e,SDL_Rect person_pos);
int collision( SDL_Rect E, SDL_Rect p) ;



#endif 
