#include <assert.h>
#include "calculator.h"


void Test_Round_float_2(void) {
    assert(Float_egality_testor(Round_float_2(3.1444), 3.14));
}


void Test_HT_price_calculator(void) {
    assert(Float_egality_testor(HT_price_calculator(3.63, 5), 18.15));
}



// int main(void) {
//     Test_Round_float_2();
//     Test_HT_price_calculator();
//     Test_Reduction_tester();

//     printf("✅ All tests ran successfully\n");
//     return 0;
// }
int main(void) {
    Price_calculator(5, 345, 10);

    printf("✅ All ran successfully\n");
    return 0;
}
