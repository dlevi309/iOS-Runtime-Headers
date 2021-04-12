/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/SBTransientOverlayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>

@protocol BSInvalidatable, CSExternalBehaviorProviding, SBTransientOverlayPresentationManagerDelegate;
@class SBAlertItemsController, SBBannerManager, NSMutableArray, NSMapTable, SBHomeGestureArbiter, SBHomeGestureParticipant, SBIdleTimerCoordinatorHelper, UIWindow, SBLockStateAggregator, SBReachabilityManager, UIScreen, SBAppStatusBarSettingsAssertion, SBInAppStatusBarHiddenAssertion, NSNumber, SBCoverSheetPresentationManager, SBTransientOverlayViewController, UIStatusBarStyleRequest, NSString;

@interface SBTransientOverlayPresentationManager : NSObject <SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate, SBIdleTimerProviding, SBButtonEventsHandler> {

	SBAlertItemsController* _alertItemsController;
	SBBannerManager* _bannerManager;
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
	SBCoverSheetPresentationManager* _coverSheetPresentationManager;
	id<SBTransientOverlayPresentationManagerDelegate> _delegate;

}

@property (nonatomic,retain) SBBannerManager * bannerManager;                                                     //@synthesize bannerManager=_bannerManager - In the implementation block
@property (nonatomic,retain) SBCoverSheetPresentationManager * coverSheetPresentationManager;                     //@synthesize coverSheetPresentationManager=_coverSheetPresentationManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBTransientOverlayPresentationManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasIdleTimerBehaviors; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator; 
@property (nonatomic,readonly) SBTransientOverlayViewController * topmostPresentedViewController; 
@property (nonatomic,readonly) BOOL hasActivePresentation; 
@property (nonatomic,readonly) long long presentedViewControllerCount; 
@property (nonatomic,readonly) BOOL shouldUseSceneBasedKeyboardFocusForActivePresentation; 
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
@property (nonatomic,readonly) BOOL shouldDisableCoverSheetGesture; 
@property (nonatomic,readonly) BOOL shouldDisableSiri; 
@property (nonatomic,readonly) BOOL activePresentationPreventsDragAndDrop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1 ;
-(SBBannerManager *)bannerManager;
-(BOOL)handleHomeButtonDoublePress;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2 ;
-(void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1 ;
-(BOOL)handleHomeButtonPress;
-(id)_topmostPresentedEntity;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(void)_updateWindowHitTestingForEntity:(id)arg1 ;
-(long long)topmostViewControllerInterfaceOrientation;
-(id)_statusBarEntity;
-(long long)preferredGestureDismissalStyle;
-(BOOL)canHandleButtonEvents;
-(double)_windowLevelForEntity:(id)arg1 ;
-(void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(id)arg1 ;
-(id<SBTransientOverlayPresentationManagerDelegate>)delegate;
-(long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1 ;
-(void)setFluidDismissalState:(id)arg1 forViewController:(id)arg2 ;
-(void)_updateFeaturePolicies;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)arg1 ;
-(void)_applyWallpaperAnimationSuspensionAssertionForEntity:(id)arg1 ;
-(unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1 ;
-(void)_applyProximityDetectionModeForEntity:(id)arg1 ;
-(void)performDismissalRequest:(id)arg1 ;
-(BOOL)ownsHomeGesture;
-(SBCoverSheetPresentationManager *)coverSheetPresentationManager;
-(BOOL)shouldUseSceneBasedKeyboardFocusForActivePresentation;
-(SBTransientOverlayViewController *)topmostPresentedViewController;
-(void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1 ;
-(BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)arg1 ;
-(BOOL)prefersStatusBarActivityItemVisible;
-(void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1 ;
-(id)initWithScreen:(id)arg1 alertItemsController:(id)arg2 lockStateAggregator:(id)arg3 homeGestureArbiter:(id)arg4 reachabilityManager:(id)arg5 ;
-(long long)presentedViewControllerCount;
-(void)_updatePreferredWhitePointAdaptivityStyle;
-(void)_getContentScale:(double*)arg1 translation:(CGPoint*)arg2 fromRect:(CGRect)arg3 entity:(id)arg4 ;
-(BOOL)activePresentationPreventsDragAndDrop;
-(BOOL)hasActivePresentation;
-(void)setBannerManager:(SBBannerManager *)arg1 ;
-(void)_windowedAccessoryDidAttachOrDetach:(id)arg1 ;
-(void)setDelegate:(id<SBTransientOverlayPresentationManagerDelegate>)arg1 ;
-(void)_updateContentStatusBarPresentation;
-(void)performPresentationRequest:(id)arg1 ;
-(BOOL)hasVisibleStatusBar;
-(SBTransientOverlayViewController *)viewControllerForGestureDismissal;
-(void)_invalidateAssertionsForEntity:(id)arg1 ;
-(void)_updateHomeGestureStateAnimated:(BOOL)arg1 ;
-(void)_dismissEntity:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasIdleTimerBehaviors;
-(void)_updateStatusBarWithCurrentExternalStatusBarSettings:(id)arg1 animated:(BOOL)arg2 ;
-(UIStatusBarStyleRequest *)currentStatusBarStyleRequest;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)shouldDisableControlCenter;
-(void)_updateBackgroundWindowForEntity:(id)arg1 ;
-(id)_buttonEventHandlingViewController;
-(void)_updateDeactivationAssertions;
-(void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(void)transientOverlayViewControllerDidEndRotation:(id)arg1 ;
-(int)_preferredStatusBarVisibilityForEntity:(id)arg1 ;
-(BOOL)hasPresentationAboveWindowLevel:(double)arg1 ;
-(void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1 ;
-(id)_newSceneDeactivationAssertionWithReason:(long long)arg1 ;
-(id)newContentStatusBarHiddenAssertionWithReason:(id)arg1 ;
-(void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1 ;
-(BOOL)_isPresentationStatusBarHiddenForVisibility:(int)arg1 currentExternalStatusBarSettings:(id)arg2 ;
-(BOOL)handleDoubleHeightStatusBarTap;
-(double)_backgroundWindowLevelForEntity:(id)arg1 ;
-(BOOL)isPresentingViewController:(id)arg1 ;
-(void)setCoverSheetPresentationManager:(SBCoverSheetPresentationManager *)arg1 ;
-(BOOL)isTopmostPresentedViewController:(id)arg1 ;
-(BOOL)shouldDisableSiri;
-(id)_currentExternalStatusBarSettings;
-(void)_handleCoverSheetWillPresent:(id)arg1 ;
-(BOOL)shouldDisableCoverSheetGesture;
-(NSNumber *)preferredWhitePointAdaptivityStyleValue;
-(void)dealloc;
-(double)topmostWindowLevel;
@end

