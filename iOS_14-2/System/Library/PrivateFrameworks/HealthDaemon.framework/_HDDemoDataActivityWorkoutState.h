/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableData, NSMutableArray, HKQuantity, NSDate;

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {

	NSMutableData* _associatedObjectUUIDs;
	NSMutableArray* _workoutEvents;
	unsigned long long _workoutActivityType;
	unsigned long long _goalType;
	HKQuantity* _goal;
	NSDate* _startDate;
	double _totalEnergyBurnedInKilocalories;
	double _totalDistanceWalkingInMeters;
	double _totalDistanceCyclingInMeters;
	double _totalDistanceSwimmingInYards;
	double _totalSwimmingStrokes;
	long long _swimmingStrokeStyle;

}

@property (nonatomic,retain) NSMutableData * associatedObjectUUIDs;               //@synthesize associatedObjectUUIDs=_associatedObjectUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * workoutEvents;                      //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (assign,nonatomic) unsigned long long workoutActivityType;              //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                         //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,retain) HKQuantity * goal;                                   //@synthesize goal=_goal - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double totalEnergyBurnedInKilocalories;              //@synthesize totalEnergyBurnedInKilocalories=_totalEnergyBurnedInKilocalories - In the implementation block
@property (assign,nonatomic) double totalDistanceWalkingInMeters;                 //@synthesize totalDistanceWalkingInMeters=_totalDistanceWalkingInMeters - In the implementation block
@property (assign,nonatomic) double totalDistanceCyclingInMeters;                 //@synthesize totalDistanceCyclingInMeters=_totalDistanceCyclingInMeters - In the implementation block
@property (assign,nonatomic) double totalDistanceSwimmingInYards;                 //@synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards - In the implementation block
@property (assign,nonatomic) double totalSwimmingStrokes;                         //@synthesize totalSwimmingStrokes=_totalSwimmingStrokes - In the implementation block
@property (assign,nonatomic) long long swimmingStrokeStyle;                       //@synthesize swimmingStrokeStyle=_swimmingStrokeStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKQuantity *)goal;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(long long)lapCount;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(unsigned long long)workoutActivityType;
-(id)initWithCoder:(id)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(NSMutableArray *)workoutEvents;
-(void)setSwimmingStrokeStyle:(long long)arg1 ;
-(long long)swimmingStrokeStyle;
-(double)totalDistanceSwimmingInYards;
-(void)setTotalDistanceSwimmingInYards:(double)arg1 ;
-(double)totalEnergyBurnedInKilocalories;
-(void)setTotalEnergyBurnedInKilocalories:(double)arg1 ;
-(void)addAssociatedObjectUUID:(id)arg1 ;
-(double)totalDistanceWalkingInMeters;
-(void)setTotalDistanceWalkingInMeters:(double)arg1 ;
-(double)totalDistanceCyclingInMeters;
-(void)setTotalDistanceCyclingInMeters:(double)arg1 ;
-(id)generateWorkoutWithEndDate:(id)arg1 profile:(id)arg2 provenance:(id)arg3 ;
-(NSMutableData *)associatedObjectUUIDs;
-(void)addWorkoutEvent:(id)arg1 ;
-(double)totalSwimmingStrokes;
-(void)setTotalSwimmingStrokes:(double)arg1 ;
-(void)addWorkoutRouteFromFilePath:(id)arg1 profile:(id)arg2 provenance:(id)arg3 workout:(id)arg4 ;
-(void)setAssociatedObjectUUIDs:(NSMutableData *)arg1 ;
-(void)setWorkoutEvents:(NSMutableArray *)arg1 ;
@end

