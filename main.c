
#include <stdio.h>
int current_day = 1;
int current_nour = 8;
static inventory[10] //4 мотыга 5 лейка 6 топор 7 корзина 8 сено 9 лопата
int work
int main() 
{ 
	int i = 1;
	int user_action;
	while (i == 1)
	{
		printf("0 - выход, 1 - посмотреть на часы, 2 - поработать 3 - посмотреть инвентарь, 4 = положить предмет в слот, 5 - выбросить предмет, 6 - уникальные находки");
		scanf(" %d", &user_action);
		switch (user_action)
		{
		case 0:
			printf("Пока!");
		case 1:
			printf("Сейчас: %d день, %d часов", current_day, current_hour);
		case 2:
			printf("щас поработаем...");
			printf("сколько изволите работать?");
			scanf(" %d", &work);
		case 3:
			printf("3");
		case 4:
			printf("4");
		case 5:
			printf("5");
		case 6:
			printf("6")
		}
	}
}
