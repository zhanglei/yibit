
//  Copyright Beman Dawes 1994-99.  Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)


#ifndef YIBIT_TIMER_H_INCLUDED_
#define YIBIT_TIMER_H_INCLUDED_


#include <ctime>
#include <limits>
#include <iostream>


namespace std {
  using ::clock_t;
  using ::clock;
}


namespace yibit {

class Timer {
 public:
  Timer() { start_time_ = std::clock(); } 

  void restart() { start_time_ = std::clock(); }

  double elapsed() const {
    std::cout << std::clock() << " " << start_time_ << std::endl;
    return  double(std::clock() - start_time_) / CLOCKS_PER_SEC;
  }

  double elapsed_max() const {
    return (double((std::numeric_limits<std::clock_t>::max)())
          - double(start_time_)) / double(CLOCKS_PER_SEC); 
  }

  double elapsed_min() const {
    return double(1)/double(CLOCKS_PER_SEC);
  }

 private:
  std::clock_t start_time_;
};

} // namespace yibit

#endif  // YIBIT_TIMER_H_INCLUDED_


