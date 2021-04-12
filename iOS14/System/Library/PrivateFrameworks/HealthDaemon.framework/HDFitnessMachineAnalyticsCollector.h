/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject {

	HKPersistentTimer* _authorizationTimer;
	HDGymKitWorkoutAnalyticEvent* _gymKitWorkoutEvent;

}

@property (nonatomic,retain) HKPersistentTimer * authorizationTimer;                         //@synthesize authorizationTimer=_authorizationTimer - In the implementation block
@property (nonatomic,retain) HDGymKitWorkoutAnalyticEvent * gymKitWorkoutEvent;              //@synthesize gymKitWorkoutEvent=_gymKitWorkoutEvent - In the implementation block
-(void)_recordTimeToAuthorize;
-(void)workoutFailedWithError:(id)arg1 ;
-(id)init;
-(void)setGymKitWorkoutEvent:(HDGymKitWorkoutAnalyticEvent *)arg1 ;
-(void)userIsAuthorized;
-(HDGymKitWorkoutAnalyticEvent *)gymKitWorkoutEvent;
-(void)setAuthorizationTimer:(HKPersistentTimer *)arg1 ;
-(long long)_failureReasonForError:(id)arg1 ;
-(void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2 ;
-(void)workoutEndedSubmitMetricsWith:(id)arg1 ;
-(void)_reset;
-(void)userBeganPairing;
-(HKPersistentTimer *)authorizationTimer;
@end

