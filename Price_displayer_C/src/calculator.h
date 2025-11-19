#ifndef CODA_H
#define CODA_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define REMISE_1 1000
#define REMISE_2 5000

#define TAUX_REMISE_1 3
#define TAUX_REMISE_2 5

float Round_float_2(float to_round);
int Float_egality_testor(float f1, float f2);

float HT_price_calculator(float price, unsigned int quantity);
float Apply_discount_rate(float HT_price);

float TTC_price_calculator(float HT_price, int tax);
void Print_at_string(float final_price);
void Price_calculator(int quantity, float price, int tax);

#endif