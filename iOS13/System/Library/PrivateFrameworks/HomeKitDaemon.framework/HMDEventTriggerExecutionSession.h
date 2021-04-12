/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEventTriggerSession.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDEventDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class NSMutableArray, NSArray, HMDPredicateUtilities, NSPredicate, HMDEventTriggerUserConfirmationSession, HMDTriggerConfirmationTimer, HMFTimer, HomeKitEventTriggerExecutionSessionEvent, NSMapTable, NSMutableSet, NSString;

@interface HMDEventTriggerExecutionSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMDEventDelegate, HMFTimerDelegate> {

	BOOL _actionSetExecutionInProgress;
	BOOL _restoreInProgress;
	BOOL _executionCompleteCalled;
	NSMutableArray* _triggerEvents;
	NSMutableArray* _causingDevices;
	NSArray* _endEvents;
	NSArray* _monitorEvents;
	unsigned long long _executionState;
	HMDPredicateUtilities* _predicateUtilities;
	NSArray* _actionSets;
	NSPredicate* _evaluationCondition;
	NSArray* _recurrences;
	HMDEventTriggerUserConfirmationSession* _userConfirmationSession;
	HMDTriggerConfirmationTimer* _secureTriggerConfirmationTimer;
	HMFTimer* _startCharacteristicsMonitorTimer;
	HomeKitEventTriggerExecutionSessionEvent* _metricEvent;
	NSMapTable* _writeRequests;
	NSMutableSet* _mediaProfiles;

}

@property (nonatomic,readonly) NSMapTable * writeRequests;                                                    //@synthesize writeRequests=_writeRequests - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mediaProfiles;                                                  //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,readonly) NSMutableArray * triggerEvents;                                                //@synthesize triggerEvents=_triggerEvents - In the implementation block
@property (nonatomic,readonly) NSMutableArray * causingDevices;                                               //@synthesize causingDevices=_causingDevices - In the implementation block
@property (nonatomic,readonly) NSArray * endEvents;                                                           //@synthesize endEvents=_endEvents - In the implementation block
@property (nonatomic,retain) NSArray * monitorEvents;                                                         //@synthesize monitorEvents=_monitorEvents - In the implementation block
@property (assign,nonatomic) unsigned long long executionState;                                               //@synthesize executionState=_executionState - In the implementation block
@property (nonatomic,readonly) HMDPredicateUtilities * predicateUtilities;                                    //@synthesize predicateUtilities=_predicateUtilities - In the implementation block
@property (nonatomic,readonly) NSArray * actionSets;                                                          //@synthesize actionSets=_actionSets - In the implementation block
@property (nonatomic,readonly) NSPredicate * evaluationCondition;                                             //@synthesize evaluationCondition=_evaluationCondition - In the implementation block
@property (nonatomic,readonly) NSArray * recurrences;                                                         //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,readonly) HMDEventTriggerUserConfirmationSession * userConfirmationSession;              //@synthesize userConfirmationSession=_userConfirmationSession - In the implementation block
@property (nonatomic,retain) HMDTriggerConfirmationTimer * secureTriggerConfirmationTimer;                    //@synthesize secureTriggerConfirmationTimer=_secureTriggerConfirmationTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * startCharacteristicsMonitorTimer;                                     //@synthesize startCharacteristicsMonitorTimer=_startCharacteristicsMonitorTimer - In the implementation block
@property (assign,nonatomic) BOOL actionSetExecutionInProgress;                                               //@synthesize actionSetExecutionInProgress=_actionSetExecutionInProgress - In the implementation block
@property (assign,nonatomic) BOOL restoreInProgress;                                                          //@synthesize restoreInProgress=_restoreInProgress - In the implementation block
@property (nonatomic,readonly) BOOL needsUserConfirmation; 
@property (assign,nonatomic) BOOL executionCompleteCalled;                                                    //@synthesize executionCompleteCalled=_executionCompleteCalled - In the implementation block
@property (nonatomic,readonly) HomeKitEventTriggerExecutionSessionEvent * metricEvent;                        //@synthesize metricEvent=_metricEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSString *)description;
-(NSMapTable *)writeRequests;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSArray *)actionSets;
-(id)dumpState;
-(NSArray *)recurrences;
-(NSArray *)endEvents;
-(NSMutableSet *)mediaProfiles;
-(void)_restoreState;
-(void)setRestoreInProgress:(BOOL)arg1 ;
-(NSMutableArray *)triggerEvents;
-(id)didOccurEvent:(id)arg1 causingDevice:(id)arg2 ;
-(void)cancelSessionIfWaitingForUserResponse;
-(NSPredicate *)evaluationCondition;
-(HMDPredicateUtilities *)predicateUtilities;
-(void)_activateEvents:(id)arg1 ;
-(id)initWithEventTrigger:(id)arg1 predicateUtilities:(id)arg2 triggerEvent:(id)arg3 causingDevice:(id)arg4 workQueue:(id)arg5 actionSets:(id)arg6 evaluationCondition:(id)arg7 recurrences:(id)arg8 endEvents:(id)arg9 msgDispatcher:(id)arg10 ;
-(void)evaluateFiringTrigger;
-(void)postponeRestoreIfWaitingForEndEvent;
-(BOOL)needsUserConfirmation;
-(void)addEvent:(id)arg1 causingDevice:(id)arg2 ;
-(HMDEventTriggerUserConfirmationSession *)userConfirmationSession;
-(unsigned long long)executionState;
-(void)setExecutionState:(unsigned long long)arg1 ;
-(HomeKitEventTriggerExecutionSessionEvent *)metricEvent;
-(void)userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleSessionPlaybackStateUpdatedNotification:(id)arg1 ;
-(void)_callExecutionComplete:(id)arg1 callDelegate:(BOOL)arg2 ;
-(NSMutableArray *)causingDevices;
-(NSArray *)monitorEvents;
-(BOOL)restoreInProgress;
-(HMDTriggerConfirmationTimer *)secureTriggerConfirmationTimer;
-(void)_evaluateFiringTrigger;
-(void)_callExecutionComplete:(id)arg1 ;
-(void)_executeTriggerAfterEvaluatingCondition:(id)arg1 ;
-(BOOL)containsSecureActionSet;
-(void)setSecureTriggerConfirmationTimer:(HMDTriggerConfirmationTimer *)arg1 ;
-(void)_directlyExecuteActionSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_activateDurationEvents;
-(void)_userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)actionSetExecutionInProgress;
-(void)_removeUserDialog;
-(void)_addEvent:(id)arg1 causingDevice:(id)arg2 ;
-(void)setActionSetExecutionInProgress:(BOOL)arg1 ;
-(void)_handleActionSetExecutionResponse:(id)arg1 actionSetError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createMonitoringEvents:(id)arg1 ;
-(void)setMonitorEvents:(NSArray *)arg1 ;
-(void)setStartCharacteristicsMonitorTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)startCharacteristicsMonitorTimer;
-(id)durationEndEvents;
-(id)valueInActionSetWriteResponse:(id)arg1 actionSetUUID:(id)arg2 accUUID:(id)arg3 serviceID:(id)arg4 characteristicID:(id)arg5 ;
-(BOOL)executionCompleteCalled;
-(void)setExecutionCompleteCalled:(BOOL)arg1 ;
-(void)_submitMetric:(id)arg1 ;
-(void)_callExecutionCompleteIfNoMoreOutstandingRequests;
-(void)_handleMonitoringEvent:(id)arg1 ;
-(void)_activateMonitoringEvents;
@end

