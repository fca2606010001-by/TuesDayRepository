#include <iostream>
#include "Player.h"

using namespace std;

// ダメージ関数
void Damage(int* hp)
{
    *hp -= 20;
}

// 回復関数
void Heal(int* hp)
{
    *hp += 30;
}

int main()
{
	// Playerと初期HP
    Player player;
	cout << "初期HP: " << player.hp << endl;

	// ダメージとHP
    Damage(&player.hp);
	cout << "現在HP: " << player.hp << endl;

    // 回復とHP
    Heal(&player.hp);
	
    // 最終HP
    cout << "最終HP: " << player.hp << endl;

    return 0;
}