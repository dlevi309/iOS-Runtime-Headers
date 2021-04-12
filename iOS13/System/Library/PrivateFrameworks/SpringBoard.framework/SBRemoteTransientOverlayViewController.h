/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBRemoteTransientOverlayHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>

@protocol SBRemoteTransientOverlayViewControllerDelegate;
@class SBRemoteTransientOverlayHostViewController, UIView, SBIdleTimerCoordinatorHelper, BSAnimationSettings, SBTransientOverlayWallpaperEffectView, NSString;

@interface SBRemoteTransientOverlayViewController : SBTransientOverlayViewController <SBRemoteTransientOverlayHostViewControllerDelegate, SBIdleTimerCoordinating> {

	SBRemoteTransientOverlayHostViewController* _contentViewController;
	UIView* _contentViewWrapperView;
	SBIdleTimerCoordinatorHelper* _idleTimerCoordinatorHelper;
	BOOL _isPresented;
	long long _lastWallpaperStyle;
	BSAnimationSettings* _pendingAnimationSettings;
	long long _wallpaperEffectAnimations;
	SBTransientOverlayWallpaperEffectView* _wallpaperEffectView;
	long long _preferredDismissalAnimationStyle;
	id<SBRemoteTransientOverlayViewControllerDelegate> _delegate;
	long long _wallpaperVariant;

}

@property (getter=isActivatingForSiri,nonatomic,readonly) BOOL activatingForSiri; 
@property (nonatomic,readonly) BOOL isScreenshotMarkup; 
@property (nonatomic,readonly) BOOL shouldInvalidateWhenDeactivated; 
@property (getter=isSwitcherEligible,nonatomic,readonly) BOOL switcherEligible; 
@property (nonatomic,readonly) long long preferredDismissalAnimationStyle;                                    //@synthesize preferredDismissalAnimationStyle=_preferredDismissalAnimationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<SBRemoteTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long wallpaperVariant;                                                      //@synthesize wallpaperVariant=_wallpaperVariant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestViewControllerForAlertDefinition:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id<SBRemoteTransientOverlayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBRemoteTransientOverlayViewControllerDelegate>)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)becomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isContentOpaque;
-(BOOL)canResignFirstResponder;
-(int)_preferredStatusBarVisibility;
-(long long)preferredStatusBarStyle;
-(long long)preferredWhitePointAdaptivityStyle;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(int)serviceProcessIdentifier;
-(BOOL)isActivatingForSiri;
-(BOOL)shouldInvalidateWhenDeactivated;
-(BOOL)isSwitcherEligible;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)handleDoubleHeightStatusBarTap;
-(void)didInvalidate;
-(void)setContainerOrientation:(long long)arg1 ;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(void)setWallpaperVariant:(long long)arg1 ;
-(BOOL)shouldDisableSiri;
-(long long)preferredUnlockedGestureDismissalStyle;
-(void)beginIgnoringAppearanceUpdates;
-(void)beginIgnoringContentOverlayInsetUpdates;
-(void)endIgnoringAppearanceUpdates;
-(void)endIgnoringContentOverlayInsetUpdates;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldDisableControlCenter;
-(BOOL)shouldPendAlertItems;
-(void)setIdleTimerCoordinator:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(BOOL)isScreenshotMarkup;
-(BOOL)hasServiceProcessIdentifier:(int)arg1 ;
-(void)preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)handlePictureInPictureDidBegin;
-(id)_initWithContentViewController:(id)arg1 ;
-(void)_configureWallpaperEffectViewWithAnimationSettings:(id)arg1 ;
-(BOOL)allowsStackingOverlayContentAbove;
-(long long)preferredLockedGestureDismissalStyle;
-(id)preferredSceneDeactivationReasonValue;
-(BOOL)_needsWallpaperEffectView;
-(int)preferredStatusBarStyleOverridesToCancel;
-(id)preferredStatusBarLegibilitySettings;
-(BOOL)shouldDisableReachability;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)shouldDisableInteractiveScreenshotGesture;
-(void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg1 ;
-(void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg1 ;
-(void)remoteTransientOverlayHostViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)remoteTransientOverlayHostViewController:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2 ;
-(long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg1 ;
-(id)remoteTransientOverlayHostViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2 ;
-(id)serviceEventDeferringToken;
-(int)pictureInPictureProcessIdentifier;
-(id)preferredDisplayLayoutElementIdentifier;
-(BOOL)prefersStatusBarActivityItemVisible;
-(id)representedDisplayItem;
-(long long)preferredDismissalAnimationStyle;
-(long long)wallpaperVariant;
@end

