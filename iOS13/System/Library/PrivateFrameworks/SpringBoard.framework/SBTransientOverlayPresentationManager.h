/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/SBTransientOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>

@protocol BSInvalidatable, CSExternalBehaviorProviding, SBTransientOverlayPresentationManagerDelegate;
@class SBAlertItemsController, SBBannerController, NSMutableArray, NSMapTable, SBHomeGestureArbiter, SBHomeGestureParticipant, SBIdleTimerCoordinatorHelper, UIWindow, SBLockStateAggregator, SBReachabilityManager, UIScreen, SBAppStatusBarSettingsAssertion, SBInAppStatusBarHiddenAssertion, NSNumber, SBTransientOverlayViewController, UIStatusBarStyleRequest, NSString;

@interface SBTransientOverlayPresentationManager : NSObject <SBHomeGestureParticipantDelegate, SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate, SBIdleTimerProviding, SBButtonEventsHandler> {

	SBAlertItemsController* _alertItemsController;
	SBBannerController* _bannerController;
	id<BSInvalidatable> _bannerSuppressionAssertion;
	NSMutableArray* _contentStatusBarHiddenAssertions;
	id<CSExternalBehaviorProviding> _coverSheetExternalBehaviorProvider;
	id<BSInvalidatable> _deviceOrientationUpdateDeferralAssertion;
	NSMutableArray* _entities;
	NSMapTable* _entityToSceneDeactivationAssertion;
	SBHomeGestureArbiter* _homeGestureArbiter;
	SBHomeGestureParticipant* _homeGestureParticipant;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	UIWindow* _initialPresentationKeyWindow;
	id<BSInvalidatable> _interactiveScreenshotGestureDisabledAssertion;
	BOOL _isInitiatingEntityPresentation;
	BOOL _isPendingAlertItems;
	BOOL _isReachabilityTemporarilyDisabled;
	SBLockStateAggregator* _lockStateAggregator;
	SBReachabilityManager* _reachabilityManager;
	UIScreen* _screen;
	SBAppStatusBarSettingsAssertion* _globalStatusBarAssertion;
	SBInAppStatusBarHiddenAssertion* _appStatusBarAssertion;
	BOOL _prefersStatusBarActivityItemVisible;
	NSNumber* _preferredWhitePointAdaptivityStyleValue;
	long long _topmostViewControllerInterfaceOrientation;
	id<SBTransientOverlayPresentationManagerDelegate> _delegate;

}

