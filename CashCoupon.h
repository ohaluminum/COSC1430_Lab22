#pragma once

#include "Coupon.h"

#ifndef CASHCOUPON_H
#define CASHCOUPON_H

class CashCoupon : public Coupon {
public:

    /*
     *A constructor with one parameter (with default value).
     *This parameter will be used to initialize the private member inherited from the Coupon class
     */
    CashCoupon(float off = 0) 
        : Coupon(off)
    {
        if (off < 0) 
        setCoupon(0.0);
    }

    //A destructor that prints out the message Cash coupon is used!
    ~CashCoupon()
    {
        cout << "Cash coupon is used!" << endl;
    }

    /*
     *The overriding function float applyCoupon(float orgPrice) that re-implements the strategy of applying coupon.
     *In particular, the new price after applying coupon will be orgPrice - amount.
     *If the new price is negative, return 0.
     */

    float applayCoupon(float orgPrice)
    {
        orgPrice = Coupon::applyCoupon(orgPrice);

        if (orgPrice < 0)
        {
            return 0;
        }
        else
        {
            return orgPrice;
        }
    }
};


#endif //CASHCOUPON_H


