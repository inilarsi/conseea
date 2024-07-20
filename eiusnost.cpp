#include <iostream>

int main() {
    int TFee = 4000;
    int discount = 500;
    int finalFee = TFee - discount;

    std::cout << "The final fee after discount is: " << finalFee << std::endl;
    return 0;
}
