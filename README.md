# COSC1430_Lab22
Polymorphism

    Please finish the following program to achieve a simple coupon system. Different types of coupons will be applied differently. For example, the discount coupon will take certain percentage off the original price, while the cash coupon will directly take certain amount of the price off the original price. You will use polymorphism to achieve this.

Coupon Class

    This class consists of the following members:

    private:

      -A variable, amount of the float type to store the amount of discount that will be applied.
      
    public:

      -A constructor with one parameter (with default value) that initializes the private member variable, amount
      -A destructor that prints out the message Coupon is used!
      -Accessor and mutator functions for the private member variable, amount
      -float applyCoupon(float ) function that takes one float value as the input that corresponds to the original price of the product. The function then computes and returns the new price after applying the coupon amount. Right now, this function only outputs the message Do not know how to apply coupon!, and returns the original price.

DiscountCoupon Class

    This class is the descendant class of the Coupon class and consists of the following members:

    public:
    
      -A constructor with one parameter (with default value). This parameter will be used to initialize the private member inherited from the Coupon class
      -A destructor that prints out the message Discount coupon is used!
      -The overriding function float applyCoupon(float orgPrice) that re-implements the strategy of applying coupon. In particular, the new price after applying coupon will be (1-amount) * orgPrice.

CashCoupon Class

    This class is the descendant class of the Coupon class and consists of the following members:

    public:
    
      -A constructor with one parameter (with default value). This parameter will be used to initialize the private member inherited from the Coupon class
      -A destructor that prints out the message Cash coupon is used!
      -The overriding function float applyCoupon(float orgPrice) that re-implements the strategy of applying coupon. In particular, the new price after applying coupon will be orgPrice - amount. If the new price is negative, return 0.
      
NOTE: 

    Most parts of the above three classes are provided. You just need to properly implement the destructors and the applyCoupon() functions of the three classes. A reference main.cpp is provided for your testing. You cannot modify the main.cpp.

