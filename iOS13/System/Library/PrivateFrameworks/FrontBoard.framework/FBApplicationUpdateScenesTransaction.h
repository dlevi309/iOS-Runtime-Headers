/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBSynchronizedTransactionGroup.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUpdateSceneTransactionObserver.h>

@class RBSProcessIdentity, FBApplicationProcessLaunchTransaction, NSMutableArray, FBApplicationProcess, NSString;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {

	RBSProcessIdentity* _identity;
	FBApplicationProcessLaunchTransaction* _processLaunchTransaction;
	BOOL _processLaunched;
	BOOL _waitsForSceneCommits;
	NSMutableArray* _updateSceneTransactions;
	NSMutableArray* _pendingUpdateSceneBlocks;

}

@property (nonatomic,readonly) FBApplicationProcess * process; 
@property (assign,nonatomic) BOOL waitsForSceneCommits;                     //@synthesize waitsForSceneCommits=_waitsForSceneCommits - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)bundleID;
-(FBApplicationProcess *)process;
-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)_willInterruptWithReason:(id)arg1 ;
-(id)initWithProcessIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_executeSceneUpdatesIfAppropriate;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)_noteWillCommitUpdateForScene:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)updateSceneTransactionDidCreateScene:(id)arg1 ;
-(void)updateSceneTransactionWillUpdateScene:(id)arg1 ;
-(void)updateSceneTransactionWillCommitUpdate:(id)arg1 ;
-(void)updateSceneTransactionDidCommitUpdate:(id)arg1 ;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)setWaitsForSceneCommits:(BOOL)arg1 ;
-(void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)waitsForSceneCommits;
@end

