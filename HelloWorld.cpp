#include <iostream>
using namespace std;

template<typename number_t, typename index_t> number_t get_fibbonachi_number(index_t required_number) {
    number_t first_last_number = 1, second_last_number = 1;
    for (index_t current_number_index = 2; current_number_index < required_number; current_number_index++) {
        number_t current_number = first_last_number + second_last_number;
        first_last_number = second_last_number, second_last_number = current_number;
    }
    return second_last_number;
}

int main()
{
<<<<<<< HEAD
    cout << "Hello world!" << std::endl;
=======
    std::cout << "Hello world!" << std::endl;

    const unsigned short fibbonachi_numbers_amount = 10;
    std::cout << "Here goes first " << fibbonachi_numbers_amount << " fibbonachi numbers: ";
    for (unsigned short n = 1; n <= 10; n++) std::cout << get_fibbonachi_number<unsigned long long, unsigned short>(n) << ' ';
    std::cout << std::endl;

>>>>>>> 3d59b00ba9561b28db1a0a8cc5e6fa2564e12a0b
    return 0;
}