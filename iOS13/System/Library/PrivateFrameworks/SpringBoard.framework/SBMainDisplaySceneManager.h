/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSceneManager.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/SBSuspendedUnderLockManagerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol SBIdleTimerCoordinating;
@class SBMainDisplayPolicyAggregator, UIApplicationSceneClientSettingsDiffInspector, FBSSceneClientSettingsDiffInspector, SBFaceContactExpectationManager, SBMedusaHostedKeyboardWindow, NSMutableSet, SBSuspendedUnderLockManager, NSHashTable, SBMainDisplayLayoutStateManager, NSArray, UIWindow, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutViewController, NSString;

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, SBIdleTimerProviding> {

	SBMainDisplayPolicyAggregator* _policyAggregator;
	UIApplicationSceneClientSettingsDiffInspector* _internalClientSettingsDiffInspector;
	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	FBSSceneClientSettingsDiffInspector* _externalClientSettingsDiffInspector;
	long long _validInterfaceOrientation;
	unsigned long long _validInterfaceOrientationChangeCount;
	unsigned long long _processedValidInterfaceOrientationChangeCount;
	SBFaceContactExpectationManager* _faceContactExpectationManager;
	SBMedusaHostedKeyboardWindow* _medusaHostedKeyboardWindow;
	NSMutableSet* _requiredContextIdentifiersForMedusaDraggingDestination;
	BOOL _didAddSceneLayoutViewControllerWindowContextIdentifier;
	SBSuspendedUnderLockManager* _lazy_suspendedUnderLockManager;
	NSHashTable* _preventAdditionalMedusaSnapshotsAssertions;
	BOOL _isUsingMedusaHostedKeyboardWindow;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;

}

@property (nonatomic,readonly) SBMainDisplayLayoutStateManager * _layoutStateManager; 
@property (nonatomic,readonly) NSArray * _requiredContextIdentifiersForMedusaDraggingDestination; 
@property (getter=_isKeyboardVisibleForSpringBoard,nonatomic,readonly) BOOL _isKeyboardVisibleForSpringBoard; 
@property (getter=_isUsingMedusaHostedKeyboardWindow,nonatomic,readonly) BOOL _isUsingMedusaHostedKeyboardWindow;              //@synthesize isUsingMedusaHostedKeyboardWindow=_isUsingMedusaHostedKeyboardWindow - In the implementation block
@property (nonatomic,readonly) UIWindow * _medusaHostedKeyboardWindow;                                                         //@synthesize medusaHostedKeyboardWindow=_medusaHostedKeyboardWindow - In the implementation block
@property (nonatomic,readonly) SBMainDisplayPolicyAggregator * policyAggregator; 
@property (nonatomic,readonly) SBMainDisplayLayoutState * currentLayoutState; 
@property (nonatomic,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController; 
@property (assign,getter=isSuspendedUnderLock,nonatomic) BOOL suspendedUnderLock; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                                          //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_layoutStateManagerClass;
+(Class)_sceneLayoutWindowClass;
+(Class)_applicationSceneHandleClass;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)window;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(BOOL)isSuspendedUnderLock;
-(id)initWithReference:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)_userInterfaceStyleArbiterStyleChanged:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(id)fetchOrCreateApplicationSceneHandleForApplication:(id)arg1 withIdentity:(id)arg2 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(id)_appClientSettingsDiffInspector;
-(id)externalForegroundApplicationSceneHandles;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(id)_proposeIdleTimerBehaviorForReason:(id)arg1 ;
-(BOOL)_isKeyboardVisibleForSpringBoard;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(id)_createRootWindowScenePresentationBinder;
-(id)_newSceneLayoutViewController;
-(id)existingSceneHandleForSceneIdentity:(id)arg1 ;
-(id)existingSceneHandleForScene:(id)arg1 ;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3 ;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg1 ;
-(id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 ;
-(void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(id)externalApplicationSceneHandles;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg1 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)_sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(BOOL)arg2 ;
-(id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg1 ;
-(void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 ;
-(void)_updateMedusaHostedKeyboardWindow;
-(void)setSuspendedUnderLock:(BOOL)arg1 ;
-(void)createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleIdentifiers:(id)arg5 ;
-(NSArray *)_requiredContextIdentifiersForMedusaDraggingDestination;
-(void)_deviceOrientationChanged:(id)arg1 ;
-(BOOL)_isExternalForegroundScene:(id)arg1 ;
-(void)_updateDeviceOrientation:(long long)arg1 ifNeededForScene:(id)arg2 ;
-(id)_externalClientSettingsDiffInspector;
-(id)_internalClientSettingsDiffInspector;
-(void)_addMedusaDraggingDestinationWindow:(id)arg1 ;
-(void)_updateLevelAndBackgroundSettingsForScene:(id)arg1 transitionContext:(id)arg2 ;
-(id)_sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 allowCanMatches:(BOOL)arg4 preferNewScene:(BOOL)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7 ;
-(id)_identifierForApplication:(id)arg1 ;
-(id)_newSceneIdentifierForApplication:(id)arg1 ;
-(id)_sceneIdentifierForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6 ;
-(void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(BOOL)arg2 prefersTouchCancellationDisabled:(BOOL)arg3 ;
-(BOOL)_animateGeometryChangesForExternalForegroundApplicationScenes;
-(void)_updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(BOOL*)arg2 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1 ;
-(id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2 ;
-(id)runningApplicationScenes:(id)arg1 ;
-(id)suspendedUnderLockManagerVisibleScenesInLayoutState:(id)arg1 ;
-(void)_removeMedusaDraggingDestinationWindow:(id)arg1 ;
-(void)_updateValidInterfaceOrientationForTransitionContext:(id)arg1 ;
-(UIWindow *)_medusaHostedKeyboardWindow;
-(BOOL)_isUsingMedusaHostedKeyboardWindow;
@end

