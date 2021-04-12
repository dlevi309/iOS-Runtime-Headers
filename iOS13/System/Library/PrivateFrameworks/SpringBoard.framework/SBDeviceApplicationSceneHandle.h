/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationSceneHandle.h>
#import <libobjc.A.dylib/FBApplicationProcessObserver.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol SBIdleTimerCoordinating;
@class SBModalAlertPresenter, NSMutableSet, NSDictionary, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneStatusBarStateProvider, _UIStatusBarData, NSString, NSData;

@interface SBDeviceApplicationSceneHandle : SBApplicationSceneHandle <FBApplicationProcessObserver, SBIdleTimerProviding> {

	long long _lastActivationSource;
	SBModalAlertPresenter* _modalAlertPresenter;
	int _statusBarStyleOverridesToSuppress;
	long long _whitePointAdaptivityStyle;
	NSMutableSet* _statusBarForcedHiddenReasons;
	BOOL _hasMainSceneBeenForegroundAtLeastOnce;
	BOOL _isEffectivelyForeground;
	unsigned long long _keyboardLayerMaskStyle;
	long long _statusBarParts;
	NSDictionary* _alertSuppressionContextsBySectionIdentifier;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	SBDeviceApplicationSceneStatusBarBreadcrumbProvider* _breadcrumbProvider;
	SBDeviceApplicationSceneStatusBarStateProvider* _statusBarStateProvider;
	CGRect _statusBarAvoidanceFrame;

}

