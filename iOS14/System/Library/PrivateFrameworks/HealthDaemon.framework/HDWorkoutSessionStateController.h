/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDWorkoutSessionStateController
@property (nonatomic,readonly) id<HDWorkoutDataAccumulator> workoutDataAccumulator; 
@required
-(void)finish;
-(BOOL)resumeWithError:(id*)arg1;
-(void)endHeartRateRecovery;
-(void)generateError:(id)arg1;
-(BOOL)pauseWithError:(id*)arg1;
-(id<HDWorkoutDataAccumulator>)workoutDataAccumulator;
-(void)generateMetadata:(id)arg1;
-(void)finishAggregationWithDate:(id)arg1;
-(void)generateConfigurationUpdate:(id)arg1;
-(void)generateEvent:(id)arg1;
-(void)autoPauseWithDate:(id)arg1;
-(void)autoResumeWithDate:(id)arg1;
-(BOOL)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id*)arg3;
-(BOOL)prepareWithError:(id*)arg1;
-(BOOL)startActivityWithDate:(id)arg1 error:(id*)arg2;
-(BOOL)stopActivityWithDate:(id)arg1 error:(id*)arg2;
-(BOOL)endWithError:(id*)arg1;

@end

