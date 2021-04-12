/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCUserNotificationManagerDelegate.h>
#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerDelegate.h>

@protocol OS_dispatch_queue, _CDUserContext, VCDatabaseProvider;
@class NSObject, VCUserNotificationManager, VCDaemonXPCEventHandler, NSMutableDictionary, WFOutOfProcessWorkflowController, WFWorkflowRunEvent, WFConfiguredTrigger, WFDatabase, NSString;

@interface VCCoreDuetListener : NSObject <VCUserNotificationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_CDUserContext> _userContext;
	id<VCDatabaseProvider> _databaseProvider;
	VCUserNotificationManager* _notificationManager;
	VCDaemonXPCEventHandler* _eventHandler;
	NSMutableDictionary* _registrations;
	WFOutOfProcessWorkflowController* _workflowController;
	WFWorkflowRunEvent* _inProgressRunEvent;
	WFConfiguredTrigger* _inProgressTrigger;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> userContext;                                   //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                          //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCUserNotificationManager * notificationManager;                  //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) VCDaemonXPCEventHandler * eventHandler;                           //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * registrations;                              //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) WFOutOfProcessWorkflowController * workflowController;              //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * inProgressRunEvent;                            //@synthesize inProgressRunEvent=_inProgressRunEvent - In the implementation block
@property (nonatomic,retain) WFConfiguredTrigger * inProgressTrigger;                            //@synthesize inProgressTrigger=_inProgressTrigger - In the implementation block
@property (nonatomic,readonly) WFDatabase * database; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldRunTrigger:(id)arg1 forEvent:(id)arg2 runEvents:(id)arg3 error:(id*)arg4 ;
+(double)rateLimitingTimeoutForTrigger:(id)arg1 runEvents:(id)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(WFDatabase *)database;
-(id<_CDUserContext>)userContext;
-(VCDaemonXPCEventHandler *)eventHandler;
-(VCUserNotificationManager *)notificationManager;
-(NSMutableDictionary *)registrations;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(WFOutOfProcessWorkflowController *)workflowController;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWorkflowController:(WFOutOfProcessWorkflowController *)arg1 ;
-(void)unregisterAllTriggers;
-(void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2 ;
-(void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2 ;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(void)deviceDidUnlockForFirstTime;
-(void)significantTimeChangeDidOccur;
-(id)queue_configuredTriggerForIdentifier:(id)arg1 workflowReference:(id*)arg2 error:(out id*)arg3 ;
-(BOOL)queue_registerAllTriggers:(id*)arg1 ;
-(BOOL)registerTrigger:(id)arg1 error:(id*)arg2 ;
-(void)handleCallbackForTriggerWithIdentifier:(id)arg1 info:(id)arg2 ;
-(BOOL)isCallbackRegisteredWithIdentifier:(id)arg1 ;
-(void)registerCallback:(id)arg1 withIdentifier:(id)arg2 ;
-(void)unregisterCallbackForIdentifier:(id)arg1 ;
-(void)registerSunriseSunsetCallbackIfNeeded;
-(void)handleSunriseSunsetChanged;
-(void)fetchCurrentSunriseSunsetTimes;
-(void)queue_fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)startRunningWorkflow:(id)arg1 forTrigger:(id)arg2 eventInfo:(id)arg3 error:(out id*)arg4 ;
-(void)logPowerLogEventForConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 ;
-(void)registerAllTriggersWithCompletion:(/*^block*/id)arg1 ;
-(void)registerTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 eventInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logMetricForTrigger:(id)arg1 ;
-(WFWorkflowRunEvent *)inProgressRunEvent;
-(void)setInProgressRunEvent:(WFWorkflowRunEvent *)arg1 ;
-(WFConfiguredTrigger *)inProgressTrigger;
-(void)setInProgressTrigger:(WFConfiguredTrigger *)arg1 ;
@end

