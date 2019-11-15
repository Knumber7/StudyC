#include <stdio.h>
#include <stdlib.h>

#define POKE_NUM 3

struct Pokemon
{
	char* name;	// ñºëO
	int hp;		// ëÃóÕ
	int atk;	// çUåÇóÕ
	int def;	// ñhå‰óÕ
	int speed;	// ëfëÅÇ≥
};

void dispPoke(struct Pokemon p)
{
	printf("#--- %s ---#\n", p.name);
	printf("Attack  : %d\n", p.atk);
	printf("Defence : %d\n", p.def);
	printf("Speed   : %d\n", p.speed);
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

	for (i = 0; i < POKE_NUM; i++) {
		dispPoke(poke[i]);
		printf("\n");
	}

	scanf("%d", &c);

	return 0;
}
