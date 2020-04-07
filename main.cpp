#include "DiscountCoupon.h"
#include "CashCoupon.h"

int main()
{
    float orgPrice;
    cout << "Enter price: ";
    cin >> orgPrice;
    
    Coupon *c_ptr = new DiscountCoupon (0.5);
    
    float afterPrice = c_ptr->applyCoupon(orgPrice);
    cout << "The price after apply discount coupon is: " << afterPrice << endl;
    
    delete c_ptr;
    
    c_ptr = new CashCoupon(20);
    afterPrice = c_ptr->applyCoupon(orgPrice);
    cout << "The price after apply cash coupon is: " << afterPrice << endl;
    
    delete c_ptr;
    
    return 0;
}