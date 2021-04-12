/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGrabberDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBButtonEventsHandler.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate;
@class UIView, SBHomeGrabberView, SBFHomeGrabberSettings, SBKeyboardHomeAffordanceAssertion, UIWindow, UIStatusBar, _UILegibilitySettings, SBDisplayItem, FBDisplayLayoutElement, UIStatusBarStyleRequest, NSNumber, NSString;

@interface SBTransientOverlayViewController : UIViewController <SBHomeGrabberDelegate, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding> {

	long long _appearanceUpdateIgnoreCount;
	UIView* _contentContainerView;
	long long _contentOverlayInsetUpdateIgnoreCount;
	SBHomeGrabberView* _grabberView;
	SBFHomeGrabberSettings* _grabberSettings;
	BOOL _hasPreservedInputViews;
	BOOL _isDisplayLayoutElementActive;
	SBKeyboardHomeAffordanceAssertion* _keyboardHomeAffordanceAssertion;
	UIWindow* _keyboardHomeAffordanceAssertionWindow;
	UIView* _presentationBackgroundView;
	long long _presentationPrefersHomeGrabberHidden;
	UIStatusBar* _statusBar;
	long long _keyboardVisible;
	BOOL _allowsStackingOverlayContentAbove;
	BOOL _contentOpaque;
	BOOL _prefersProximityDetectionEnabled;
	BOOL _prefersStatusBarActivityItemVisible;
	BOOL _shouldDisableBanners;
	BOOL _shouldDisableControlCenter;
	BOOL _shouldDisableReachability;
	BOOL _shouldDisableInteractiveScreenshotGesture;
	BOOL _shouldDisableSiri;
	BOOL _shouldPendAlertItems;
	BOOL _shouldDisableOrientationUpdates;
	BOOL _presentationAllowsHomeGrabberAutoHide;
	BOOL _presentationPrefersStatusBarHidden;
	int _preferredStatusBarStyleOverridesToCancel;
	int _pictureInPictureProcessIdentifier;
	UIView* _contentView;
	UIView* _backgroundView;
	_UILegibilitySettings* _preferredStatusBarLegibilitySettings;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	long long _containerOrientation;
	long long _preferredLockedGestureDismissalStyle;
	long long _preferredUnlockedGestureDismissalStyle;
	SBDisplayItem* _representedDisplayItem;
	FBDisplayLayoutElement* _displayLayoutElement;
	id<SBTransientOverlayViewControllerDelegate> _transientOverlayDelegate;
	UIStatusBarStyleRequest* _currentStatusBarStyleRequest;
	double _presentationContentCornerRadius;
	double _presentationHomeGrabberAlpha;
	double _presentationHomeGrabberAdditionalEdgeSpacing;
	CGAffineTransform _presentationContentTransform;

}

