/*
 *      Player.h
 *      
 *      Copyright 2009 Stephen Eisenhauer <mail@stepheneisenhauer.com>
 * 
 * 		Class header for Player objects.
 */

#include <3ds.h>
#include "SmokeTrail.h"
#include "Drawing.h"

#ifndef PLAYER_H
#define PLAYER_H

#define MAX_VELOCITY 5
#define GRAVITATION .2
#define THRUST (2.5 * GRAVITATION)

class Player {

public:

	// Constructors and destructor
	Player();		// default constructor
	~Player();		// destructor

	// Initializer
	void spawn();

	// Accessors
	int GetY();

	// Tests
	bool CollidesWith(const Rectangle rect, float x=0, float y=0);

	// Operations
	void thrust();	// Accelerate the player up
    void die();     // Player is kill
	void Move();	// Recalculate position
	void Draw();	// Draw the player to the screen

protected:

	int y_coord;	// Vertical position
	float y_veloc;	// Vertical velocity

	// Drawing objects
//	Image heliImage;
	Sprite heliSprite;

//	Image fireImageSheet;
//	Sprite fireSprite;

	SmokeTrail theSmokeTrail;
};

#endif