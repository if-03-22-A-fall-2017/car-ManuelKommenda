#include<stdio.h>
#include <stdlib.h>
#include"car.h"

struct CarType{
  enum type type;
  enum color color;
  double fill_level;
  double acceleration_rate;
  double speed;
  bool isRented;
};

static struct CarType A1 = {AIXAM, RED, 16, 0, 0, false};
static struct CarType F1 = {FIAT_MULTIPLA, GREEN, 65, 0, 0, false};
static struct CarType F2 = {FIAT_MULTIPLA, BLUE, 65, 0, 0, false};
static struct CarType F3 = {FIAT_MULTIPLA, ORANGE, 65, 0 ,0, false};
static struct CarType J1 = {JEEP, SILVER, 80, 0, 0, false};
static struct CarType J2 = {JEEP, BLACK, 80, 0, 0, false};

void print();
void race();
void set_rate(Car car);

int main(int argc, char const *argv[]) {
  printf("Car A1\nCar F1\nCar F2\nCar F3\nCar J1\nCar J2\n");
  race();
  return 0;
}

void print(){

}

void race(){
  Car car;
  int count = 0;
  do {
    car = get_car(A1.type);
    set_rate(car);
    accelerate(car);
    for (int i = 0; i < get_speed(car) % 10; i++) {
      /* code */
    }
    car = get_car(F1.type);
    set_rate(car);
    accelerate(car);
    car = get_car(F2.type);
    set_rate(car);
    accelerate(car);
    car = get_car(F3.type);
    set_rate(car);
    accelerate(car);
    car = get_car(J1.type);
    set_rate(car);
    accelerate(car);
    car = get_car(J2.type);
    set_rate(car);
    accelerate(car);

    count++;
  } while(count < 3);


}
void set_rate(Car car){
  for (int i = 0; i < 6; i++) {
      double r = rand();
      set_acceleration_rate(car, r);
  }
}
