#include<iostream>
#include "AN.hpp"

class ANF : public AN{
  private:
    int ack;
  public:
    ANF();
    void muestraDatos();
    void captura();
    void setF_osc(int, int);
};