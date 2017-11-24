#include <stdio.h>
#include <stdbool.h>
#include "car.h"

struct CarType{
  enum type type;
  enum color color;
  double fill_level;
  double acceleration_rate;
  int speed;
};

static struct CarType a = {AIXAM, RED, 16, 0, 0};
static struct CarType b1 = {FIAT_MULTIPLA, GREEN, 65, 0, 0};
//static struct CarType b2 = {FIAT_MULTIPLA, BLUE, 65, 0, 0};
//tatic struct CarType b3 = {FIAT_MULTIPLA, ORANGE, 65, 0 ,0};
static struct CarType c1 = {JEEP, SILVER, 80, 0, 0};
//static struct CarType c2 = {JEEP, BLACK, 80, 0, 0};

void init(){

}
Car get_car(enum type type){
  Car car;
  int counter = 0;
  if (type == AIXAM) {
    car = &a;
  }
  else if(type == FIAT_MULTIPLA){
    car = &b1;
  }
  else{
    car = &c1;
  }

  return car;
}
enum type get_type(Car car){
  return car->type;
}
enum color get_color(Car car){
  return car->color;
}
double get_fill_level(Car car){
  return car->fill_level;
}
double get_acceleration_rate(Car car){
  return car->acceleration_rate;
}
void set_acceleration_rate(Car car, int acceleration_rate){

}
int get_speed(Car car){
  return car->speed;
}
void accelerate(Car car){

}
