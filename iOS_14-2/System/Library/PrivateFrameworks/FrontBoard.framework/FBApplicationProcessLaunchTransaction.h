/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBProcess *)process;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(id)init;
-(void)_didComplete;
-(void)_queue_launchProcess:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(BOOL)failedLaunch;
-(BOOL)exited;
-(void)removeObserver:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_queue_noteExited;
-(void)_willComplete;
-(id)initWithApplicationProcess:(id)arg1 ;
-(void)_queue_finishProcessLaunch:(BOOL)arg1 ;
-(id)initWithProcessIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_queue_processWillLaunch:(id)arg1 ;
@end