@property (nonatomic,retain) SBBannerController * bannerController;                                               //@synthesize bannerController=_bannerController - In the implementation block
@property (assign,nonatomic,__weak) id<SBTransientOverlayPresentationManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasIdleTimerBehaviors; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator; 
@property (nonatomic,readonly) SBTransientOverlayViewController * topmostPresentedViewController; 
@property (nonatomic,readonly) BOOL hasActivePresentation; 
@property (nonatomic,readonly) long long presentedViewControllerCount; 
@property (nonatomic,readonly) BOOL canHandleButtonEvents; 
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * currentStatusBarStyleRequest; 
@property (nonatomic,readonly) BOOL hasVisibleStatusBar; 
@property (nonatomic,readonly) BOOL prefersStatusBarActivityItemVisible;                                          //@synthesize prefersStatusBarActivityItemVisible=_prefersStatusBarActivityItemVisible - In the implementation block
@property (nonatomic,readonly) NSNumber * preferredWhitePointAdaptivityStyleValue;                                //@synthesize preferredWhitePointAdaptivityStyleValue=_preferredWhitePointAdaptivityStyleValue - In the implementation block
@property (nonatomic,readonly) long long topmostViewControllerInterfaceOrientation;                               //@synthesize topmostViewControllerInterfaceOrientation=_topmostViewControllerInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) double topmostWindowLevel; 
@property (nonatomic,readonly) BOOL ownsHomeGesture; 
@property (nonatomic,readonly) long long preferredGestureDismissalStyle; 
@property (nonatomic,readonly) SBTransientOverlayViewController * viewControllerForGestureDismissal; 
@property (nonatomic,readonly) BOOL shouldDisableControlCenter; 
@property (nonatomic,readonly) BOOL shouldDisableCoverSheet; 
@property (nonatomic,readonly) BOOL shouldDisableSiri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<SBTransientOverlayPresentationManagerDelegate>)delegate;
-(void)setDelegate:(id<SBTransientOverlayPresentationManagerDelegate>)arg1 ;
-(BOOL)handleDoubleHeightStatusBarTap;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)shouldDisableSiri;
-(BOOL)isPresentingViewController:(id)arg1 ;
-(void)performPresentationRequest:(id)arg1 ;
-(BOOL)ownsHomeGesture;
-(BOOL)shouldDisableControlCenter;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(void)setBannerController:(SBBannerController *)arg1 ;
-(SBTransientOverlayViewController *)topmostPresentedViewController;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)hasActivePresentation;
-(BOOL)isTopmostPresentedViewController:(id)arg1 ;
-(id)initWithScreen:(id)arg1 alertItemsController:(id)arg2 lockStateAggregator:(id)arg3 homeGestureArbiter:(id)arg4 reachabilityManager:(id)arg5 ;
-(BOOL)hasIdleTimerBehaviors;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)performDismissalRequest:(id)arg1 ;
-(SBTransientOverlayViewController *)viewControllerForGestureDismissal;
-(void)setFluidDismissalState:(id)arg1 forViewController:(id)arg2 ;
-(BOOL)prefersStatusBarActivityItemVisible;
-(long long)presentedViewControllerCount;
-(NSNumber *)preferredWhitePointAdaptivityStyleValue;
-(double)topmostWindowLevel;
-(BOOL)hasPresentationAboveWindowLevel:(double)arg1 ;
-(void)_invalidateAssertionsForEntity:(id)arg1 ;
-(id)_buttonEventHandlingViewController;
-(id)_topmostPresentedEntity;
-(void)_updateFeaturePolicies;
-(id)_statusBarEntity;
-(UIStatusBarStyleRequest *)currentStatusBarStyleRequest;
-(BOOL)hasVisibleStatusBar;
-(void)_updateContentStatusBarPresentation;
-(void)_dismissEntity:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_currentExternalStatusBarSettings;
-(void)_updateBackgroundWindowForEntity:(id)arg1 ;
-(double)_windowLevelForEntity:(id)arg1 ;
-(void)_updateHomeGestureStateAnimated:(BOOL)arg1 ;
-(void)_applyProximityDetectionModeForEntity:(id)arg1 ;
-(void)_applyWallpaperAnimationSuspensionAssertionForEntity:(id)arg1 ;
-(void)_updateDeactivationAssertions;
-(void)_updateStatusBarWithCurrentExternalStatusBarSettings:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatePreferredWhitePointAdaptivityStyle;
-(void)_getContentScale:(double*)arg1 translation:(CGPoint*)arg2 forEntity:(id)arg3 ;
-(int)_preferredStatusBarVisibilityForEntity:(id)arg1 ;
-(BOOL)_isPresentationStatusBarHiddenForVisibility:(int)arg1 currentExternalStatusBarSettings:(id)arg2 ;
-(double)_backgroundWindowLevelForEntity:(id)arg1 ;
-(id)_newSceneDeactivationAssertionWithReason:(long long)arg1 ;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1 ;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1 ;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2 ;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg1 ;
-(BOOL)canHandleButtonEvents;
-(long long)preferredGestureDismissalStyle;
-(BOOL)shouldDisableCoverSheet;
-(id)newContentStatusBarHiddenAssertionWithReason:(id)arg1 ;
-(long long)topmostViewControllerInterfaceOrientation;
-(SBBannerController *)bannerController;
@end

