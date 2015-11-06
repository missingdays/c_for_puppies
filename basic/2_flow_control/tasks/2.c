#include <stdio.h>

int main(){
	int food;
	int water;
	int energy;
	int oxygen;

	int min_food = 100;
	int min_water = 50;
	int min_energy = 200;
	int min_oxygen = 200;

	scanf("%d", &food);
	scanf("%d", &water);
	scanf("%d", &energy);
	scanf("%d", &oxygen);

	int enough_food = food > min_food;
	int enough_water = water >= min_food;
	int enough_energy = energy >= min_food;
	int enough_oxygen = oxygen >= min_food;

	int ok = enough_food && enough_water && enough_energy && enough_oxygen;

	if(ok){
		puts("Готов");
	} else {
		puts("Не готов");

		if(!enough_food){
			printf("Еды хватит на %d часов при минимуме в %d\n", food, min_food);
		}
		if(!enough_water){
			printf("Воды хватит на %d часов при минимуме в %d\n", water, min_water);
		}
		if(!enough_energy){
			printf("Энергии хватит на %d часов при минимуме в %d\n", energy, min_energy);
		}
		if(!enough_oxygen){
			printf("Кислорода хватит на %d часов при минимуме в %d\n", oxygen, min_oxygen);
		}
	}
}