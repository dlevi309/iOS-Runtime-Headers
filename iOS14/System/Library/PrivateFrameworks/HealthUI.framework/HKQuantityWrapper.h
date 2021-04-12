/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(HKQuantity *)quantity;
-(void)setQuantity:(HKQuantity *)arg1 ;
-(id)initWithQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

