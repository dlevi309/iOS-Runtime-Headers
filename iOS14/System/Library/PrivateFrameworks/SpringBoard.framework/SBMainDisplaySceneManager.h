/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSceneManager.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/SBSuspendedUnderLockManagerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol BSInvalidatable, SBIdleTimerCoordinating;
@class SBMainDisplayPolicyAggregator, UIApplicationSceneClientSettingsDiffInspector, FBSSceneClientSettingsDiffInspector, SBFaceContactExpectationManager, SBMedusaHostedKeyboardWindow, NSMutableSet, SBSuspendedUnderLockManager, NSHashTable, NSMutableDictionary, SBMainDisplayLayoutStateManager, NSArray, UIWindow, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutViewController, NSString;

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, SBIdleTimerProviding> {

	SBMainDisplayPolicyAggregator* _policyAggregator;
	UIApplicationSceneClientSettingsDiffInspector* _internalClientSettingsDiffInspector;
	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	FBSSceneClientSettingsDiffInspector* _externalClientSettingsDiffInspector;
	FBSSceneClientSettingsDiffInspector* _keyboardLayersClientSettingsDiffInspector;
	long long _validInterfaceOrientation;
	unsigned long long _validInterfaceOrientationChangeCount;
	unsigned long long _processedValidInterfaceOrientationChangeCount;
	SBFaceContactExpectationManager* _faceContactExpectationManager;
	SBMedusaHostedKeyboardWindow* _medusaHostedKeyboardWindow;
	NSMutableSet* _requiredContextIdentifiersForMedusaDraggingDestination;
	BOOL _didAddSceneLayoutViewControllerWindowContextIdentifier;
	SBSuspendedUnderLockManager* _lazy_suspendedUnderLockManager;
	NSHashTable* _preventAdditionalMedusaSnapshotsAssertions;
	NSMutableDictionary* _sceneIdentifierToIgnoreSuspendedUnderLockAssertions;
	id<BSInvalidatable> stateCaptureInvalidatable;
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
@property (nonatomic,readonly) BOOL hasIdleTimerBehaviors; 
@property (assign,getter=isSuspendedUnderLock,nonatomic) BOOL suspendedUnderLock; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                                          //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_layoutStateManagerClass;
+(Class)_sceneLayoutWindowClass;
+(Class)_applicationSceneHandleClass;
-(id)externalApplicationSceneHandles;
-(void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2 ;
-(id)existingSceneHandleForScene:(id)arg1 ;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(id)externalForegroundApplicationSceneHandles;
-(id)initWithReference:(id)arg1 ;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)addObserver:(id)arg1 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg1 supportsMultiwindow:(BOOL)arg2 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)isSuspendedUnderLock;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 ;
-(id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg1 ;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)_createRootWindowScenePresentationBinder;
-(id)_proposeIdleTimerBehaviorForReason:(id)arg1 ;
-(id)newMedusaHostedKeyboardWindowLevelAssertionWithPriority:(unsigned long long)arg1 windowLevel:(double)arg2 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(BOOL)_isExternalForegroundScene:(id)arg1 ;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg1 ;
-(id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg1 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)acquireIgnoreSuspendedUnderLockAssertionForSceneIdentifier:(id)arg1 reason:(id)arg2 ;
-(id)_identifierForApplication:(id)arg1 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)suspendedUnderLockManagerVisibleScenesInLayoutState:(id)arg1 ;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_newSceneLayoutViewController;
-(BOOL)hasIdleTimerBehaviors;
-(void)_userInterfaceStyleArbiterStyleChanged:(id)arg1 ;
-(BOOL)suspendedUnderLockManager:(id)arg1 shouldPreventSuspendUnderLockForScene:(id)arg2 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg1 ;
-(void)_updateMedusaHostedKeyboardWindow;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg1 ;
-(id)_sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(BOOL)arg2 ;
-(id)_externalClientSettingsDiffInspector;
-(id)_keyboardLayersClientSettingsDiffInspector;
-(id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2 ;
-(id)runningApplicationScenes:(id)arg1 ;
-(id)window;
-(void)removeObserver:(id)arg1 ;
-(void)_updateValidInterfaceOrientationForTransitionContext:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_animateGeometryChangesForExternalForegroundApplicationScenes;
-(void)_updateDeviceOrientation:(long long)arg1 ifNeededForScene:(id)arg2 ;
-(NSArray *)_requiredContextIdentifiersForMedusaDraggingDestination;
-(id)_sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 allowCanMatches:(BOOL)arg4 preferNewScene:(BOOL)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7 ;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(BOOL)_isKeyboardVisibleForSpringBoard;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1 ;
-(void)createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addMedusaDraggingDestinationWindow:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(void)_updateLevelAndBackgroundSettingsForScene:(id)arg1 transitionContext:(id)arg2 ;
-(void)_removeMedusaDraggingDestinationWindow:(id)arg1 ;
-(void)_updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(BOOL*)arg2 ;
-(BOOL)_isUsingMedusaHostedKeyboardWindow;
-(UIWindow *)_medusaHostedKeyboardWindow;
-(void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 alongsideWillChangeBlock:(/*^block*/id)arg2 alongsideDidChangeBlock:(/*^block*/id)arg3 ;
-(id)_internalClientSettingsDiffInspector;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleIdentifiers:(id)arg5 ;
-(id)_appClientSettingsDiffInspector;
-(void)dealloc;
-(void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(BOOL)arg2 prefersTouchCancellationDisabled:(BOOL)arg3 validator:(/*^block*/id)arg4 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
@end

