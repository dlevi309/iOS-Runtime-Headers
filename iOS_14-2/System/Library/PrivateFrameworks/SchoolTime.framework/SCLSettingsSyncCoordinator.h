/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <libobjc.A.dylib/SCLSettingsSyncStateMachineDelegate.h>

@protocol SCLSettingsSyncTransport, OS_dispatch_queue, OS_dispatch_source;
@class SCLScheduleSettings, NSObject, SCLSettingsSyncStateMachine, NSURL, NSString;

@interface SCLSettingsSyncCoordinator : NSObject <SCLSettingsSyncStateMachineDelegate> {

	SCLScheduleSettings* _schedule;
	id<SCLSettingsSyncTransport> _transport;
	NSObject*<OS_dispatch_queue> _queue;
	SCLSettingsSyncStateMachine* _stateMachine;
	NSObject*<OS_dispatch_source> _timerSource;
	NSURL* _contextURL;
	NSString* _xpcActivityName;

}

@property (nonatomic,readonly) SCLSettingsSyncStateMachine * stateMachine;               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;                  //@synthesize timerSource=_timerSource - In the implementation block
@property (nonatomic,readonly) NSURL * contextURL;                                       //@synthesize contextURL=_contextURL - In the implementation block
@property (nonatomic,readonly) NSString * xpcActivityName;                               //@synthesize xpcActivityName=_xpcActivityName - In the implementation block
@property (nonatomic,readonly) SCLScheduleSettings * schedule;                           //@synthesize schedule=_schedule - In the implementation block
@property (assign,nonatomic,__weak) id<SCLSettingsSyncTransport> transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_source>)timerSource;
-(id<SCLSettingsSyncTransport>)transport;
-(void)setTransport:(id<SCLSettingsSyncTransport>)arg1 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)activate;
-(SCLScheduleSettings *)schedule;
-(SCLSettingsSyncStateMachine *)stateMachine;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)beginActivity:(id)arg1 ;
-(void)applySchedule:(id)arg1 ;
-(void)didDeliverMessageWithIdentifier:(id)arg1 ;
-(void)identifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithFileURL:(id)arg1 pairingID:(id)arg2 schedule:(id)arg3 queue:(id)arg4 ;
-(void)registerActivityWithCriteria:(id)arg1 ;
-(NSString *)xpcActivityName;
-(NSURL *)contextURL;
-(void)commitTimerFired;
-(void)performSyncForStateMachine:(id)arg1 ;
-(void)stateMachine:(id)arg1 scheduleRetryWithActivityCriteria:(id)arg2 ;
-(void)stateMachine:(id)arg1 scheduleCommitTimerWithInterval:(double)arg2 ;
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(void)cancelRetryActivityForStateMachine:(id)arg1 ;
-(void)cancelCommitTimerForStateMachine:(id)arg1 ;
-(void)noteSignificantUserInteractionOccured;
@end

