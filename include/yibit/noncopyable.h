
//  Copyright Beman Dawes 1994-99.  Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)


#ifndef YIBIT_NONCOPYABLE_H_INCLUDED_
#define YIBIT_NONCOPYABLE_H_INCLUDED_


namespace yibit {

namespace noncopyable_ { // protection from unintended

class noncopyable {
 protected:
  noncopyable() {}
  ~noncopyable() {}

 private:
  noncopyable(const noncopyable&);
  const noncopyable& operator=(const noncopyable&);
};

} // namespace noncopyable

typedef noncopyable_::noncopyable noncopyable;

} // namespace yibit


#endif  // YIBIT_NONCOPYABLE_H_INCLUDED_

