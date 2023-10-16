#include "my_lib.h"
#include <cstdint>
#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <cxxopts.hpp>
#include <spdlog/spdlog.h>

/**
 * @brief print hello world for test and versions.
 */
void print_hello_world() {
  std::cout << "Hello world!" << std::endl;

  std::cout << "FMT: " << FMT_VERSION << '\n';
}

uint32_t factorial( uint32_t number ) {
    return number <= 1 ? number : factorial(number-1) * number;
}