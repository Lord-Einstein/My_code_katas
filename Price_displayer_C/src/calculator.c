#include "./calculator.h"

float Round_float_2(float to_round) {
    float rounded = 0;
    rounded = roundf(to_round * 100) / 100;

    return rounded;
}

int Float_egality_testor(float f1, float f2) {
    if(fabs(f1 - f2) < 0.0001f) //précise que c'est un float
    return 1;

    return 0;
}

float HT_price_calculator(float price, unsigned int quantity) {
    float HT_price = 0;
    HT_price = price * quantity;

    return HT_price;
}

float Apply_discount_rate(float HT_price) {
    float discount_price = HT_price;

    if(HT_price >= REMISE_1){

        if(HT_price >= REMISE_2){
            discount_price = HT_price - ((HT_price * TAUX_REMISE_2)/100);
            return discount_price;
        }

        discount_price = HT_price - ((HT_price * TAUX_REMISE_1)/100);
        return discount_price;
    }
    return discount_price;
}


float TTC_price_calculator(float HT_price, int tax) {
    float TTC_price = 0;
    TTC_price = Apply_discount_rate(HT_price);
    TTC_price = TTC_price + ((TTC_price * tax) / 100);

    TTC_price = Round_float_2(TTC_price);
    return TTC_price;
}

void Print_at_string(float final_price) {
    char price_in_string[50];
    snprintf(price_in_string, sizeof(price_in_string), "%.2f  EUROS.", final_price);

    printf("Coût TTC : ");
    printf("%s\n", price_in_string);
}

void Price_calculator(int quantity, float price, int tax) {
    Print_at_string(TTC_price_calculator(HT_price_calculator(price, quantity), tax));
}