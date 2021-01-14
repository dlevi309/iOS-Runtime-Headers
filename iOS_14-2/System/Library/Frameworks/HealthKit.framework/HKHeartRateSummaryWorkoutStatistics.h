/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics {

	unsigned long long _workoutActivityType;
	HKQuantity* _averageHeartRate;
	HKQuantity* _maximumHeartRate;

}

@property (setter=_setAverageHeartRate:,nonatomic,retain) HKQuantity * averageHeartRate;              //@synthesize averageHeartRate=_averageHeartRate - In the implementation block
@property (setter=_setMaximumHeartRate:,nonatomic,retain) HKQuantity * maximumHeartRate;              //@synthesize maximumHeartRate=_maximumHeartRate - In the implementation block
@property (nonatomic,readonly) unsigned long long workoutActivityType;                                //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)averageHeartRate;
-(id)description;
-(HKQuantity *)maximumHeartRate;
-(id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4 ;
-(void)_setMaximumHeartRate:(id)arg1 ;
-(void)_setAverageHeartRate:(id)arg1 ;
-(unsigned long long)workoutActivityType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

