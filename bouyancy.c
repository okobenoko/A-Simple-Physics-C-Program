#include <stdio.h>
#define g 9.8
void bouyancy();
void bouyancy_menu();
void formula1(double * ptr_F);
void bouyancy() {
int number_formula;
double F_Bouyancy;

printf("Compute bouyancy\n");
printf("Please select a formula\n");

bouyancy_menu();

scanf("%d", &number_formula);
switch (number_formula) {
    case 1: formula1(&F_Bouyancy); printf("%f N", F_Bouyancy);
  }
}

void bouyancy_menu() {
printf("(1) F=ρVg\n");
}

void formula1(double * ptr_F) {
double F, ρ, V;  
printf("Bouyancy compute: F=ρVg(g=9.8N/kg)\n");
printf("please input the ρ:");
scanf("%lf", &ρ);
printf("please input the V:");
scanf("%lf", &V);
F = ρ * V * g;
*ptr_F = F;
}
