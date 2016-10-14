#include "frame.h"

namespace storage {

void Frame::FixPage() {
  fix_count_++;
}

void Frame::UnfixPage() {
  fix_count_--;
}

void Frame::SetFree(bool is_free) {
  free_ = (int8_t) is_free;
}

bool Frame::IsFree() const {
  return free_ == (int8_t) true;
}

void Frame::SetDirty(bool dirty) {
  dirty_ = (int8_t) dirty;
}

bool Frame::IsDirty() const {
  return dirty_ == (int8_t) true;
}

Page *Frame::GetPage() {
  return (Page*) (((uint8_t*) this) + sizeof(*this));
}

}  // end namespace storage