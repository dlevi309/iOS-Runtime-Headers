/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFDialogPresentationManagerDelegate.h>
#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_queue;
@class WFUserNotificationManager, NSMutableDictionary, NSMutableArray, WFDialogPresentationManager, NSHashTable, NSObject, NSString;

@interface WFWorkflowRunCoordinator : NSObject <WFDialogPresentationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate> {

	WFUserNotificationManager* _userNotificationManager;
	NSMutableDictionary* _runningWorkflowCompletionHandlers;
	NSMutableDictionary* _runningWorkflowControllers;
	NSMutableArray* _queuedPersistentRunRequests;
	WFDialogPresentationManager* _dialogPresentationManager;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSMutableDictionary * runningWorkflowCompletionHandlers;              //@synthesize runningWorkflowCompletionHandlers=_runningWorkflowCompletionHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * runningWorkflowControllers;                     //@synthesize runningWorkflowControllers=_runningWorkflowControllers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queuedPersistentRunRequests;                         //@synthesize queuedPersistentRunRequests=_queuedPersistentRunRequests - In the implementation block
@property (nonatomic,readonly) WFDialogPresentationManager * dialogPresentationManager;              //@synthesize dialogPresentationManager=_dialogPresentationManager - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFUserNotificationManager * userNotificationManager;                  //@synthesize userNotificationManager=_userNotificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithActionCategory;
+(id)errorCategory;
+(long long)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(unsigned long long)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)queue_callWorkflowCompletionForContext:(id)arg1 withError:(id)arg2 cancelled:(BOOL)arg3 ;
-(NSHashTable *)observers;
-(NSMutableDictionary *)runningWorkflowControllers;
-(void)presentationManager:(id)arg1 cancelExecutionOfWorkflowWithContext:(id)arg2 ;
-(void)runWorkflowWithRequest:(id)arg1 context:(id)arg2 ;
-(void)runNextPersistentWorkflowIfAvailable;
-(void)stopRunningWorkflowWithRunningContext:(id)arg1 ;
-(void)enqueueDialog:(id)arg1 runningContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(WFDialogPresentationManager *)dialogPresentationManager;
-(void)postNotificationAboutFailure:(id)arg1 inWorkflow:(id)arg2 dialogAttribution:(id)arg3 ;
-(void)removeStaleNotifications;
-(id)queue_contextForWorkflowController:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)outOfProcessWorkflowController:(id)arg1 didStartFromWorkflowReference:(id)arg2 dialogAttribution:(id)arg3 ;
-(id)initWithUserNotificationManager:(id)arg1 ;
-(id)queue_workflowControllerWithContext:(id)arg1 ;
-(BOOL)shortcutWithIdentifierIsRunning:(id)arg1 ;
-(void)resumeWorkflowFromContext:(id)arg1 presentationMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPresentedContentWithCompletion:(/*^block*/id)arg1 ;
-(void)runWorkflowWithRequest:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)queue_runWorkflowWithRequest:(id)arg1 context:(id)arg2 error:(out id*)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableArray *)queuedPersistentRunRequests;
-(id)allRunningWorkflows;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 reference:(id)arg4 dialogAttribution:(id)arg5 ;
-(NSMutableDictionary *)runningWorkflowCompletionHandlers;
-(id)bestErrorFromError:(id)arg1 ;
-(void)queue_finishWorkflowWithContext:(id)arg1 error:(id)arg2 cancelled:(BOOL)arg3 ;
-(id)unsupportedDialogResponseWithRequest:(id)arg1 ;
-(void)presentationManager:(id)arg1 pauseExecutionOfWorkflowWithContext:(id)arg2 ;
-(void)queue_notifyObserversWorkflowDidFinishRunningWithError:(id)arg1 context:(id)arg2 cancelled:(BOOL)arg3 ;
-(WFUserNotificationManager *)userNotificationManager;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

