/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@class HKWorkoutConfiguration, NSUUID, CMWorkout;

@interface _HDCoreMotionAssertion : HDAssertion {

	HKWorkoutConfiguration* _workoutConfiguration;
	NSUUID* _sessionUUID;
	CMWorkout* _cmWorkout;

}

@property (nonatomic,readonly) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionUUID;                                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,retain) CMWorkout * cmWorkout;                                        //@synthesize cmWorkout=_cmWorkout - In the implementation block
-(void)setCmWorkout:(CMWorkout *)arg1 ;
-(NSUUID *)sessionUUID;
-(id)initWithOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3 ;
-(CMWorkout *)cmWorkout;
-(HKWorkoutConfiguration *)workoutConfiguration;
@end

