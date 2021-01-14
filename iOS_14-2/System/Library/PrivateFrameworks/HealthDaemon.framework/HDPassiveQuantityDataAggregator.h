/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)sensorDatumClass;
-(id)dataObjectsFromSensorDatum:(id)arg1 error:(id*)arg2 ;
-(id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2 ;
@end

