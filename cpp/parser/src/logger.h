#pragma once

#include <string>
#include <vector>

class Logger {
public:
  Logger(){ logs_.reserve(10); }

  void log(const std::string& message) const;
private:
  Logger(const Logger& other);

  mutable std::vector<std::string> logs_;
};
