#include <stdio.h>
#define BOUYANCY 1
void bouyancy();
void main_menu();

int main() {
int mode; 

printf("This is a simple physics program\n");
printf("Please select a physical quantity to compute\n");
printf("Notice:This program uses international units for calculations\n");

main_menu();

while (scanf("%d", &mode) != 1) {
  printf("Please input a integer to select\n");
  break;
}

switch (mode) {
    case BOUYANCY: bouyancy(); 
  }
}

void main_menu() {
printf("(1) bouyancy\n");
}
