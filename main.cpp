#include <iostream>

int doubleNumber(int numbers[], int dif[]) {
    for (int i = 1; i < 15; ++i) {
        int difference = numbers[0] - numbers[i];
        if (difference == 0) {
            return numbers[0];
        }
        if (dif[abs(difference) - 1] == 0) {
            dif[abs(difference) - 1] = difference;
        } else if (dif[abs(difference) - 1] == difference || dif[abs(difference) - 1] == 16){
            return numbers[i];
        } else {
            dif[abs(difference) - 1] = 16;
        }
    }
}

int main() {
    int numbers[15] = {114,111, 106, 107, 108, 105, 115,  108, 110, 109, 112, 113, 116, 117, 118};
    int dif[14] = {0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0 ,0, 0};
    int dNumber = doubleNumber(numbers, dif);
    std::cout << dNumber;
    std::cout << std::endl;
}
