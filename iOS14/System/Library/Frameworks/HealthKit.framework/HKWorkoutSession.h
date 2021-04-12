/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKStateMachineDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HKWorkoutSessionDelegate;
@class NSObject, NSDate, HKWorkoutSessionTaskConfiguration, HKTaskServerProxyProvider, HKLiveWorkoutBuilder, HKStateMachine, HKHealthStore, NSUUID, HKWorkoutConfiguration, NSString;

@interface HKWorkoutSession : NSObject <_HKXPCExportable, HKStateMachineDelegate, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<HKWorkoutSessionDelegate> _delegate;
	long long _state;
	NSDate* _startDate;
	NSDate* _endDate;
	HKWorkoutSessionTaskConfiguration* _configuration;
	HKTaskServerProxyProvider* _proxyProvider;
	id<HKWorkoutSessionDelegate> _strongDelegate;
	HKLiveWorkoutBuilder* _associatedWorkoutBuilder;
	HKStateMachine* _targetStateMachine;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                           //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) BOOL isGymKitSession; 
@property (assign,nonatomic) BOOL shouldStopPreviousSession; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (readonly) unsigned long long activityType; 
@property (readonly) long long locationType; 
@property (copy,readonly) HKWorkoutConfiguration * workoutConfiguration; 
@property (__weak) id<HKWorkoutSessionDelegate> delegate; 
@property (readonly) long long state; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)serverInterface;
+(BOOL)_applicationHasRunningWorkout;
+(id)targetWorkoutSessionStateMachineForSessionUUID:(id)arg1 ;
+(id)clientInterface;
+(void)_unitTest_clearAllRunningWorkouts;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(NSDate *)endDate;
-(id)_privateDelegate;
-(void)end;
-(unsigned long long)activityType;
-(id<HKWorkoutSessionDelegate>)delegate;
-(NSDate *)startDate;
-(void)pause;
-(id)exportedInterface;
-(void)encodeWithCoder:(id)arg1 ;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)setDelegate:(id<HKWorkoutSessionDelegate>)arg1 ;
-(NSString *)description;
-(long long)locationType;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)resumeWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)startActivity;
-(void)client_didGenerateEvents:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setShouldStopPreviousSession:(BOOL)arg1 ;
-(void)client_didChangeToState:(long long)arg1 date:(id)arg2 ;
-(void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)client_didFailWithError:(id)arg1 ;
-(void)client_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isGymKitSession;
-(void)client_didUpdateWorkoutConfiguration:(id)arg1 ;
-(BOOL)_queue_shouldAttemptRecovery;
-(void)_queue_markRecoveryRequired;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldStopPreviousSession;
-(void)stopActivityWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 ;
-(void)startActivityWithDate:(id)arg1 ;
-(void)stopActivityWithDate:(id)arg1 ;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(void)stopActivity;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6 ;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)associatedWorkoutBuilder;
-(void)_unitTest_discardAssociatedWorkoutBuilder;
-(void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3 ;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)_recoverWithCompletion:(/*^block*/id)arg1 ;
-(void)resume;
-(void)prepare;
-(void)_setupWithHealthStore:(id)arg1 ;
-(void)startActivityWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pauseWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id*)arg3 ;
-(void)_setAssociatedWorkoutBuilder:(id)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(void)dealloc;
@end

