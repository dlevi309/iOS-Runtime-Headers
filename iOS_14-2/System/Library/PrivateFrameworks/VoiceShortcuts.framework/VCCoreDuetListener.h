/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol OS_dispatch_queue, _CDUserContext, VCDatabaseProvider;
@class WFWorkflowRunCoordinator, NSObject, VCDaemonXPCEventHandler, VCTriggerEventQueue, NSMutableDictionary;

@interface VCCoreDuetListener : NSObject {

	WFWorkflowRunCoordinator* _runCoordinator;
	NSObject*<OS_dispatch_queue> _queue;
	id<_CDUserContext> _userContext;
	id<VCDatabaseProvider> _databaseProvider;
	VCDaemonXPCEventHandler* _eventHandler;
	VCTriggerEventQueue* _eventQueue;
	NSMutableDictionary* _registrations;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> userContext;                         //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;                 //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,retain) VCTriggerEventQueue * eventQueue;                         //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registrations;                    //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;              //@synthesize runCoordinator=_runCoordinator - In the implementation block
-(VCDaemonXPCEventHandler *)eventHandler;
-(id<_CDUserContext>)userContext;
-(void)handleSunriseSunsetChanged;
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(VCTriggerEventQueue *)eventQueue;
-(void)removeStalePendingNotifications;
-(NSMutableDictionary *)registrations;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)timezoneChangeDidOccur;
-(void)registerSunriseSunsetCallbackIfNeeded;
-(id)databaseWithError:(id*)arg1 ;
-(void)unregisterAllTriggers;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterCallbackForIdentifier:(id)arg1 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerAllTriggersWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 runCoordinator:(id)arg3 ;
-(void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2 ;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setEventQueue:(VCTriggerEventQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)deleteTriggerWithIdentifier:(id)arg1 allowedDeletionClasses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceDidUnlockForFirstTime;
-(BOOL)queue_registerAllTriggers:(id*)arg1 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)registerTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)registerTrigger:(id)arg1 error:(id*)arg2 ;
-(void)queue_fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)timeChangeDidOccur;
-(void)registerCallback:(id)arg1 withIdentifier:(id)arg2 ;
-(void)dealloc;
-(BOOL)isCallbackRegisteredWithIdentifier:(id)arg1 ;
@end

