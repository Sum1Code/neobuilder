#pragma once
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector>

class Cmd{
public:
    Cmd(const char* program): internalcmd(program){}

    void arg(const char* arg){
        internalcmd.append(" ");
        internalcmd.append(arg);
    }


    void args(std::vector<const char*> args){
        for (const char* elem : args){
            internalcmd.append(" ");
            internalcmd.append(elem);
        }
    }

    void exec(){
        std::cout << internalcmd << "\n";
        std::system(internalcmd.c_str());
    }

private:
    std::string internalcmd;

};
