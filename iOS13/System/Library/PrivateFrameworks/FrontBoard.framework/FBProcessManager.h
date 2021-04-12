/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBProcessDelegate.h>

@protocol OS_dispatch_queue, FBProcessManagerKeyboardFocusDelegate;
@class FBApplicationProcess, NSObject, NSMutableDictionary, NSHashTable, NSMutableOrderedSet, FBProcess, BKSHIDEventDeferringToken, RBSProcessMonitor, NSMutableSet, FBApplicationProcessWatchdogPolicy, NSString;

@interface FBProcessManager : NSObject <FBProcessDelegate> {

	FBApplicationProcess* _systemAppProcess;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	os_unfair_lock_s _processesLock;
	NSMutableDictionary* _processesLock_processesByPID;
	NSMutableDictionary* _processesLock_processesByIdentity;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _queue_observers;
	NSMutableOrderedSet* _queue_foregroundRunningProcesses;
	FBProcess* _queue_previouslySelectedForegroundProcess;
	FBProcess* _queue_preferredForegroundAppProcess;
	BKSHIDEventDeferringToken* _queue_preferredForegroundToken;
	id<FBProcessManagerKeyboardFocusDelegate> _queue_keyboardFocusDelegate;
	RBSProcessMonitor* _queue_monitor;
	NSMutableSet* _queue_monitorPredicates;
	FBApplicationProcessWatchdogPolicy* _noDirectAccess_defaultWatchdogPolicy;

}

@property (nonatomic,readonly) FBApplicationProcess * systemApplicationProcess;              //@synthesize systemAppProcess=_systemAppProcess - In the implementation block
@property (retain) FBApplicationProcessWatchdogPolicy * defaultWatchdogPolicy;               //@synthesize noDirectAccess_defaultWatchdogPolicy=_noDirectAccess_defaultWatchdogPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg1 ;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)registerProcessForAuditToken:(SCD_Struct_FB8)arg1 ;
-(id)registerProcessForHandle:(id)arg1 ;
-(id)processesForBundleIdentifier:(id)arg1 ;
-(id)processForPID:(int)arg1 ;
-(void)_setPreferredForegroundApplicationProcess:(id)arg1 deferringToken:(id)arg2 ;
-(id)applicationProcessesForBundleIdentifier:(id)arg1 ;
-(id)allApplicationProcesses;
-(void)noteProcess:(id)arg1 didUpdateState:(id)arg2 ;
-(void)noteProcessDidExit:(id)arg1 ;
-(FBApplicationProcess *)systemApplicationProcess;
-(id)processForIdentity:(id)arg1 ;
-(id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2 ;
-(id)allProcesses;
-(void)_queue_addForegroundRunningProcess:(id)arg1 ;
-(void)_queue_evaluateForegroundEventRouting;
-(void)_queue_addProcess:(id)arg1 ;
-(id)_queue_reallyRegisterProcessForHandle:(id)arg1 ;
-(id)_createProcessWithExecutionContext:(id)arg1 ;
-(FBApplicationProcessWatchdogPolicy *)defaultWatchdogPolicy;
-(void)_queue_removeProcess:(id)arg1 withPID:(int)arg2 ;
-(void)_queue_removeForegroundRunningProcess:(id)arg1 ;
-(void)_queue_notifyObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)applicationProcessForPID:(int)arg1 ;
-(id)keyboardFocusDelegate;
-(void)setKeyboardFocusDelegate:(id)arg1 ;
-(oneway void)launchProcessWithContext:(id)arg1 ;
-(id)_serviceClientAddedWithProcessHandle:(id)arg1 ;
-(void)setDefaultWatchdogPolicy:(FBApplicationProcessWatchdogPolicy *)arg1 ;
@end

