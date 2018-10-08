// Lesson 9 - Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Player.h"

using namespace std;

class Enemy {
public:
	Enemy(int hps, int Score);
	~Enemy();
	int get_hit_points() const;
	int get_score() const;
	void set_hit_points(int new_hit_points);
	void set_score(int new_score);
private:
	int hit_points;
	int* score;
};

Enemy::Enemy(int hps, int Score) :
	hit_points(hps) {
	score = new int(Score);
}

Enemy::~Enemy() {
	delete score;
}

int Enemy::get_hit_points() const {
	return hit_points;
}

int Enemy::get_score() const {
	return *score;
}

void Enemy::set_hit_points(const int new_hit_points) {
	hit_points = new_hit_points;
}

void Enemy::set_score(const int new_score) {
	*score = new_score;
}

int main(void) {

	Enemy e1(2, 5);
	cout << "hit points = " << e1.get_hit_points() << "\n";

	Enemy* e2 = new Enemy(2, 5);
	e2->set_hit_points(3);
	cout << "hit points = " << e2->get_hit_points() << "\n";

	e2->set_score(2);
	cout << "score = " << e2->get_score() << "\n";

	Player p1(50, 5, "Samuel");
	cout << p1.get_name() << "\n";
	p1.set_name("Bendiish");
	cout << p1.get_name();

	delete e2;
	e2 = NULL;
	int x;
	cin >> x;
	return 0;
}