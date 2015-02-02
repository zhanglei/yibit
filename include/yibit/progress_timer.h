
//  Copyright Beman Dawes 1994-99.  Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)


#ifndef YIBIT_PROGRESS_TIMER_H_INCLUDED_
#define YIBIT_PROGRESS_TIMER_H_INCLUDED_


#include <yibit/timer.h>
#include <yibit/noncopyable.h>
#include <iostream>
#include <string>


namespace yibit {

class Progress_Timer : public Timer, private noncopyable {
 public:
  explicit Progress_Timer(std::ostream& os = std::cout)
    : os_(os) {}

  ~Progress_Timer() {
    std::istream::fmtflags old_flags = os_.setf(std::istream::fixed, std::istream::floatfield);
    std::streamsize old_prec = os_.precision(2);
    os_ << elapsed() * 1000.0 << " ms\n" << std::endl;
    os_.flags(old_flags);
    os_.precision(old_prec);
  }

 private:
  std::ostream& os_;
};

} // namespace yibit


#endif  // YIBIT_PROGRESS_TIMER_H_INCLUDED_

