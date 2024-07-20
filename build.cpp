#include "cpm.hpp"

int main(){
    Cmd a = Cmd("gcc");
    a.arg("hello");
    a.args({"gcc", "gcc", "-a"});
    a.exec();
}
