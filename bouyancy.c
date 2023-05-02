#include <stdio.h>
void bouyancy_menu();

void bouyancy() {
int number_formula;

printf("Compute bouyancy\n");
printf("Please select a formula\n");

bouyancy_menu();
scanf("%d", &number_formula);
switch (number_formula) {
    case 1: printf("Developing");
  }
}
void bouyancy_menu() {
printf("(1) F=ρvg\n");
}
