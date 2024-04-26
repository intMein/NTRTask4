#include <iostream>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = array;

    std::cout << *(ptr + 3) << std::endl;
}
