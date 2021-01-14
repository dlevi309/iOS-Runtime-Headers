/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFluidGestureDismissable.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SiriPresentationSpringBoardMainScreenViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/CSCoverSheetOverlaying.h>

@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerCoordinating;
@class SBFluidDismissalState, BSEventQueue, NSString, SBAssistantWindow, SBAssistantActiveInterfaceOrientationWindow, SBFAuthenticationAssertion, NSHashTable, UIApplicationSceneDeactivationAssertion, SBHomeGestureParticipant, SiriPresentationSpringBoardMainScreenViewController, FBDisplayLayoutElement, NSSet, SBSystemAnimationSettings, NSMutableArray, UITapGestureRecognizer, SBHomeGesturePanGestureRecognizer, UIPanGestureRecognizer, SBTransientOverlayViewController;

@interface SBAssistantController : NSObject <SBFluidGestureDismissable, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying> {

	BSEventQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
	SBAssistantActiveInterfaceOrientationWindow* _assistantActiveInterfaceOrientationWindow;
	BOOL _unlockedDevice;
	BOOL _isHidingOtherWindows;
	SBFAuthenticationAssertion* _disableAssertion;
	NSHashTable* _observers;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	id<BSInvalidatable> _deferOrientationUpdatesAssertion;
	SBHomeGestureParticipant* _homeGestureParticipant;
	SiriPresentationSpringBoardMainScreenViewController* _mainScreenSiriPresentation;
	SiriPresentationSpringBoardMainScreenViewController* _presentedMainScreenSiriPresentation;
	BOOL _visible;
	BOOL _dismissing;
	FBDisplayLayoutElement* _mainDisplayLayoutElement;
	SBFluidDismissalState* _fluidDismissalState;
	NSSet* _audioCategoriesDisablingVolumeHUD;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertion;
	SBSystemAnimationSettings* _settings;
	id<SBIdleTimer> _idleTimer;
	NSMutableArray* _windowLevelAssertions;
	UITapGestureRecognizer* _tapToDismissSiriGestureRecognizer;
	SBHomeGesturePanGestureRecognizer* _bottomEdgeDismissGestureRecognizer;
	BOOL _shouldPassTapsThroughToSiri;
	BOOL _shareHomeGesture;
	BOOL _tapsDismissSiri;
	BOOL _swipesDismissSiri;
	UIPanGestureRecognizer* _panToDismissSiriGestureRecognizer;
	long long _homeAffordanceSuppression;
	BOOL _siriWantsToShowHomeAffordance;
	SBTransientOverlayViewController* _topmostTransientViewControllerAtPresentation;
	BOOL _screenShotServicesIsRunning;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;

}

