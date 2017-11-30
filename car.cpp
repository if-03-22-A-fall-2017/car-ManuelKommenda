#include <stdio.h>
#include <stdbool.h>
#include "car.h"

#define MAX_ACCERATION_RATE_AIXAM 1.0
#define MAX_ACCERATION_RATE_FIAT 2.26
#define MAX_ACCERATION_RATE_JEEP 3.14
#define MIN_ACCERATION_RATE -8

#define MAX_SPEED_AIXAM

int round(double speed);

struct CarType{
  enum type type;
  enum color color;
  double fill_level;
  double acceleration_rate;
  double speed;
  bool isRented;
};

static struct CarType a = {AIXAM, RED, 16, 0, 0, false};
static struct CarType b1 = {FIAT_MULTIPLA, GREEN, 65, 0, 0, false};
static struct CarType b2 = {FIAT_MULTIPLA, BLUE, 65, 0, 0, false};
static struct CarType b3 = {FIAT_MULTIPLA, ORANGE, 65, 0 ,0, false};
static struct CarType c1 = {JEEP, SILVER, 80, 0, 0, false};
static struct CarType c2 = {JEEP, BLACK, 80, 0, 0, false};

void init(){

  a.fill_level = 16;
  a.acceleration_rate = 0;
  a.speed = 0;
  a.isRented = false;

  b1.fill_level = 65;
  b1.acceleration_rate = 0;
  b1.speed = 0;
  b1.isRented = false;

  b2.fill_level = 65;
  b2.acceleration_rate = 0;
  b2.speed = 0;
  b2.isRented = false;

  b3.fill_level = 65;
  b3.acceleration_rate = 0;
  b3.speed = 0;
  b3.isRented = false;

  c1.fill_level = 80;
  c1.acceleration_rate = 0;
  c1.speed = 0;
  c1.isRented = false;

  c2.fill_level = 80;
  c2.acceleration_rate = 0;
  c2.speed = 0;
  c2.isRented = false;
}
Car get_car(enum type type){
  Car car;

  if (type == AIXAM) {
    if (a.isRented == false) {
      a.isRented = true;
      car = &a;

    }
    else{
      car = 0;
    }
  }
  else if(type == FIAT_MULTIPLA){
    if (b1.isRented == false) {
      b1.isRented = true;
      car = &b1;
    }
    else if(b2.isRented == false){
      b2.isRented = true;
      car = &b2;
    }
    else if (b3.isRented == false) {
      b3.isRented = true;
      car = &b3;
    }
    else{
      car = 0;
    }
  }
  else{
    if (c1.isRented == false) {
      c1.isRented = true;
      car = &c1;
    }
    else if (c2.isRented == false) {
      c2.isRented = true;
      car = &c2;
    }
    else{
      car = 0;
    }
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
void set_acceleration_rate(Car car, double acceleration_rate){
  if (acceleration_rate < MIN_ACCERATION_RATE) {
    car->acceleration_rate = MIN_ACCERATION_RATE;
  }else if (car->type == AIXAM) {
    if (acceleration_rate > MAX_ACCERATION_RATE_AIXAM) {
      car->acceleration_rate = MAX_ACCERATION_RATE_AIXAM;
    }
    else{
      car->acceleration_rate = acceleration_rate;
    }
  }
  else if (car->type == FIAT_MULTIPLA) {
    if (acceleration_rate > MAX_ACCERATION_RATE_FIAT) {
      car->acceleration_rate = MAX_ACCERATION_RATE_FIAT;
    }
    else{
      car->acceleration_rate = acceleration_rate;
    }
  }
  else{
    if (acceleration_rate > MAX_ACCERATION_RATE_JEEP) {
      car->acceleration_rate = MAX_ACCERATION_RATE_JEEP;
    }
    else{
      car->acceleration_rate = acceleration_rate;
    }
  }

}
int get_speed(Car car){
  return round(car->speed);
}
void accelerate(Car car){
  if (car->type == AIXAM) {
    if (car->speed + 3.6 + car->acceleration_rate <= ) {
      /* code */
    }
  }
}
int round(double speed){
  int rounded = (speed + 0.5);
}
