/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BSCopyingCacheSet* _windowScenes;
	BSCopyingCacheSet* _daemonScenes;
	BSCopyingCacheSet* _pluginScenes;
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)isValid;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isHidden;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(SBSceneLayoutWindow *)window;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(FBSDisplayIdentity *)displayIdentity;
-(void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2 ;
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(id)initWithReference:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3 ;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(id)externalForegroundApplicationSceneHandles;
-(SBPolicyAggregator *)policyAggregator;
-(SBLayoutState *)currentLayoutState;
-(SBLayoutStateTransitionCoordinator *)_layoutStateTransitionCoordinator;
-(id)_createRootWindowScenePresentationBinder;
-(void)_noteObserversDidInvalidate;
-(id)_sceneWindowLayoutStrategy;
-(SBSceneLayoutViewController *)sceneLayoutViewController;
-(BOOL)_windowShouldBeHidden;
-(void)_doObserverCalloutWithBlock:(/*^block*/id)arg1 ;
-(id)_newSceneLayoutViewController;
-(id)existingSceneHandleForSceneIdentity:(id)arg1 ;
-(void)_updateStateForScene:(id)arg1 withSettings:(id)arg2 ;
-(void)_setupLayoutStateTransitionCoordinator:(id)arg1 ;
-(id)existingSceneHandleForScene:(id)arg1 ;
-(void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg1 ;
-(void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg1 ;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(id)slaveTransactionsForTransitionRequest:(id)arg1 ;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2 orScene:(id)arg3 ;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg1 ;
-(id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 ;
-(void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2 ;
-(void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(BOOL)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(void)setCurrentLayoutState:(SBLayoutState *)arg1 ;
-(id)allScenes;
-(id)windowScenes;
-(id)externalApplicationSceneHandles;
-(id)daemonScenes;
-(id)pluginScenes;
-(id)scenesForWorkspaceWithID:(id)arg1 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg1 ;
-(id)assertBackgroundedStatusForScenes:(id)arg1 ;
-(void)addSlaveTransactionProvider:(id)arg1 ;
-(void)removeSlaveTransactionProvider:(id)arg1 ;
-(SBLayoutStateManager *)_layoutStateManager;
-(id)transientApplicationSceneHandleIdentityForApplication:(id)arg1 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2 ;
@end

