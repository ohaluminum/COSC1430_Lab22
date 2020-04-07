#pragma once

#include "Coupon.h"

#ifndef DISCOUNTCOUPON_H
#define DISCOUNTCOUPON_H

class DiscountCoupon : public Coupon{
public:
      DiscountCoupon(float off = 0) : Coupon(off)
      {
          if (off > 1 || off < 0)
              setCoupon(0.);
      }
      
      //FIX ME: please provide the overriding applyCoupon() function
      
      //FIX ME: please define the destructor for DiscountCoupon class
      
};

#endif //DISCOUNTCOUPON_H