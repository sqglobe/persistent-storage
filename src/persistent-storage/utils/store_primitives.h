#ifndef STORE_PRIMITIVES_H
#define STORE_PRIMITIVES_H

#include <string>

namespace prstorage {
const void* restore_str(std::string& str, const void* src);
void* save_str(const std::string& str, void* dest);
}  // namespace prstorage

#endif  // STORE_PRIMITIVES_H