@property (nonatomic,retain) SBFluidDismissalState * fluidDismissalState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                                                             //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL unlockedDevice;                                                                                                              //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                                                                                                    //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) BOOL contentObscuresScreen; 
@property (nonatomic,readonly) BOOL preventsCoverSheetPresentation; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
+(id)sharedInstance;
+(void)bootstrapServices;
+(id)sharedInstanceIfExists;
+(BOOL)shouldDismissSiriForGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
+(BOOL)isVisible;
+(BOOL)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_createAssistantWindowIfNecessaryForSiriPresentationOptions:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_teardownWindowInUse;
-(void)setFluidDismissalState:(SBFluidDismissalState *)arg1 ;
-(void)_dismissForMainScreenWithFactory:(id)arg1 dismissalOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_viewWillAppearOnMainScreen:(BOOL)arg1 ;
-(void)_turnScreenOffWithCompletion:(/*^block*/id)arg1 ;
-(void)conformsToCSExternalBehaviorProviding;
-(id)init;
-(void)_updateHomeGestureParticipant;
-(void)_viewWillDisappearOnMainScreen:(BOOL)arg1 ;
-(void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(id)arg1 ;
-(void)_setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)applicationProcessDidChangeState:(id)arg1 ;
-(void)_toggleModalAlertHidingAssertion:(BOOL)arg1 ;
-(void)_setVisible:(BOOL)arg1 ;
-(BOOL)overrideInterfaceOrientation:(long long*)arg1 ;
-(void)_removeScreenEdgePanGestureRecognizerIfNecessary;
-(id)_createPanToDismissSiriGestureRecognizer;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(void)_updateRootViewControllerShowsHomeAffordance:(BOOL)arg1 ;
-(void)_pannedToDismissSiri:(id)arg1 ;
-(void)_setTouchesPassThroughToSpringBoard:(BOOL)arg1 ;
-(void)dismissAssistantViewIfNecessaryForGestureTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_updateDockViewFrame:(CGRect)arg1 ;
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(void)_viewDidDisappearOnMainScreen:(BOOL)arg1 ;
-(void)_prototypeSettingsChanged;
-(id)_idleTimerCoordinator;
-(BOOL)unlockedDevice;
-(void)deviceUnlockRequestedWithPassword:(id)arg1 ;
-(void)siriPresentation:(id)arg1 didUpdateHomeGestureSharing:(BOOL)arg2 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)proximityDetectionMode;
-(BOOL)requestPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)_configurePanToDismissGestureDependencies;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)_updateRootViewControllerOwnsHomeGesture;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(void)screenWakeRequested;
-(NSString *)coverSheetIdentifier;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg2 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)screenWakeIdleTimerResetRequested;
-(void)siriPresentation:(id)arg1 isEnabledDidChange:(BOOL)arg2 ;
-(id)activationSettings;
-(void)_presentForMainScreenAnimated:(BOOL)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 dismissalOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureHomeGesture;
-(BOOL)preventsCoverSheetPresentation;
-(void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)rootViewController;
-(void)_removeHomeGesture;
-(void)_updateSceneClientSettings;
-(void)_resetSystemGestures;
-(void)_setUnlockedDevice:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)_remoteLocked:(id)arg1 ;
-(void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2 ;
-(id)window;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SBFluidDismissalState *)fluidDismissalState;
-(long long)idleTimerDuration;
-(BOOL)contentObscuresScreen;
-(long long)idleTimerMode;
-(void)_handleBottomEdgeDismissGesture:(id)arg1 ;
-(id)_siriHomeAffordanceSuppressionAsString:(long long)arg1 ;
-(long long)participantState;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)_updateWindowLevel;
-(void)_updateOrientationLock;
-(void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_commonHandlerForSiriDismissalGesture:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_dockFrameDidChange:(id)arg1 ;
-(void)_tearDownSystemGestures;
-(long long)idleWarnMode;
-(void)_updateOrbLocation:(id)arg1 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(void)siriPresentation:(id)arg1 setHomeAffordanceSuppression:(long long)arg2 ;
-(BOOL)shouldShowSystemVolumeHUDForCategory:(id)arg1 ;
-(id)_init;
-(BOOL)isEnabled;
-(id)_createTapToDimissSiriGestureRecognizer;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg2 ;
-(void)_tappedToDismissSiri:(id)arg1 ;
-(id)_activationSettingsWithPunchoutStyle:(long long)arg1 ;
-(id)mainScreenView;
-(void)siriPresentation:(id)arg1 setShowsHomeAffordance:(BOOL)arg2 ;
-(void)_setShareHomeGesture:(BOOL)arg1 ;
-(void)_uiLocked:(id)arg1 ;
-(void)_setupSystemGestures;
-(void)dismissAssistantViewIfNecessaryWithDismissalOptions:(id)arg1 ;
-(long long)scrollingStrategy;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 ;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)_idleTimerBehavior;
-(void)_deviceBlocked:(id)arg1 ;
-(void)_updateShouldPassTapsThrough;
-(void)_viewDidAppearOnMainScreen:(BOOL)arg1 ;
-(void)_restoreOrientation;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg2 ;
-(unsigned long long)restrictedCapabilities;
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTapsThroughTo:(BOOL)arg2 ;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2 ;
-(BOOL)shouldShowLockStatusBarTime;
-(void)dealloc;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(void)dismissAssistantViewIfNecessary;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end

