#pragma once

#include "physicsbody.h"
#include "bullet.h"

#include <time.h>

typedef struct
{
	bool thrust;
	double angle;
	PhysicsBody body;

	Bullet bullets[MAX_BULLETS];
	unsigned last_bullet;
} Player;

void player_init(Player *player);

void move_player(Player *player, double pwr);

void rotate_player(Player *player, double degrees);

void player_shoot(Player *player);