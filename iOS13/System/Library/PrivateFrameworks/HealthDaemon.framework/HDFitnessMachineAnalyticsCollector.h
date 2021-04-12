/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDAWDHealthKitGymKitWorkoutEvent, HKPersistentTimer;

@interface HDFitnessMachineAnalyticsCollector : NSObject {

	HDAWDHealthKitGymKitWorkoutEvent* _gymKitWorkoutEvent;
	HKPersistentTimer* _authorizationTimer;

}

@property (nonatomic,retain) HDAWDHealthKitGymKitWorkoutEvent * gymKitWorkoutEvent;              //@synthesize gymKitWorkoutEvent=_gymKitWorkoutEvent - In the implementation block
@property (nonatomic,retain) HKPersistentTimer * authorizationTimer;                             //@synthesize authorizationTimer=_authorizationTimer - In the implementation block
-(id)init;
-(void)_reset;
-(void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2 ;
-(void)workoutEnded;
-(void)workoutFailedWithError:(id)arg1 ;
-(void)userIsAuthorized;
-(void)userBeganPairing;
-(void)_recordTimeToAuthorize;
-(long long)_failureReasonForError:(id)arg1 ;
-(HDAWDHealthKitGymKitWorkoutEvent *)gymKitWorkoutEvent;
-(void)setGymKitWorkoutEvent:(HDAWDHealthKitGymKitWorkoutEvent *)arg1 ;
-(HKPersistentTimer *)authorizationTimer;
-(void)setAuthorizationTimer:(HKPersistentTimer *)arg1 ;
@end

