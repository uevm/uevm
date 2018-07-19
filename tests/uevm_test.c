#include <stdio.h>
#include "core/test.h"
#include "uevm/api.h"

int main() {
  ASSERT(uevm_add(0, 0) == 0);
  ASSERT(uevm_add(0, 1) == 1);
  ASSERT(uevm_add(1, 0) == 1);
  ASSERT(uevm_add(1, 1) == 2);
  printf("Tests completed succesfully\n");
  return 0;
}
