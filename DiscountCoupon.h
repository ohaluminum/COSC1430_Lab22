#pragma once

#include "Coupon.h"

#ifndef DISCOUNTCOUPON_H
#define DISCOUNTCOUPON_H

class DiscountCoupon : public Coupon {
public:

    /*
     *A constructor with one parameter (with default value).
     *This parameter will be used to initialize the private member inherited from the Coupon class
     */
    DiscountCoupon(float off = 0) 
        : Coupon(off)
    {
        if (off > 1 || off < 0)
        setCoupon(0.0);
    }

    //A destructor that prints out the message Discount coupon is used!
    ~DiscountCoupon()
    {
        cout << "Discount coupon is used!" << endl;
    }

    /*
     *The overriding function float applyCoupon(float orgPrice) that re-implements the strategy of applying coupon.
     *In particular, the new price after applying coupon will be (1 - amount) * orgPrice.
     */

    float applyCoupon(float orgPrice)
    {
        orgPrice = orgPrice * (1 - getCoupon());
        return orgPrice;
    }
      
};

#endif //DISCOUNTCOUPON_H



