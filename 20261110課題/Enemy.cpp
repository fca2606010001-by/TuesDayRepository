#include "Enemy.h"
#include<iostream>
using namespace std;


Enemy::Enemy() :hp(100) {}

void Enemy::TakeDamage(int damage)
{
	if (hp <= 0)
		return;

	hp -= damage;

	if (hp < 0)
		hp = 0;
}

void Enemy::ShowStatus() const
{
	cout << "Enemy HP: " << hp << endl;
}

int Enemy::GetHP()
{
	return hp;
}