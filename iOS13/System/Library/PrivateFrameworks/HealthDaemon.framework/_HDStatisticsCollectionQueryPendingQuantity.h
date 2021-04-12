/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKQuantity, NSDateInterval;

@interface _HDStatisticsCollectionQueryPendingQuantity : NSObject {

	HKQuantity* _quantity;
	NSDateInterval* _dateInterval;

}

@property (nonatomic,copy,readonly) HKQuantity * quantity;                      //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
-(NSDateInterval *)dateInterval;
-(HKQuantity *)quantity;
-(id)initWithQuantity:(id)arg1 dateInterval:(id)arg2 ;
@end

