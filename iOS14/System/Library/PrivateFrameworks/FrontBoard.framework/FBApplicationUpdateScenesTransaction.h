/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBSynchronizedTransactionGroup.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>
#import <libobjc.A.dylib/FBUpdateSceneTransactionObserver.h>

@class FBSSceneClientIdentity, FBApplicationProcessLaunchTransaction, NSMutableArray, FBApplicationProcess, NSString;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver> {

	FBSSceneClientIdentity* _clientIdentity;
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
-(FBApplicationProcess *)process;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)init;
-(void)_didComplete;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(BOOL)waitsForSceneCommits;
-(void)_executeSceneUpdatesIfAppropriate;
-(void)_willAddChildTransaction:(id)arg1 ;
-(id)initWithClientIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)updateSceneTransactionDidCommitUpdate:(id)arg1 ;
-(void)updateSceneTransactionDidCreateScene:(id)arg1 ;
-(void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)bundleID;
-(id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)updateSceneTransactionWillUpdateScene:(id)arg1 ;
-(void)_noteWillCommitUpdateForScene:(id)arg1 ;
-(void)setWaitsForSceneCommits:(BOOL)arg1 ;
-(void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(id)initWithProcessIdentity:(id)arg1 executionContextProvider:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)updateSceneTransactionWillCommitUpdate:(id)arg1 ;
@end

