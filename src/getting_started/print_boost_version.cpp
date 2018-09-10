#include <getting_started/print_boost_version.hpp>

#include <boost/version.hpp>
#include <iostream>

namespace getting_started {
  void print_boost_version() {
    std::cout << "Boost is of version " << BOOST_LIB_VERSION << std::endl;
  }
}
