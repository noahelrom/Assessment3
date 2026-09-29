//  unsigned int maski = 1u << i;
//  unsigned int maskj = 1u << j;
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount) {
  unsigned int maski = 1u << i;
  unsigned int maskj = 1u << j;
  
  if ((value == nullptr) || (i > 31) || (j > 31)) {
    return nullptr;
  }

    
  if (i == j) {
    return value;
  } else {
    *value = *value ^ (maski << i);
    *value = *value ^ (maskj << j);
  }

  return value;
}
