//  unsigned int maski = 1u << i;
//  unsigned int maskj = 1u << j;
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount) {

  if ((value == nullptr) || (i > 31) || (j > 31)) {
    return nullptr;
  }

  if (i != j) {
    *value ^= (1u << i);
    *value ^= (1u << j);
  }

  unsigned num = *value;
  while (num > 0) {
    num &= (num - 1);
    popcount += 1;
  }

  return value;
}
