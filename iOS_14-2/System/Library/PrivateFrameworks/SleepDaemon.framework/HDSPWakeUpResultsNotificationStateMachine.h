/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPWakeUpResultsNotificationStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPWakeUpResultsNotificationStateMachineEventHandler.h>

@class HDSPWakeUpResultsNotificationWaitingForWakeUpState, HDSPWakeUpResultsNotificationDelayingForTrackingState, HDSPWakeUpResultsNotificationWaitingForRetryState, HDSPWakeUpResultsNotificationQueryingState, HDSPWakeUpResultsNotificationNeedsProtectedDataState, HDSPWakeUpResultsNotificationNotifiedState, HDSPWakeUpResultsNotificationDisabledState, NSString;

@interface HDSPWakeUpResultsNotificationStateMachine : HKSPPersistentStateMachine <HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPWakeUpResultsNotificationStateMachineEventHandler> {

	HDSPWakeUpResultsNotificationWaitingForWakeUpState* _waitingForWakeUpState;
	HDSPWakeUpResultsNotificationDelayingForTrackingState* _delayingForTrackingState;
	HDSPWakeUpResultsNotificationWaitingForRetryState* _waitingForRetryState;
	HDSPWakeUpResultsNotificationQueryingState* _queryingState;
	HDSPWakeUpResultsNotificationNeedsProtectedDataState* _needsProtectedDataState;
	HDSPWakeUpResultsNotificationNotifiedState* _notifiedState;
	HDSPWakeUpResultsNotificationDisabledState* _disabledState;

}

@property (nonatomic,__weak,readonly) id<HDSPWakeUpResultsNotificationStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationWaitingForWakeUpState * waitingForWakeUpState;                    //@synthesize waitingForWakeUpState=_waitingForWakeUpState - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationDelayingForTrackingState * delayingForTrackingState;              //@synthesize delayingForTrackingState=_delayingForTrackingState - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationWaitingForRetryState * waitingForRetryState;                      //@synthesize waitingForRetryState=_waitingForRetryState - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationQueryingState * queryingState;                                    //@synthesize queryingState=_queryingState - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationNeedsProtectedDataState * needsProtectedDataState;                //@synthesize needsProtectedDataState=_needsProtectedDataState - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationNotifiedState * notifiedState;                                    //@synthesize notifiedState=_notifiedState - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationDisabledState * disabledState;                                    //@synthesize disabledState=_disabledState - In the implementation block
@property (nonatomic,readonly) BOOL isWaitingForWakeUp; 
@property (nonatomic,readonly) BOOL isDelayingForTracking; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unscheduleTrackingDelay;
-(void)executeQuery;
-(void)stopObservingProtectedHealthDataAvailability;
-(void)scheduleTrackingDelay;
-(id)stateMachineLog;
-(void)startObservingProtectedHealthDataAvailability;
-(HDSPWakeUpResultsNotificationWaitingForRetryState *)waitingForRetryState;
-(void)wakeUpDidOccur;
-(HDSPWakeUpResultsNotificationWaitingForWakeUpState *)waitingForWakeUpState;
-(HDSPWakeUpResultsNotificationQueryingState *)queryingState;
-(HDSPWakeUpResultsNotificationDisabledState *)disabledState;
-(HDSPWakeUpResultsNotificationNotifiedState *)notifiedState;
-(void)retryAttemptEventDue;
-(void)protectedHealthDataDidBecomeAvailable;
-(void)queryDidComplete;
-(BOOL)isDelayingForTracking;
-(void)postResultsNotification;
-(HDSPWakeUpResultsNotificationDelayingForTrackingState *)delayingForTrackingState;
-(void)queryDidFailWithError:(id)arg1 ;
-(void)didPostResultsNotification;
-(void)scheduleRetryAttempt;
-(HDSPWakeUpResultsNotificationNeedsProtectedDataState *)needsProtectedDataState;
-(BOOL)isWaitingForWakeUp;
-(void)unscheduleRetryAttempt;
-(void)trackingDelayEventDue;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
@end

