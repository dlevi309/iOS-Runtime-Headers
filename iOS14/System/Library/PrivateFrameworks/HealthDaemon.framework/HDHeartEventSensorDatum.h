/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

