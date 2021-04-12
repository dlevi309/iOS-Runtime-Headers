/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class NSArray, HKQuantity;

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum {

	NSArray* _associatedSampleUUIDs;
	HKQuantity* _heartRateThreshold;

}

@property (nonatomic,readonly) NSArray * associatedSampleUUIDs;              //@synthesize associatedSampleUUIDs=_associatedSampleUUIDs - In the implementation block
@property (nonatomic,readonly) HKQuantity * heartRateThreshold;              //@synthesize heartRateThreshold=_heartRateThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)metadata;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRateThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5 ;
-(NSArray *)associatedSampleUUIDs;
-(HKQuantity *)heartRateThreshold;
@end

