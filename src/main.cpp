#include <iostream>

//char = 1 byte
//short = 2 bytes
//int = 4 bytes
//long = 4 bytes (depending on compiler)
//long long = 8 bytes
//all data types can be made unsigned as seen below to remove the signed bit and use larger numbers.

int main(){
    int variable = 8; //Defining the integer variable named "variable" (-2b -> 2b supported by 4bytes of data for signed int)
    unsigned int variable2 = 16; //Unsinged ints in C++ are 32bit
    char a = 'A'; //Chars are specifically used for characters
    char b = 65; //Notice that this is the number equivalent and will still print 'A'.

    std::cout << variable << std::endl;
    variable = 20; //Re-assigned int variable to 20 from 8
    std::cout << variable << std::endl; //Reading to the console again to show the change.
    std::cout << variable2 << std::endl;
    std::cout << b << std::endl;
    std::cin.get(); //Waits for the return key to be pressed before exit
}
