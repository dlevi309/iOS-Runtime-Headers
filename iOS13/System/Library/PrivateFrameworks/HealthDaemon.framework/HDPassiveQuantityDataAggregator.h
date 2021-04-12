/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDPassiveDataAggregator.h>

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator {

	HKQuantityType* _quantityType;

}

@property (nonatomic,copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
-(id)objectType;
-(HKQuantityType *)quantityType;
-(id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2 ;
-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2 ;
@end

