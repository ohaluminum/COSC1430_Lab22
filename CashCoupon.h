#pragma once

#include "Coupon.h"

#ifndef CASHCOUPON_H
#define CASHCOUPON_H

class CashCoupon : public Coupon{
public:
     CashCoupon(float off = 0) : Coupon(off)
     {
         if (off < 0) 
            setCoupon(0.);
     }
      
      //FIX ME: please provide the overriding applyCoupon() function
      
      //FIX ME: please define the destructor for CashCoupon class
};


#endif //CASHCOUPON_H