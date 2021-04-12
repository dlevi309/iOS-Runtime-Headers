/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKQuantity, NSDateInterval;

@interface HKQuantityWrapper : NSObject {

	HKQuantity* _quantity;
	NSDateInterval* _dateInterval;

}

@property (retain) HKQuantity * quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
-(NSDateInterval *)dateInterval;
-(HKQuantity *)quantity;
-(void)setQuantity:(HKQuantity *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)initWithQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

