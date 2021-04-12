/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {

	HKQuantityType* _distanceType;

}
-(id)collectedTypes;
-(Class)coreMotionDatumClass;
-(double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3 ;
-(id)persistentIdentifier;
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(id)queue_newDataSource;
-(unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1 ;
-(id)initWithProfile:(id)arg1 collectedDistanceType:(id)arg2 ;
@end

