/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)workoutActivityType;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
-(NSDictionary *)perMinuteReadings;
-(void)_setPerMinuteReadings:(id)arg1 ;
@end

