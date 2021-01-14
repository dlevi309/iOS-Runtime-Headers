/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

