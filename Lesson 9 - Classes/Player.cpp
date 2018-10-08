#include "stdafx.h"
#include "Player.h"


Player::Player(int hps, string Name) :
	hit_points(hps),
	score(0) {
	name = new string(Name);
}

Player::~Player() {
	delete score;
	delete name;
}

int Player::get_hit_points() const {
	return hit_points;
}

int Player::get_score() const {
	return *score;
}

string Player::get_name() const {
	return *name;
}

void Player::set_hit_points(const int new_hit_points) {
	hit_points = new_hit_points;
}

void Player::set_score(const int new_score) {
	*score = new_score;
}

void Player::get_name(const string new_name) {
	delete name;
	name = new string(new_name);
}
