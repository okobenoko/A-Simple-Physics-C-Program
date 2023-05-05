#include <stdio.h>
#define VOLUME 1
#define PRESSURE 2
#define BOUYANCY 3
void main_menu();

int main() {
int mode; 

printf("This is a simple physics program\n");
printf("Please select a physical quantity to compute\n");
printf("Notice:This program uses international units for calculations\n")

main_menu();

while (scanf("%d", &mode) != 1) {
  printf("Please input a integer to select\n");
  break;
}

switch (mode) {
    case VOLUME: volume();
    case PRESSURE: pressure();
    case BOUYANCY: bouyancy();
  }
}

void main_menu() {
printf("(1) volume\n");
printf("(2) pressure (Include liquid pressure)\n")
printf("(3) bouyancy\n");
}
