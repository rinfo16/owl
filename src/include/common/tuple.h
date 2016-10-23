#ifndef TUPLE_H_
#define TUPLE_H_

#include "common/define.h"
#include <assert.h>

#include <string.h>
#include <string>

class Tuple {
 public:
  void *GetData(uint32_t offset) {
    return reinterpret_cast<uint8_t*>(this) + offset;
  }
};

class TupleWarpper {
 public:
  // Create an empty tuple.
  TupleWarpper()
      : data_(NULL),
        size_(0) {
  }

  // Create a tuple that refers to d[0,n-1].
  TupleWarpper(const void* d, size_t n)
      : data_(d),
        size_(n) {
  }

  // Return a pointer to the beginning of the referenced data
  const void* Data() const {
    return data_;
  }

  // Return the length (in bytes) of the referenced data
  size_t Size() const {
    return size_;
  }

  // Return true iff the length of the referenced data is zero
  bool Empty() const {
    return size_ == 0;
  }

 private:
  const void *data_;
  size_t size_;
};

#endif  // TUPLE_H_
