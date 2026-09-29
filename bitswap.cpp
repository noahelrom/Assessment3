//  unsigned int maski = 1u << i;
//  unsigned int maskj = 1u << j;
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount) {
  unsigned int maski = 1u << i;
  unsigned int maskj = 1u << j;
  
  unsigned num = *value;
    popcount = 0;
    while (num > 0) {
      num &= (num - 1);
      popcount = popcount + 1;
    }
  
  if ((value == nullptr) || (i > 31) || (j > 31)) {
    return nullptr;
  }

  if (i != j) {
    *value ^= (maski << i);
    *value ^= (maskj << j);
  }

  return value;
}
