/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics {

	unsigned long long _workoutActivityType;
	NSDictionary* _perMinuteReadings;

}

@property (setter=_setPerMinuteReadings:,nonatomic,retain) NSDictionary * perMinuteReadings;              //@synthesize perMinuteReadings=_perMinuteReadings - In the implementation block
@property (nonatomic,readonly) unsigned long long workoutActivityType;                                    //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
-(NSDictionary *)perMinuteReadings;
-(void)_setPerMinuteReadings:(id)arg1 ;
-(unsigned long long)workoutActivityType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

