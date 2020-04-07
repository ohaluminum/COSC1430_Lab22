#pragma once

#include <iostream>
#include <string>
using namespace std;

#ifndef COUPON_H
#define COUPON_H


class Coupon{
public:

    //A constructor with one parameter(with default value) that initializes the private member variable.
    Coupon(float off = 0)
        : amount(off)
    {

    }

    //A destructor that prints out the message Coupon is used!
    ~Coupon()
    {
        cout << "Coupon is used!" << endl;
    }

    //Accessor and mutator functions for the private member variable.
    void setCoupon(float off) 
    {
        amount = off;
    }

    float getCoupon() 
    { 
        return amount; 
    }
      
    /*
     *Function applyCoupon(float) takes one float value as the input that corresponds to the original price of the product.
     *The function then computes and returns the new price after applying the coupon amount.
     *Right now, this function only outputs the message: 
     *Do not know how to apply coupon!, and returns the original price.
     */
    float applyCoupon(float orgPrice) 
    {
        orgPrice -= amount;
        return orgPrice;
    }
            
private:
    float amount;
};

#endif // COUPON_H

