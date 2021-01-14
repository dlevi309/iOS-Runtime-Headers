/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDActiveDataAggregator.h>

@class HKQuantityType;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {

	HKQuantityType* _quantityType;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
-(id)objectType;
-(id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 options:(unsigned long long)arg6 error:(id*)arg7 ;
-(HKQuantityType *)quantityType;
-(Class)sensorDatumClass;
-(id)description;
-(id)_aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 interval:(double)arg6 ;
-(id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2 ;
@end

