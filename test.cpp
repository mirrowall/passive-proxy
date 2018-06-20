#include <iostream>
#include <list>
#include <string>

int main() {
    std::string test = "hello world";
    std::list<std::string> fuck;
    fuck.push_back("fuck");
    fuck.push_back("you");

    std::list<std::string>::iterator iter;
    for (iter=fuck.begin(); iter!=fuck.end(); ++iter) {
        std::cout << *iter << std::endl;
    }    
    std::cout << test;
    return 0;
}
