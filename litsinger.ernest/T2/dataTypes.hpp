#ifndef LIST2_0_DATATYPES_HPP
#define LIST2_0_DATATYPES_HPP
#include <utility>
#include <string>

namespace litsinger
{
  struct BinULongLongIO
  {
    unsigned long long& ref;
  };
  struct HexULongLongIO
  {
    unsigned long long& ref;
  };
  struct StringIO
  {
    std::string& ref;
  };
  std::istream& operator>>(std::istream &in, StringIO&&);
  std::istream& operator>>(std::istream &in, BinULongLongIO&&);
  std::istream& operator>>(std::istream &in, HexULongLongIO&&);
}

#endif
