//  unsigned int maski = 1u << i;
//  unsigned int maskj = 1u << j;
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount) {
  if ((value == nullptr) || (i > 31) || (j > 31)) {
    return nullptr;
  }

  popcount = 1;
  int num = *value;
  while (num > 0) {
    num &= (num -1);
    popcount++;
  }
    
  if (i == j) {
    return value;
  } else {
    *value = *value ^ (1u << i);
    *value = *value ^ (1u << j);
  }

  return value;
}
