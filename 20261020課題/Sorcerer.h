#pragma once
class Sorcerer
{
public:
	int hp;
	int mp;

	//‹¤’Ê‚Ìˆ—
	virtual void ShowStatus();
	//”h¶ƒNƒ‰ƒX‚ÉÀ‘•‚ğ‚·‚é
	virtual void UseTechnique() = 0;
};

