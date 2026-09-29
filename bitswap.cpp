//  unsigned int maski = 1u << i;
//  unsigned int maskj = 1u << j;
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount) {
  popcount = popcount;
  unsigned int maski = 1u << i;
  unsigned int maskj = 1u << j;
  
  if ((value == nullptr) || (i > 31) || (j > 31)) {
    return nullptr;
  }

  popcount = 0;
  int num = *value;
  while (num > 0) {
    num &= (num -1)
    popcount++;
  }
    
  if (i == j) {
    return value;
  } else {
    *value = *value ^ (maski << i);
    *value = *value ^ (maskj << j);
  }

  return value;
}
