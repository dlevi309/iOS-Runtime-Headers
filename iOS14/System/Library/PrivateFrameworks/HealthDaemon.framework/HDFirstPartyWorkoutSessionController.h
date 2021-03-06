/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDWorkoutSessionController.h>
#import <libobjc.A.dylib/HDWorkoutSessionStateController.h>

@protocol HDWorkoutSessionStateController;
@class HDDefaultWorkoutSessionController;

@interface HDFirstPartyWorkoutSessionController : NSObject <HDWorkoutSessionController, HDWorkoutSessionStateController> {

	id<HDWorkoutSessionStateController> _sessionStateController;
	HDDefaultWorkoutSessionController* _defaultSessionController;
	long long _currentState;

}

@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
+(id)recoveryIdentifier;
+(void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2 ;
-(void)finish;
-(BOOL)resumeWithError:(id*)arg1 ;
-(void)endHeartRateRecovery;
-(void)generateError:(id)arg1 ;
-(BOOL)pauseWithError:(id*)arg1 ;
-(void)unitTest_setCMWorkoutManager:(id)arg1 ;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(void)generateMetadata:(id)arg1 ;
-(void)finishAggregationWithDate:(id)arg1 ;
-(void)generateConfigurationUpdate:(id)arg1 ;
-(void)generateEvent:(id)arg1 ;
-(void)autoPauseWithDate:(id)arg1 ;
-(void)autoResumeWithDate:(id)arg1 ;
-(id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4 ;
-(void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2 ;
-(void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4 ;
-(void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2 ;
-(void)hktest_setStateTransitionCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareWithError:(id*)arg1 ;
-(BOOL)startActivityWithDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopActivityWithDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)endWithError:(id*)arg1 ;
-(BOOL)_isAutoPauseEnabled;
@end

