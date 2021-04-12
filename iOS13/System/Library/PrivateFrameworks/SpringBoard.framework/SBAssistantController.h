/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFluidGestureDismissable.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBFAuthenticationResponder.h>
#import <libobjc.A.dylib/SiriPresentationSpringBoardMainScreenViewControllerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/CSCoverSheetOverlaying.h>

@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerCoordinating;
@class SBFluidDismissalState, BSEventQueue, NSString, SBAssistantWindow, SBFAuthenticationAssertion, NSHashTable, UIApplicationSceneDeactivationAssertion, SBHomeGestureParticipant, SiriPresentationSpringBoardMainScreenViewController, FBDisplayLayoutElement, NSSet, SBSystemAnimationSettings, NSMutableArray;

@interface SBAssistantController : NSObject <SBFluidGestureDismissable, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying> {

	BSEventQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
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
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	id<BSInvalidatable> _suspendWallpaperAnimationAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBFluidDismissalState * fluidDismissalState; 
@property (nonatomic,retain) id<BSInvalidatable> suspendWallpaperAnimationAssertion;                                                                             //@synthesize suspendWallpaperAnimationAssertion=_suspendWallpaperAnimationAssertion - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;              //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL unlockedDevice;                                                                                                              //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                                                                                                    //@synthesize visible=_visible - In the implementation block
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
+(BOOL)isVisible;
+(id)sharedInstanceIfExists;
+(void)bootstrapServices;
+(BOOL)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isVisible;
-(id)window;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_setVisible:(BOOL)arg1 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(long long)idleTimerMode;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(BOOL)shouldShowLockStatusBarTime;
-(long long)participantState;
-(void)setFluidDismissalState:(SBFluidDismissalState *)arg1 ;
-(BOOL)requestPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)siriPresentation:(id)arg1 isEnabledDidChange:(BOOL)arg2 ;
-(void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)screenWakeRequested;
-(void)screenWakeIdleTimerResetRequested;
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2 ;
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(id<BSInvalidatable>)suspendWallpaperAnimationAssertion;
-(void)setSuspendWallpaperAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg1 ;
-(void)dismissAssistantViewIfNecessary;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)activationSettings;
-(id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldShowSystemVolumeHUDForCategory:(id)arg1 ;
-(id)_idleTimerCoordinator;
-(id)_idleTimerBehavior;
-(SBFluidDismissalState *)fluidDismissalState;
-(void)_updateWindowLevel;
-(void)_prototypeSettingsChanged;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(void)_dismissForMainScreenWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_activationSettingsWithPunchoutStyle:(long long)arg1 ;
-(void)_updateRootViewControllerOwnsHomeGesture;
-(void)_updateOrientationLock;
-(void)_toggleModalAlertHidingAssertion:(BOOL)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)deviceUnlockRequestedWithPassword:(id)arg1 ;
-(void)_setUnlockedDevice:(BOOL)arg1 ;
-(void)_uiLocked:(id)arg1 ;
-(void)_deviceBlocked:(id)arg1 ;
-(void)_remoteLocked:(id)arg1 ;
-(void)_restoreOrientation;
-(void)_noteDeviceLockedOrBlocked;
-(void)_updateSceneClientSettings;
-(void)_createAssistantWindowIfNecessary;
-(void)_viewWillAppearOnMainScreen:(BOOL)arg1 ;
-(void)_setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_viewDidAppearOnMainScreen:(BOOL)arg1 ;
-(void)_viewWillDisappearOnMainScreen:(BOOL)arg1 ;
-(void)_viewDidDisappearOnMainScreen:(BOOL)arg1 ;
-(void)_presentForMainScreenAnimated:(BOOL)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)overrideInterfaceOrientation:(long long*)arg1 ;
-(id)mainScreenView;
-(BOOL)unlockedDevice;
@end

