#include "my_lib.h" 
#include "config.hpp"

int main() {

  std::cout << "project name: " << project_name << std::endl;
  std::cout << "project version: " << project_version << std::endl;

  print_hello_world();
  return 0;
}