@property (assign,nonatomic,__weak) id<SBTransientOverlayViewControllerDelegate> transientOverlayDelegate;              //@synthesize transientOverlayDelegate=_transientOverlayDelegate - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * currentStatusBarStyleRequest;                             //@synthesize currentStatusBarStyleRequest=_currentStatusBarStyleRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleStatusBar; 
@property (assign,nonatomic) BOOL presentationAllowsHomeGrabberAutoHide;                                                //@synthesize presentationAllowsHomeGrabberAutoHide=_presentationAllowsHomeGrabberAutoHide - In the implementation block
@property (assign,nonatomic) double presentationContentCornerRadius;                                                    //@synthesize presentationContentCornerRadius=_presentationContentCornerRadius - In the implementation block
@property (assign,nonatomic) CGAffineTransform presentationContentTransform;                                            //@synthesize presentationContentTransform=_presentationContentTransform - In the implementation block
@property (assign,nonatomic) double presentationHomeGrabberAlpha;                                                       //@synthesize presentationHomeGrabberAlpha=_presentationHomeGrabberAlpha - In the implementation block
@property (assign,nonatomic) double presentationHomeGrabberAdditionalEdgeSpacing;                                       //@synthesize presentationHomeGrabberAdditionalEdgeSpacing=_presentationHomeGrabberAdditionalEdgeSpacing - In the implementation block
@property (nonatomic,readonly) BOOL presentationPrefersStatusBarHidden;                                                 //@synthesize presentationPrefersStatusBarHidden=_presentationPrefersStatusBarHidden - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) BOOL allowsStackingOverlayContentAbove;                                                  //@synthesize allowsStackingOverlayContentAbove=_allowsStackingOverlayContentAbove - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * preferredSceneDeactivationReasonValue; 
@property (nonatomic,copy,readonly) id sceneDeactivationPredicate; 
@property (getter=isContentOpaque,nonatomic,readonly) BOOL contentOpaque;                                               //@synthesize contentOpaque=_contentOpaque - In the implementation block
@property (nonatomic,readonly) BOOL prefersProximityDetectionEnabled;                                                   //@synthesize prefersProximityDetectionEnabled=_prefersProximityDetectionEnabled - In the implementation block
@property (nonatomic,copy,readonly) _UILegibilitySettings * preferredStatusBarLegibilitySettings;                       //@synthesize preferredStatusBarLegibilitySettings=_preferredStatusBarLegibilitySettings - In the implementation block
@property (nonatomic,readonly) int preferredStatusBarStyleOverridesToCancel;                                            //@synthesize preferredStatusBarStyleOverridesToCancel=_preferredStatusBarStyleOverridesToCancel - In the implementation block
@property (nonatomic,readonly) BOOL prefersStatusBarActivityItemVisible;                                                //@synthesize prefersStatusBarActivityItemVisible=_prefersStatusBarActivityItemVisible - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableBanners;                                                               //@synthesize shouldDisableBanners=_shouldDisableBanners - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableControlCenter;                                                         //@synthesize shouldDisableControlCenter=_shouldDisableControlCenter - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableReachability;                                                          //@synthesize shouldDisableReachability=_shouldDisableReachability - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableInteractiveScreenshotGesture;                                          //@synthesize shouldDisableInteractiveScreenshotGesture=_shouldDisableInteractiveScreenshotGesture - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableSiri;                                                                  //@synthesize shouldDisableSiri=_shouldDisableSiri - In the implementation block
@property (nonatomic,readonly) BOOL shouldPendAlertItems;                                                               //@synthesize shouldPendAlertItems=_shouldPendAlertItems - In the implementation block
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                                   //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                                            //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableOrientationUpdates;                                                    //@synthesize shouldDisableOrientationUpdates=_shouldDisableOrientationUpdates - In the implementation block
@property (nonatomic,readonly) BOOL isIgnoringAppearanceUpdates; 
@property (nonatomic,readonly) BOOL isIgnoringContentOverlayInsetUpdates; 
@property (nonatomic,readonly) long long preferredLockedGestureDismissalStyle;                                          //@synthesize preferredLockedGestureDismissalStyle=_preferredLockedGestureDismissalStyle - In the implementation block
@property (nonatomic,readonly) long long preferredUnlockedGestureDismissalStyle;                                        //@synthesize preferredUnlockedGestureDismissalStyle=_preferredUnlockedGestureDismissalStyle - In the implementation block
@property (nonatomic,copy,readonly) SBDisplayItem * representedDisplayItem;                                             //@synthesize representedDisplayItem=_representedDisplayItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredDisplayLayoutElementIdentifier; 
@property (nonatomic,retain) FBDisplayLayoutElement * displayLayoutElement;                                             //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,readonly) int pictureInPictureProcessIdentifier;                                                   //@synthesize pictureInPictureProcessIdentifier=_pictureInPictureProcessIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIView *)contentView;
-(UIView *)backgroundView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)isContentOpaque;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(long long)idleTimerMode;
-(BOOL)handleDoubleHeightStatusBarTap;
-(void)setContainerOrientation:(long long)arg1 ;
-(long long)containerOrientation;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
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
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(BOOL)_isKeyboardVisibleForSpringBoard;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)setPresentationPrefersStatusBarHidden:(BOOL)arg1 initialStatusBarSettings:(id)arg2 ;
-(void)setPresentationPrefersHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)handlePictureInPictureDidBegin;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(BOOL)isIgnoringAppearanceUpdates;
-(void)setNeedsContentOpaqueUpdate;
-(void)setNeedsGestureDismissalStyleUpdate;
-(void)setNeedsFeaturePolicyUpdate;
-(void)setNeedsSceneDeactivationUpdate;
-(void)setNeedsOrientationUpdatesDisabledUpdate;
-(BOOL)allowsStackingOverlayContentAbove;
-(BOOL)isIgnoringContentOverlayInsetUpdates;
-(long long)preferredLockedGestureDismissalStyle;
-(NSNumber *)preferredSceneDeactivationReasonValue;
-(int)preferredStatusBarStyleOverridesToCancel;
-(_UILegibilitySettings *)preferredStatusBarLegibilitySettings;
-(BOOL)shouldDisableReachability;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)shouldDisableInteractiveScreenshotGesture;
-(int)pictureInPictureProcessIdentifier;
-(NSString *)preferredDisplayLayoutElementIdentifier;
-(BOOL)prefersStatusBarActivityItemVisible;
-(SBDisplayItem *)representedDisplayItem;
-(void)setTransientOverlayDelegate:(id<SBTransientOverlayViewControllerDelegate>)arg1 ;
-(UIStatusBarStyleRequest *)currentStatusBarStyleRequest;
-(BOOL)hasVisibleStatusBar;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(void)addPresentationBackgroundView:(id)arg1 ;
-(void)removePresentationBackgroundView:(id)arg1 ;
-(void)setPresentationContentTransform:(CGAffineTransform)arg1 ;
-(void)setPresentationHomeGrabberAlpha:(double)arg1 ;
-(void)setPresentationHomeGrabberAdditionalEdgeSpacing:(double)arg1 ;
-(void)setPresentationContentCornerRadius:(double)arg1 ;
-(BOOL)prefersProximityDetectionEnabled;
-(id<SBTransientOverlayViewControllerDelegate>)transientOverlayDelegate;
-(id)sceneDeactivationPredicate;
-(void)setNeedsIdleTimerReset;
-(void)_setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)setNeedsProximityDetectionUpdate;
-(void)_invalidateKeyboardHomeAffordanceAssertion;
-(void)_applyStatusBarStyleRequestWithInitialStatusBarSettings:(id)arg1 ;
-(void)_updateGrabberViewConfiguration;
-(CGRect)_currentStatusBarFrameForStyle:(long long)arg1 ;
-(id)_newHomeGrabberViewWithFrame:(CGRect)arg1 ;
-(void)_updateGrabberViewHiddenConfigurationAnimated:(BOOL)arg1 ;
-(BOOL)presentationAllowsHomeGrabberAutoHide;
-(void)setPresentationAllowsHomeGrabberAutoHide:(BOOL)arg1 ;
-(double)presentationContentCornerRadius;
-(CGAffineTransform)presentationContentTransform;
-(double)presentationHomeGrabberAlpha;
-(double)presentationHomeGrabberAdditionalEdgeSpacing;
-(BOOL)presentationPrefersStatusBarHidden;
@end

