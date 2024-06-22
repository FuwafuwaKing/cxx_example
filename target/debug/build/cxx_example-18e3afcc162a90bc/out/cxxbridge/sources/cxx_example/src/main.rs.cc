#include "cxx_example/src/hello.h"
#include <string>

extern "C" {
::std::string const *cxxbridge1$hello(::std::string const &name) noexcept {
  ::std::string const &(*hello$)(::std::string const &) = ::hello;
  return &hello$(name);
}
} // extern "C"
