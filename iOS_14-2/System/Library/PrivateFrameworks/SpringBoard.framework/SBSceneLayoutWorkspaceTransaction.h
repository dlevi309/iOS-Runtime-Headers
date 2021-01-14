/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionGroupDelegate.h>
#import <libobjc.A.dylib/FBApplicationUpdateScenesTransactionObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate;
@class FBDisplayLayoutTransition, SBSceneLayoutSynchronizeTransitionTransaction, SBWorkspaceApplicationSceneTransitionContext, FBSynchronizedTransactionGroup, SBSceneBackgroundedStatusAssertion, NSMutableSet, SBWorkspaceTransitionRequest, NSSet, NSString;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction> {

	id<SBSceneLayoutWorkspaceTransactionDelegate> _delegate;
	unsigned long long _options;
	FBDisplayLayoutTransition* _fbLayoutTransition;
	BOOL _isTransitioning;
	BOOL _transitionFailed;
	BOOL _delegateTransitionComplete;
	BOOL _performSceneUpdates;
	BOOL _waitForSceneUpdates;
	BOOL _waitingForSynchronizedCommit;
	SBSceneLayoutSynchronizeTransitionTransaction* _synchronizePrepareTransitionTransaction;
	SBSceneLayoutSynchronizeTransitionTransaction* _synchronizeSendActivationResultTransaction;
	SBSceneLayoutSynchronizeTransitionTransaction* _synchronizeBeginTransitionTransaction;
	SBSceneLayoutSynchronizeTransitionTransaction* _synchronizeAddSlavesTransaction;
	SBWorkspaceApplicationSceneTransitionContext* _transitionContext;
	FBSynchronizedTransactionGroup* _sceneUpdateTransactionGroup;
	SBSceneBackgroundedStatusAssertion* _scenesBackgroundedStatusAssertion;
	NSMutableSet* _updateTransactions;
	NSMutableSet* _fromAppSceneEntities;
	NSMutableSet* _foregroundingAppSceneEntities;
	NSMutableSet* _backgroundingAppSceneEntities;
	NSMutableSet* _scenesToBackground;
	SBWorkspaceTransitionRequest* _interruptingTransitionRequest;
	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;

}

@property (assign,nonatomic,__weak) id<SBSceneLayoutWorkspaceTransactionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                        //@synthesize options=_options - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning;                                       //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationSceneTransitionContext * transitionContext;                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSSet * sceneUpdateTransactions;                                                 //@synthesize updateTransactions=_updateTransactions - In the implementation block
@property (nonatomic,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) NSSet * fromApplicationSceneEntities;                                            //@synthesize fromAppSceneEntities=_fromAppSceneEntities - In the implementation block
@property (nonatomic,readonly) NSSet * foregroundingApplicationSceneEntities;                                   //@synthesize foregroundingAppSceneEntities=_foregroundingAppSceneEntities - In the implementation block
@property (nonatomic,readonly) NSSet * backgroundingApplicationSceneEntities;                                   //@synthesize backgroundingAppSceneEntities=_backgroundingAppSceneEntities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_completeTransition;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(id)sceneManager;
-(void)_willFailWithReason:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_captureAppsForTransition;
-(NSSet *)fromApplicationSceneEntities;
-(void)_begin;
-(void)_updateAggregateDictionary;
-(void)_willBegin;
-(void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1 ;
-(id<SBSceneLayoutWorkspaceTransactionDelegate>)delegate;
-(SBWorkspaceApplicationSceneTransitionContext *)transitionContext;
-(void)_didComplete;
-(NSSet *)sceneUpdateTransactions;
-(BOOL)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2 ;
-(unsigned long long)options;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(long long)_orientationForFollowOnRotationIfNeeded;
-(void)_updateScenesForTransitionCompletion;
-(BOOL)_sceneEntities:(id)arg1 hasEntityRepresentingSceneID:(id)arg2 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2 ;
-(void)setDelegate:(id<SBSceneLayoutWorkspaceTransactionDelegate>)arg1 ;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2 ;
-(void)_prepareScenesForTransition;
-(void)_updateKeyboardContextMaskStyles:(BOOL)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(BOOL)_overrideInterfaceOrientationForOrientationMismatch:(long long*)arg1 ;
-(BOOL)isTransitioning;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)transaction:(id)arg1 willUpdateScene:(id)arg2 ;
-(void)_beginLayoutTransition;
-(void)_sendActivationResultWithError:(id)arg1 ;
-(void)performSynchronizedCommit;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)_performTransition;
-(void)_prepareLayoutTransition;
-(BOOL)isReadyForSynchronizedCommit;
-(void)_evaluateTransitionCompletion;
-(NSSet *)backgroundingApplicationSceneEntities;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(NSSet *)foregroundingApplicationSceneEntities;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(void)dealloc;
-(void)_prepareScenesForSceneUpdates;
-(NSSet *)toApplicationSceneEntities;
@end

