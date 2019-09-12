#include <cpputils/Timer.h>

namespace cpputils {

  Timer::Timer() : beg_(clock_::now()) {}
  void Timer::Reset() { beg_ = clock_::now(); }
  unsigned int Timer::Elapsed() const {
    return std::chrono::duration_cast<milis_>(clock_::now() - beg_).count();
  }
} // namespace cpputils
