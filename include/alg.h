// Copyright 2021 NNTU-CS
#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_

int gcd(int a, int b) {
 if (b == 0)
  return a;
 else
  return gcd (b, a % b);
}

#endif  // INCLUDE_ALG_H_
