#ifndef HASH_H_
#define HASH_H_

#include "common/define.h"

namespace utils {

uint32_t Hash32(void *ptr, size_t length);

uint64_t Hash64(void *ptr, size_t length);

}

#endif // HASH_H_
