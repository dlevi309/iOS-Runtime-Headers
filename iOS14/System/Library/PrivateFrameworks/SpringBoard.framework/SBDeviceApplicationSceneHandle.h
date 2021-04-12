/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationSceneHandle.h>
#import <libobjc.A.dylib/FBApplicationProcessObserver.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol SBIdleTimerCoordinating;
@class SBModalAlertPresenter, NSMutableSet, NSDictionary, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, SBDeviceApplicationSceneStatusBarStateProvider, NSString, _UIStatusBarData, NSData;

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
	NSString* _lastActivationIconLeafIdentifier;
	CGRect _statusBarAvoidanceFrame;

}

@property (assign,setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,nonatomic) long long lastActivationSource;                                                                                                     //@synthesize lastActivationSource=_lastActivationSource - In the implementation block
@property (nonatomic,copy) NSString * lastActivationIconLeafIdentifier;                                                                                          //@synthesize lastActivationIconLeafIdentifier=_lastActivationIconLeafIdentifier - In the implementation block
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
-(id)newSceneViewWithReferenceSize:(CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 ;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(int)effectiveStatusBarStyleOverrides;
-(void)addObserver:(id)arg1 ;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1 ;
-(id)newSceneViewController;
-(BOOL)isEffectivelyForeground;
-(long long)wallpaperStyle;
-(void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4 ;
-(void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)setHasMainSceneBeenForegroundAtLeastOnce:(BOOL)arg1 ;
-(BOOL)_mainSceneSupportsInterfaceOrientation:(long long)arg1 ;
-(void)setStatusBarAvoidanceFrame:(CGRect)arg1 ;
-(BOOL)isStatusBarHiddenForActivation:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)isTranslucent;
-(long long)activationBias;
-(long long)_statusBarStyleWithActivationSettings:(id)arg1 ;
-(void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(long long)backgroundStyle;
-(id)_sceneCornerRadiusConfigurationFromRequestContext:(id)arg1 forEntity:(id)arg2 ;
-(SBDeviceApplicationSceneStatusBarStateProvider *)statusBarStateProvider;
-(void)_noteActivationConditionsChanged;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)defaultStatusBarHiddenForOrientation:(long long)arg1 ;
-(CGRect)statusBarAvoidanceFrame;
-(void)setStatusBarForceHidden:(BOOL)arg1 forReason:(id)arg2 animationSettings:(id)arg3 ;
-(void)_didDestroyScene:(id)arg1 ;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(id)_potentiallyJailedDisplayConfiguration;
-(id)_idleTimerCoordinator;
-(unsigned long long)_mainSceneSupportedInterfaceOrientations;
-(double)statusBarHeightForOrientation:(long long)arg1 ;
-(long long)lastActivationSource;
-(long long)currentInterfaceOrientation;
-(id)mostRecentSceneSnapshotsForScale:(double)arg1 launchingOrientation:(long long)arg2 ;
-(BOOL)shouldAlwaysDisplayLiveContent;
-(void)_didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(double)statusBarAlpha;
-(id)_generateIdleTimerBehavior;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(BOOL)hasMainSceneBeenForegroundAtLeastOnce;
-(id)additionalActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;
-(id)effectiveStatusBarStyleRequestForActivation:(id)arg1 ;
-(BOOL)_overriddenStatusBarStyleForApp:(id)arg1 style:(out long long*)arg2 ;
-(void)setLastActivationSource:(long long)arg1 ;
-(long long)activationInterfaceOrientationForCurrentOrientation;
-(id)displayEdgeInfoForForLayoutEnvironment:(long long)arg1 isInsetForHomeAffordance:(BOOL)arg2 ;
-(NSString *)lastActivationIconLeafIdentifier;
-(void)setKeyboardContextMaskStyle:(unsigned long long)arg1 ;
-(void)setAlertSuppressionContextsBySectionIdentifier:(id)arg1 ;
-(BOOL)isReachabilitySupported;
-(void)_didCreateScene:(id)arg1 ;
-(BOOL)shouldPrioritizeForSwitcherOrdering;
-(BOOL)isEdgeProtectEnabledForHomeGesture;
-(long long)_resumingInterfaceOrientationForOrientation:(long long)arg1 ;
-(double)defaultStatusBarAlpha;
-(void)_noteMainSceneBackgroundStyleChanged;
-(BOOL)isStatusBarForcedHiddenForOrientation:(long long)arg1 ;
-(BOOL)isShowingModalAlert;
-(void)removeObserver:(id)arg1 ;
-(long long)whitePointAdaptivityStyle;
-(void)_populateSettingsWithDefaultStatusBarHeight:(id)arg1 ;
-(NSString *)sceneTitle;
-(BOOL)forbidsActivationByBreadcrumbAction;
-(long long)_launchingInterfaceOrientationForOrientation:(long long)arg1 ;
-(long long)statusBarParts;
-(long long)currentStatusBarStyle;
-(id)_sceneDataStoreCreatingIfNecessary:(BOOL)arg1 ;
-(long long)statusBarOrientation;
-(BOOL)wantsDeviceOrientationEventsEnabled;
-(BOOL)isCurrentStatusBarHiddenForOrientation:(long long)arg1 ;
-(unsigned long long)preferredHardwareButtonEventTypes;
-(void)setStatusBarParts:(long long)arg1 ;
-(void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)setLastActivationIconLeafIdentifier:(NSString *)arg1 ;
-(void)_updateSceneHostingInfoForSnapshottingWithView:(id)arg1 ;
-(long long)defaultStatusBarStyle;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(BOOL)prefersHeaderHiddenInSwitcher;
-(void)_commonInit;
-(void)_noteSceneTitleChanged;
-(void)_updateIdleTimerForReason:(id)arg1 ;
-(BOOL)isDeviceApplicationSceneHandle;
-(id)currentEffectiveStatusBarStyleRequest;
-(void)_modifySafeAreaInsetsOnApplicationSceneSettings:(id)arg1 isInsetForHomeAffordance:(BOOL)arg2 isFloating:(BOOL)arg3 ;
-(NSData *)activationConditionsData;
-(SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
-(id)statusBarEffectiveStyleRequestWithStyle:(long long)arg1 ;
-(long long)_initialMainSceneCompabilityMode:(id)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(id)_defaultStatusBarHeights;
-(BOOL)isStatusBarForceHidden;
-(int)statusBarStyleOverridesToSuppress;
-(BOOL)isAutoHideEnabledForHomeAffordance;
-(BOOL)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)saveSuspendSnapshot:(id)arg1 ;
-(BOOL)prefersKillingInSwitcherDisabled;
-(long long)activationInterfaceOrientationForOrientation:(long long)arg1 ;
-(long long)defaultInterfaceOrientation;
-(BOOL)handleHardwareButtonEventType:(long long)arg1 ;
-(double)defaultStatusBarHeightForOrientation:(long long)arg1 ;
-(void)dealloc;
-(_UIStatusBarData *)overlayStatusBarData;
@end

