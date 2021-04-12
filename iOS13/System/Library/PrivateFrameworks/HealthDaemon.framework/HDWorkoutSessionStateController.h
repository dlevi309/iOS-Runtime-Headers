/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutSessionStateController
@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
@required
-(void)finish;
-(BOOL)resumeWithError:(id*)arg1;
-(BOOL)pauseWithError:(id*)arg1;
-(BOOL)endWithError:(id*)arg1;
-(void)generateError:(id)arg1;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(void)generateMetadata:(id)arg1;
-(void)finishAggregationWithDate:(id)arg1;
-(void)generateEvent:(id)arg1;
-(void)autoPauseWithDate:(id)arg1;
-(void)autoResumeWithDate:(id)arg1;
-(void)endHeartRateRecovery;
-(BOOL)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)prepareWithError:(id*)arg1;
-(BOOL)startActivityWithDate:(id)arg1 error:(id*)arg2;
-(BOOL)stopActivityWithDate:(id)arg1 error:(id*)arg2;

@end

