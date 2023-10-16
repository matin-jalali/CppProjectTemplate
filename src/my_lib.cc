#include "my_lib.h" 
#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <cxxopts.hpp>
#include <spdlog/spdlog.h>

void print_hello_world() {
  std::cout << "Hello world!" << std::endl;

  std::cout << "NLOHMANN: "
            << NLOHMANN_JSON_VERSION_MAJOR << '.'
            << NLOHMANN_JSON_VERSION_MINOR << '.'
            << NLOHMANN_JSON_VERSION_PATCH << '\n';

    std::cout << "FMT: " << FMT_VERSION << '\n';

    std::cout << "CXXOPTS: "
              << CXXOPTS__VERSION_MAJOR << '.'
              << CXXOPTS__VERSION_MINOR << '.'
              << CXXOPTS__VERSION_PATCH << '\n';

    std::cout << "SPDLOG: "
              << SPDLOG_VER_MAJOR << '.'
              << SPDLOG_VER_MINOR << '.'
              << SPDLOG_VER_PATCH << '\n';

}
