#ifndef CPPUTILS_TIMER_H
#define CPPUTILS_TIMER_H
#include <chrono>
#include <csignal>
#include <functional>
#include <iostream>
#include <list>

namespace cpputils {

class Timer {
public:
  Timer();
  void Reset();
  unsigned int Elapsed() const;

private:
  typedef std::chrono::high_resolution_clock clock_;
  typedef std::chrono::duration<unsigned int, std::milli> milis_;
  std::chrono::time_point<clock_> beg_;
};

} // namespace cpputils
#endif
