#ifndef SHOPPING_H_
#define SHOPPING_H_

#include "./goods.h"

#include <vector>

class Shopping{
 public:
  void PushList(Goods object);
  Goods GetLastElement();
  void PrintList();
  void SortByPrice();
  void SortByIndex();

 private:
  std::vector<Goods> shopping_list_;
};

#endif  // SHOPPING_H_
