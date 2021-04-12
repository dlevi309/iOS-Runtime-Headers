/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBTransaction.h>

@class FBProcessManager, RBSProcessIdentity, FBProcess, FBWaitForProcessDeathTransaction, FBProcessExecutionContext, BSAtomicSignal;

@interface FBApplicationProcessLaunchTransaction : FBTransaction {

	FBProcessManager* _processManager;
	RBSProcessIdentity* _identity;
	FBProcess* _process;
	/*^block*/id _executionContextProvider;
	FBWaitForProcessDeathTransaction* _deathTransaction;
	FBProcessExecutionContext* _executionContext;
	BSAtomicSignal* _interruptedOrComplete;
	BOOL _failedLaunch;
	BOOL _exited;

}

@property (nonatomic,readonly) FBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) BOOL failedLaunch;                //@synthesize failedLaunch=_failedLaunch - In the implementation block
@property (nonatomic,readonly) BOOL exited;                      //@synthesize exited=_exited - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBProcess *)process;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(void)_willComplete;
-(void)_didComplete;
-(void)_willInterruptWithReason:(id)arg1 ;
-(id)initWithProcessIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_queue_launchProcess:(id)arg1 ;
-(void)_queue_processWillLaunch:(id)arg1 ;
-(void)_queue_finishProcessLaunch:(BOOL)arg1 ;
-(id)initWithApplicationProcess:(id)arg1 ;
-(void)_queue_noteExited;
-(BOOL)failedLaunch;
-(BOOL)exited;
@end

