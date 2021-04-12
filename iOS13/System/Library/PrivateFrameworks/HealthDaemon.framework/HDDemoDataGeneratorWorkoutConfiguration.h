/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity;

@interface HDDemoDataGeneratorWorkoutConfiguration : NSObject <NSSecureCoding> {

	BOOL _createdFromNSKeyedUnarchiver;
	BOOL _indoor;
	unsigned long long _activityType;
	unsigned long long _goalType;
	HKQuantity* _goal;
	double _startTime;
	double _endTime;
	double _kcalRate;
	double _distanceWalkingRateInMiles;
	double _distanceCyclingRateInMiles;
	double _distanceSwimmingRateInYards;
	double _distanceSwimmingSegmentInYards;
	long long _numSwimmingSegments;
	long long _swimmingNumLapsPerSegment;
	double _swimmingSwimSegmentTime;
	double _swimmingRestSegmentTime;
	long long _swimmingStrokeStyle;

}

@property (assign,nonatomic) unsigned long long activityType;                    //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL indoor;                                        //@synthesize indoor=_indoor - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                        //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,retain) HKQuantity * goal;                                  //@synthesize goal=_goal - In the implementation block
@property (assign,nonatomic) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                     //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double kcalRate;                                    //@synthesize kcalRate=_kcalRate - In the implementation block
@property (assign,nonatomic) double distanceWalkingRateInMiles;                  //@synthesize distanceWalkingRateInMiles=_distanceWalkingRateInMiles - In the implementation block
@property (assign,nonatomic) double distanceCyclingRateInMiles;                  //@synthesize distanceCyclingRateInMiles=_distanceCyclingRateInMiles - In the implementation block
@property (assign,nonatomic) double distanceSwimmingRateInYards;                 //@synthesize distanceSwimmingRateInYards=_distanceSwimmingRateInYards - In the implementation block
@property (assign,nonatomic) double distanceSwimmingSegmentInYards;              //@synthesize distanceSwimmingSegmentInYards=_distanceSwimmingSegmentInYards - In the implementation block
@property (assign,nonatomic) long long numSwimmingSegments;                      //@synthesize numSwimmingSegments=_numSwimmingSegments - In the implementation block
@property (assign,nonatomic) long long swimmingNumLapsPerSegment;                //@synthesize swimmingNumLapsPerSegment=_swimmingNumLapsPerSegment - In the implementation block
@property (assign,nonatomic) double swimmingSwimSegmentTime;                     //@synthesize swimmingSwimSegmentTime=_swimmingSwimSegmentTime - In the implementation block
@property (assign,nonatomic) double swimmingRestSegmentTime;                     //@synthesize swimmingRestSegmentTime=_swimmingRestSegmentTime - In the implementation block
@property (assign,nonatomic) long long swimmingStrokeStyle;                      //@synthesize swimmingStrokeStyle=_swimmingStrokeStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)activityType;
-(double)startTime;
-(void)setActivityType:(unsigned long long)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(HKQuantity *)goal;
-(BOOL)createdFromNSKeyedUnarchiver;
-(void)setSwimmingStrokeStyle:(long long)arg1 ;
-(long long)swimmingStrokeStyle;
-(double)swimmingSwimSegmentTime;
-(double)swimmingRestSegmentTime;
-(long long)numSwimmingSegments;
-(double)distanceSwimmingSegmentInYards;
-(long long)swimmingNumLapsPerSegment;
-(double)kcalRate;
-(double)distanceWalkingRateInMiles;
-(double)distanceCyclingRateInMiles;
-(id)initWithPrototype:(id)arg1 currentDemoDataTime:(double)arg2 ;
-(BOOL)indoor;
-(void)setIndoor:(BOOL)arg1 ;
-(void)setKcalRate:(double)arg1 ;
-(void)setDistanceWalkingRateInMiles:(double)arg1 ;
-(void)setDistanceCyclingRateInMiles:(double)arg1 ;
-(double)distanceSwimmingRateInYards;
-(void)setDistanceSwimmingRateInYards:(double)arg1 ;
-(void)setDistanceSwimmingSegmentInYards:(double)arg1 ;
-(void)setNumSwimmingSegments:(long long)arg1 ;
-(void)setSwimmingNumLapsPerSegment:(long long)arg1 ;
-(void)setSwimmingSwimSegmentTime:(double)arg1 ;
-(void)setSwimmingRestSegmentTime:(double)arg1 ;
@end

