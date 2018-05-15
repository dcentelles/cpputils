#include <cpputils/SignalManager.h>

namespace cpputils {
void SignalManager::AddHandler(int signal, std::function<void()> handler) {
  switch (signal) {
  case SIGINT: {
    _sigint_handlers.push_back(handler);
    break;
  }
  }
}

void SignalManager::_topHandler(int signal) {
  switch (signal) {
  case SIGINT: {
    for (auto handler : _sigint_handlers) {
      handler();
    }
    break;
  }
  }
}
}