@property (assign,setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,nonatomic) long long lastActivationSource;                                                                                                     //@synthesize lastActivationSource=_lastActivationSource - In the implementation block
@property (assign,nonatomic) BOOL hasMainSceneBeenForegroundAtLeastOnce;                                                                                         //@synthesize hasMainSceneBeenForegroundAtLeastOnce=_hasMainSceneBeenForegroundAtLeastOnce - In the implementation block
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress;                                                                                              //@synthesize statusBarStyleOverridesToSuppress=_statusBarStyleOverridesToSuppress - In the implementation block
@property (assign,nonatomic) long long whitePointAdaptivityStyle;                                                                                                //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (assign,nonatomic) long long statusBarParts; 
@property (assign,nonatomic) CGRect statusBarAvoidanceFrame;                                                                                                     //@synthesize statusBarAvoidanceFrame=_statusBarAvoidanceFrame - In the implementation block
@property (getter=isEffectivelyForeground,nonatomic,readonly) BOOL effectivelyForeground;                                                                        //@synthesize isEffectivelyForeground=_isEffectivelyForeground - In the implementation block
@property (getter=isReachabilitySupported,nonatomic,readonly) BOOL reachabilitySupported; 
@property (getter=isShowingModalAlert,nonatomic,readonly) BOOL showingModalAlert; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) long long wallpaperStyle; 
@property (getter=isTranslucent,nonatomic,readonly) BOOL translucent; 
@property (nonatomic,readonly) unsigned long long screenEdgesDeferringSystemGestures; 
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider * breadcrumbProvider;                                                         //@synthesize breadcrumbProvider=_breadcrumbProvider - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneStatusBarStateProvider * statusBarStateProvider; 
@property (nonatomic,copy,readonly) _UIStatusBarData * overlayStatusBarData; 
@property (nonatomic,copy,readonly) NSString * sceneTitle; 
@property (nonatomic,copy,readonly) NSData * activationConditionsData; 
@property (nonatomic,readonly) long long activationBias; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_commonInit;
-(NSData *)activationConditionsData;
-(BOOL)isTranslucent;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1 ;
-(double)statusBarAlpha;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(long long)whitePointAdaptivityStyle;
-(long long)backgroundStyle;
-(long long)defaultStatusBarStyle;
-(BOOL)isReachabilitySupported;
-(int)statusBarStyleOverridesToSuppress;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setStatusBarParts:(long long)arg1 ;
-(void)setStatusBarAvoidanceFrame:(CGRect)arg1 ;
-(double)statusBarHeightForOrientation:(long long)arg1 ;
-(long long)statusBarOrientation;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(long long)currentInterfaceOrientation;
-(void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)_didCreateScene:(id)arg1 ;
-(void)_didDestroyScene:(id)arg1 ;
-(id)displayEdgeInfoForForLayoutEnvironment:(long long)arg1 classicMode:(long long)arg2 isInsetForHomeAffordance:(BOOL)arg3 ;
-(void)_populateSettingsWithDefaultStatusBarHeight:(id)arg1 ;
-(long long)wallpaperStyle;
-(void)_noteMainSceneBackgroundStyleChanged;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(BOOL)isShowingModalAlert;
-(id)additionalActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)statusBarEffectiveStyleRequestWithStyle:(long long)arg1 ;
-(BOOL)defaultStatusBarHiddenForOrientation:(long long)arg1 ;
-(long long)defaultInterfaceOrientation;
-(BOOL)wantsDeviceOrientationEventsEnabled;
-(void)setAlertSuppressionContextsBySectionIdentifier:(id)arg1 ;
-(id)_idleTimerCoordinator;
-(long long)_resumingInterfaceOrientationForOrientation:(long long)arg1 ;
-(long long)_launchingInterfaceOrientationForOrientation:(long long)arg1 ;
-(long long)activationInterfaceOrientationForOrientation:(long long)arg1 ;
-(BOOL)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2 ;
-(_UIStatusBarData *)overlayStatusBarData;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(id)currentEffectiveStatusBarStyleRequest;
-(long long)activationInterfaceOrientationForCurrentOrientation;
-(BOOL)isEffectivelyForeground;
-(id)newSceneViewWithReferenceSize:(CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 ;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1 ;
-(id)newSceneViewController;
-(long long)_statusBarStyleWithActivationSettings:(id)arg1 ;
-(BOOL)_overriddenStatusBarStyleForApp:(id)arg1 style:(out long long*)arg2 ;
-(id)_sceneDataStoreCreatingIfNecessary:(BOOL)arg1 ;
-(long long)currentStatusBarStyle;
-(int)effectiveStatusBarStyleOverrides;
-(id)_potentiallyJailedDisplayConfiguration;
-(BOOL)isStatusBarHiddenForActivation:(id)arg1 forOrientation:(long long)arg2 ;
-(double)defaultStatusBarAlpha;
-(BOOL)isCurrentStatusBarHiddenForOrientation:(long long)arg1 ;
-(id)_defaultStatusBarHeights;
-(BOOL)isAutoHideEnabledForHomeAffordance;
-(unsigned long long)_mainSceneSupportedInterfaceOrientations;
-(BOOL)_mainSceneSupportsInterfaceOrientation:(long long)arg1 ;
-(BOOL)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;
-(NSString *)sceneTitle;
-(void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)_modifySafeAreaInsetsOnApplicationSceneSettings:(id)arg1 isInsetForHomeAffordance:(BOOL)arg2 isFloating:(BOOL)arg3 ;
-(id)_sceneCornerRadiusConfigurationFromRequestContext:(id)arg1 forEntity:(id)arg2 ;
-(BOOL)isStatusBarForcedHiddenForOrientation:(long long)arg1 ;
-(void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4 ;
-(long long)_initialMainSceneCompabilityMode:(id)arg1 ;
-(void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)setLastActivationSource:(long long)arg1 ;
-(id)_generateIdleTimerBehavior;
-(void)saveSuspendSnapshot:(id)arg1 ;
-(id)mostRecentSceneSnapshotsForScale:(double)arg1 launchingOrientation:(long long)arg2 ;
-(SBDeviceApplicationSceneStatusBarStateProvider *)statusBarStateProvider;
-(id)effectiveStatusBarStyleRequestForActivation:(id)arg1 ;
-(BOOL)isStatusBarForceHidden;
-(void)setStatusBarForceHidden:(BOOL)arg1 forReason:(id)arg2 animationSettings:(id)arg3 ;
-(long long)activationBias;
-(void)setKeyboardContextMaskStyle:(unsigned long long)arg1 ;
-(BOOL)isEdgeProtectEnabledForHomeGesture;
-(void)_noteSceneTitleChanged;
-(void)_noteActivationConditionsChanged;
-(void)_updateSceneHostingInfoForSnapshottingWithView:(id)arg1 ;
-(BOOL)isDeviceApplicationSceneHandle;
-(void)_updateIdleTimerForReason:(id)arg1 ;
-(long long)lastActivationSource;
-(BOOL)hasMainSceneBeenForegroundAtLeastOnce;
-(void)setHasMainSceneBeenForegroundAtLeastOnce:(BOOL)arg1 ;
@end

