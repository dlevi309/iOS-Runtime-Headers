/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, HKWorkoutConfiguration, HKQuantity, NSUUID;

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration {

	BOOL _shouldCollectWorkoutEvents;
	BOOL _requiresRecovery;
	HKDevice* _device;
	HKWorkoutConfiguration* _workoutConfiguration;
	unsigned long long _goalType;
	HKQuantity* _goal;
	NSUUID* _associatedSessionUUID;

}

@property (nonatomic,copy) HKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                              //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,copy) HKQuantity * goal;                                          //@synthesize goal=_goal - In the implementation block
@property (nonatomic,copy) NSUUID * associatedSessionUUID;                             //@synthesize associatedSessionUUID=_associatedSessionUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldCollectWorkoutEvents;                          //@synthesize shouldCollectWorkoutEvents=_shouldCollectWorkoutEvents - In the implementation block
@property (assign,nonatomic) BOOL requiresRecovery;                                    //@synthesize requiresRecovery=_requiresRecovery - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKQuantity *)goal;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(HKDevice *)device;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setDevice:(HKDevice *)arg1 ;
-(NSUUID *)associatedSessionUUID;
-(void)setGoalType:(unsigned long long)arg1 ;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(BOOL)requiresRecovery;
-(void)setRequiresRecovery:(BOOL)arg1 ;
-(void)setAssociatedSessionUUID:(NSUUID *)arg1 ;
-(void)setShouldCollectWorkoutEvents:(BOOL)arg1 ;
-(BOOL)shouldCollectWorkoutEvents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(BOOL)isEqual:(id)arg1 ;
@end

