//  unsigned int maski = 1u << i;
//  unsigned int maskj = 1u << j;
unsigned int* swapBits(unsigned int* value, unsigned int i, unsigned int j, int& popcount) {
  if ((value == nullptr) || (i > 31) || (j > 31)) {
    return nullptr;
  }
  int count = 0;
  int num = *value;
  while (num > 0) {
    num &= (num -1);
    count++;
  }
  if ((i = 31) || (j = 31)) {
    count++;
  }
  popcount = count;

  bool biti = (*value & (1u << i)) != 0;
  bool bitj = (*value & (1u << j)) != 0;
  if (i == j || ((biti && bitj) || (!biti && !bitj))) {
    return value;
  } else {
    *value = *value ^ (1u << i);
    *value = *value ^ (1u << j);
  }

  count = 0;
  num = *value;
  while (num > 0) {
    num &= (num -1);
    count++;
  }
  popcount = count;

  return value;
}
