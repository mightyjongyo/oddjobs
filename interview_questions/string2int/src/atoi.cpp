#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <string.h>

int my_atoi(const char *str)
{
  bool is_neg = false;
  int res = 0;

  if (str == NULL) return 0;

  if (strlen(str) > 0 && str[0] == '-') {
    is_neg = true;
    ++str;
  }

  // We don't need to check for null since it's implied in the while loop
  while (str != '\0')
  {
    char c = *str;

    // If we encounter a bad value, return what we have.
    if (c < '0' || c > '9') {
      break;
    }

    res = res*10 + c-'0';

    ++str;
  }

  if (is_neg)
  {
    res *= -1;
  }

  return res;
}

int main(int c, char ** argv)
{
  std::vector<std::string> inputs;
  inputs.push_back("");
  inputs.push_back("12abc34");
  inputs.push_back("123");
  inputs.push_back("0123");
  inputs.push_back("12340");
  inputs.push_back("-123");

  for (auto it = inputs.begin(); it != inputs.end(); ++it)
  {
    std::cout << "Converting: " << *it << std::endl;
    int res = my_atoi(it->c_str());
    std::cout << "Converted value: " << res << std::endl;
  }
}
