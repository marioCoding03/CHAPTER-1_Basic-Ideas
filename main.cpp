//Beginning C++20 From Novice to Professional(Sixth Edition) EXERCISES
//CHAPTER 1 - BASIC IDEAS

//--------------------------------------------------------------------------------------------------------------------------------------------

/*
//Exercise 1-1: Create, compile, link, and execute a program that will display the text "Hello World" on your screen.
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}

*/

//--------------------------------------------------------------------------------------------------------------------------------------------

/*
//Exercise 1-2: Create and execute a program that outputs your name on one line and your age on the next line.
#include <iostream>

int main() {
    std::cout << "Name: Marios" << std::endl;
    std::cout << "Age: 19" << std::endl;
    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------------------------------------------

//Exercise 1-3:: The following program produces several compiler errors. Find these errors and correct them so the program can compile cleanly and run.

//CODE WITH ERRORS
//#import <iostream>
//Int main
//        {
//                std:cout << "Hola Mundo!" << std:endl
//        )

//CLEANED UP CODE
//#include <iostream>
//
//int main(){
//    std::cout << "Hola Mundo!" << std::endl;
//}