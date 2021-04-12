/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDActiveDataAggregator.h>

@class HKQuantityType;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {

	HKQuantityType* _quantityType;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
-(id)description;
-(id)objectType;
-(HKQuantityType *)quantityType;
-(id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 freezeSeries:(BOOL)arg6 error:(id*)arg7 ;
-(id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2 ;
-(Class)sensorDatumClass;
-(id)_aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 interval:(double)arg6 ;
@end

