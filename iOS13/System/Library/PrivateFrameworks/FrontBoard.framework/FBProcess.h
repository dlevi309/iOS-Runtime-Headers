/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSProcessInternal.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/FBSProcess.h>

@protocol OS_dispatch_queue, FBProcessDelegate;
@class NSObject, FBProcessExecutionContext, RBSProcessIdentity, BSProcessHandle, RBSProcessHandle, FBProcessState, NSString, FBSApplicationInfo, FBWorkspace, FBProcessCPUStatistics, FBProcessExitContext, NSHashTable, NSMutableArray, RBSProcessState, NSError, RBSAssertion, RBSTarget, BSMachPortTaskNameRight;

@interface FBProcess : NSObject <FBSProcessInternal, RBSProcessMatching, FBSProcess> {

	NSObject*<OS_dispatch_queue> _queue;
	FBProcessExecutionContext* _executionContext;
	id<FBProcessDelegate> _delegate;
	int _pid;
	RBSProcessIdentity* _identity;
	BSProcessHandle* _handle;
	RBSProcessHandle* _rbsHandle;
	FBProcessState* _state;
	NSString* _bundleIdentifier;
	NSString* _executablePath;
	FBSApplicationInfo* _applicationInfo;
	FBWorkspace* _workspace;
	FBProcessCPUStatistics* _cpuStatistics;
	long long _backgroundingPolicy;
	FBProcessExitContext* _exitContext;
	NSHashTable* _observers;
	NSMutableArray* _launchCompletionBlocks;
	RBSProcessState* _rbsState;
	NSError* _bootstrapError;
	RBSAssertion* _launchAssertion;
	RBSAssertion* _continuousAssertion;
	BOOL _waitForDebugger;
	BOOL _updatingState;
	BOOL _didExit;
	BOOL _invalidated;
	BOOL _attemptedBootstrap;
	BOOL _launchFinalized;
	BOOL _launchSuccess;
	BOOL _submittedLaunchRequest;
	long long _executableLivesOnSystemPartition;
	int _pendingExit;
	double _execTime;
	RBSTarget* _target;

}

@property (nonatomic,readonly) BOOL executableLivesOnSystemPartition; 
@property (nonatomic,readonly) long long backgroundingPolicy;                                  //@synthesize backgroundingPolicy=_backgroundingPolicy - In the implementation block
@property (nonatomic,readonly) double execTime;                                                //@synthesize execTime=_execTime - In the implementation block
@property (nonatomic,readonly) RBSTarget * target;                                             //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) FBProcessState * state; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBProcessExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
@property (nonatomic,readonly) FBProcessExitContext * exitContext; 
@property (nonatomic,readonly) int pid;                                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * handle;                                       //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * identity;                                  //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) FBSApplicationInfo * applicationInfo;                           //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (nonatomic,readonly) BOOL finishedLaunching;                                         //@synthesize launchSuccess=_launchSuccess - In the implementation block
@property (getter=isPendingExit,nonatomic,readonly) BOOL pendingExit; 
@property (getter=isBeingDebugged,nonatomic,readonly) BOOL beingDebugged; 
@property (nonatomic,readonly) FBWorkspace * workspace;                                        //@synthesize workspace=_workspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
+(id)calloutQueue;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)invalidate;
-(RBSTarget *)target;
-(BSProcessHandle *)handle;
-(NSString *)bundleIdentifier;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBProcessState *)state;
-(BOOL)isRunning;
-(id)valueForEntitlement:(id)arg1 ;
-(RBSProcessIdentity *)identity;
-(int)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)processPredicate;
-(BSMachPortTaskNameRight *)taskNameRight;
-(BOOL)isForeground;
-(BOOL)isSystemApplicationProcess;
-(double)execTime;
-(FBProcessExecutionContext *)executionContext;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(FBWorkspace *)workspace;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3 ;
-(BOOL)isExtensionProcess;
-(BOOL)isApplicationProcess;
-(BOOL)isPendingExit;
-(void)_notePendingExitForReason:(id)arg1 ;
-(void)_queue_dropAssertions;
-(void)_queue_bootstrapAndExec;
-(void)_queue_executeLaunchCompletionBlocks:(BOOL)arg1 ;
-(void)_queue_rebuildState;
-(void)_queue_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_setTaskState:(long long)arg1 ;
-(void)_queue_updateStateWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_setVisibility:(long long)arg1 ;
-(id)_queue_createBootstrapContext;
-(void)_queue_setPid:(int)arg1 ;
-(void)_queue_rebuildState:(id)arg1 ;
-(void)_queue_noteLaunchWillComplete;
-(void)_queue_processDidExitWithContext:(id)arg1 ;
-(void)_queue_launchComplete:(id)arg1 ;
-(void)_queue_noteLaunchDidComplete:(BOOL)arg1 ;
-(void)_queue_noteProcessDidExit:(id)arg1 ;
-(void)_queue_setDebugging:(BOOL)arg1 ;
-(void)launchWithDelegate:(id)arg1 ;
-(FBProcessExitContext *)exitContext;
-(BOOL)isBeingDebugged;
-(FBSApplicationInfo *)applicationInfo;
-(BOOL)executableLivesOnSystemPartition;
-(void)_executeBlockAfterLaunchCompletes:(/*^block*/id)arg1 ;
-(void)_queue_sceneLifecycleStateChanged:(id)arg1 ;
-(void)_updateCPUStatistics;
-(BOOL)_wantsStateUpdates;
-(void)_noteStateDidUpdate:(id)arg1 ;
-(id)_queue_newWatchdogForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)finishedLaunching;
-(long long)backgroundingPolicy;
@end

