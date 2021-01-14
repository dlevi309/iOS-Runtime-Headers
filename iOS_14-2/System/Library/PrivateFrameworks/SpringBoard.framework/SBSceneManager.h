/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSceneLayoutViewControllerDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerDelegate_Private.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/SBApplicationSceneHandleProviding.h>
#import <libobjc.A.dylib/SBSceneLayoutSlaveTransactionProviding.h>

@class UIRootWindowScenePresentationBinder, FBSceneManager, SBSceneManagerReference, SBSceneLayoutWindow, SBSceneLayoutViewController, SBPolicyAggregator, SBLayoutStateManager, SBLayoutStateTransitionCoordinator, NSMapTable, BSCopyingCacheSet, NSCountedSet, NSMutableSet, NSHashTable, SBLayoutState, FBSDisplayIdentity, NSString;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneDelegate, FBSceneManagerDelegate_Private, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding, SBSceneLayoutSlaveTransactionProviding> {

	long long _state;
	UIRootWindowScenePresentationBinder* _rootWindowScenePresentationBinder;
	FBSceneManager* _sceneManager;
	SBSceneManagerReference* _selfReference;
	BOOL _hidden;
	SBSceneLayoutWindow* _window;
	SBSceneLayoutViewController* _sceneLayoutViewController;
	BOOL _layoutControllerHasVisibleElements;
	SBPolicyAggregator* _policyAggregator;
	SBLayoutStateManager* _layoutStateManager;
	SBLayoutStateTransitionCoordinator* _layoutStateTransitionCoordinator;
	NSMapTable* _persistentMapSceneIdentityToSceneHandle;
	NSMapTable* _transientMapSceneIdentityToSceneHandle;
	BSCopyingCacheSet* _allScenes;
	BSCopyingCacheSet* _daemonScenes;
	BSCopyingCacheSet* _workspaceScenes;
	BSCopyingCacheSet* _externalApplicationSceneHandles;
	BSCopyingCacheSet* _externalForegroundApplicationSceneHandles;
	BSCopyingCacheSet* _reportedExternalForegroundApplicationSceneHandles;
	NSCountedSet* _assertedBackgroundScenes;
	NSMutableSet* _outgoingSnapshots;
	NSMutableSet* _incomingSnapshots;
	NSHashTable* _observers;
	BOOL _layoutControllerCreationReentrancyGuard;
	NSMutableSet* _slaveTransactionProviders;
	SBLayoutState* _currentLayoutState;

}

@property (nonatomic,retain) SBLayoutState * currentLayoutState;                                                    //@synthesize currentLayoutState=_currentLayoutState - In the implementation block
@property (nonatomic,readonly) SBLayoutStateManager * _layoutStateManager; 
@property (nonatomic,readonly) SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,readonly) SBSceneLayoutWindow * window; 
@property (nonatomic,readonly) SBSceneLayoutViewController * sceneLayoutViewController; 
@property (nonatomic,readonly) SBPolicyAggregator * policyAggregator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_layoutStateManagerClass;
+(Class)_sceneLayoutWindowClass;
+(Class)_applicationSceneHandleClass;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)externalApplicationSceneHandles;
-(void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2 ;
-(id)existingSceneHandleForScene:(id)arg1 ;
-(void)removeSlaveTransactionProvider:(id)arg1 ;
-(id)daemonScenes;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(id)allScenes;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(id)externalForegroundApplicationSceneHandles;
-(SBLayoutState *)currentLayoutState;
-(id)initWithReference:(id)arg1 ;
-(id)assertBackgroundedStatusForScenes:(id)arg1 ;
-(void)_doObserverCalloutWithBlock:(/*^block*/id)arg1 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(SBSceneLayoutViewController *)sceneLayoutViewController;
-(void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(BOOL)isHidden;
-(id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 ;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(SBPolicyAggregator *)policyAggregator;
-(id)init;
-(id)_sceneWindowLayoutStrategy;
-(SBLayoutStateManager *)_layoutStateManager;
-(void)_setupLayoutStateTransitionCoordinator:(id)arg1 ;
-(id)_createRootWindowScenePresentationBinder;
-(void)setHidden:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg1 ;
-(void)_noteObserversDidInvalidate;
-(NSString *)debugDescription;
-(void)setCurrentLayoutState:(SBLayoutState *)arg1 ;
-(void)addSlaveTransactionProvider:(id)arg1 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(BOOL)arg2 ;
-(void)_reconnectSceneRemnant:(id)arg1 forProcess:(id)arg2 sceneManager:(id)arg3 ;
-(NSString *)description;
-(id)_newSceneLayoutViewController;
-(void)_updateStateForScene:(id)arg1 withSettings:(id)arg2 ;
-(BOOL)isValid;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg1 ;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2 ;
-(id)slaveTransactionsForTransitionRequest:(id)arg1 ;
-(SBSceneLayoutWindow *)window;
-(void)removeObserver:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)invalidate;
-(void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(id)transientApplicationSceneHandlesForApplication:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)scenesForWorkspaceWithID:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(SBLayoutStateTransitionCoordinator *)_layoutStateTransitionCoordinator;
-(void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg1 ;
-(BOOL)_windowShouldBeHidden;
-(void)dealloc;
@end

