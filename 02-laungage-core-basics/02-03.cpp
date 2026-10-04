#include <iostream>
#include <print>

enum ascii_type
{
  UPPER = 0,
  LOWER,
  DIGIT,
  PUNCT,
  OTHER,
};

ascii_type classify(char c)
{
  switch (c)
  {
  case 'A' ... 'Z':
    return UPPER;
  case 'a' ... 'z':
    return LOWER;
  case '0' ... '9':
    return DIGIT;
  case '!' ... '/':
  case ':' ... '@':
  case '[' ... '`':
  case '{' ... '~':
    return PUNCT;
  default:
    return OTHER;
  }
}

int main()
{
  char c;
  while (std::cin >> c)
  {
    switch (classify(c))
    {
    case UPPER:
      std::print("UPPER\n");
      break;
    case LOWER:
      std::print("LOWER\n");
      break;
    case DIGIT:
      std::print("DIGIT\n");
      break;
    case PUNCT:
      std::print("PUNCT\n");
      break;
    case OTHER:
      std::print("OTHER\n");
      break;
    }
  }
  return 0;
}
