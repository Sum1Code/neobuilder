#include "cpm.hpp"

int main(){
    Cmd build("gcc");
    build.arg("hello.c");
    build.args({"-Wall", "-Wextra", "-o", "hello"});
    build.echo();
    build.exec();
}
