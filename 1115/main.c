#include <stdio.h>
#include <stdlib.h>

#define POKE_NUM 3

struct Pokemon
{	
	char *name;	// –¼‘O
	int hp;		// ‘Ì—Í
	int atk;	// UŒ‚—Í
	int def;	// –hŒä—Í
	int speed;	// ‘f‘‚³
};

void dispPoke(struct Pokemon p)
{
	// ‚±‚±‚ÉƒvƒƒOƒ‰ƒ€‚ğ‘‚­
}

int main(void)
{
	struct Pokemon poke[POKE_NUM];
	int i, c;

	poke[0].name = "Pikachu";
	poke[0].hp = 50;
	poke[0].atk = 12;
	poke[0].def = 6;
	poke[0].speed = 70;

	poke[1].name = "Waninoko";
	poke[1].hp = 10;
	poke[1].atk = 90;
	poke[1].def = 2;
	poke[1].speed = 2;

	poke[2].name = "Pochama";
	poke[2].hp = 30;
	poke[2].atk = 6;
	poke[2].def = 86;
	poke[2].speed = 21;
	
	// ‚±‚±‚ÉdispPoke()‚ğg‚¤‚Æ‚¢‚¢‚©‚à

	scanf("%d", &c);

	return 0;
}
