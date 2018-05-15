#include <csignal>
#include <functional>
#include <iostream>
#include <list>

namespace cpputils {
class SignalManager {
public:
  //http://en.cppreference.com/w/cpp/utility/program/signal
  //http://en.cppreference.com/w/cpp/language/lambda
  static void AddHandler(int signal, std::function<void(void)> handler);

private:
  static void _topHandler(int signal);
  static std::list<std::function<void(void)>> _sigint_handlers;
};
}
