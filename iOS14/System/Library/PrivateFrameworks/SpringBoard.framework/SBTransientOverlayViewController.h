/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class UIView, SBFHomeGrabberSettings, SBKeyboardHomeAffordanceAssertion, UIWindow, UIStatusBar, SBDisplayItem, FBDisplayLayoutElement, UIStatusBarStyleRequest, SBHomeGrabberView, UIColor, NSNumber, _UILegibilitySettings, NSString;

@interface SBTransientOverlayViewController : UIViewController <SBHomeGrabberDelegate, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding> {

	long long _appearanceUpdateIgnoreCount;
	UIView* _contentContainerView;
	UIView* _homeGrabberContainerView;
	UIView* _dimmingView;
	long long _contentOverlayInsetUpdateIgnoreCount;
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
	BOOL _shouldUseSceneBasedKeyboardFocus;
	BOOL _shouldPreventDragAndDrop;
	BOOL _shouldDisableOrientationUpdates;
	BOOL _prefersWindowHitTestingDisabled;
	BOOL _attachedToWindowedAccessory;
	BOOL _presentationAllowsHomeGrabberAutoHide;
	BOOL _presentationDimmingViewHidden;
	BOOL _presentationPrefersStatusBarHidden;
	BOOL _dismissesForCoverSheetPresentation;
	int _preferredStatusBarStyleOverridesToCancel;
	int _pictureInPictureProcessIdentifier;
	UIView* _contentView;
	UIView* _backgroundView;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;
	long long _containerOrientation;
	long long _preferredLockedGestureDismissalStyle;
	long long _preferredUnlockedGestureDismissalStyle;
	SBDisplayItem* _representedDisplayItem;
	FBDisplayLayoutElement* _displayLayoutElement;
	id<SBTransientOverlayViewControllerDelegate> _transientOverlayDelegate;
	UIStatusBarStyleRequest* _currentStatusBarStyleRequest;
	SBHomeGrabberView* _grabberView;
	double _presentationContentCornerRadius;
	double _presentationHomeGrabberAlpha;
	double _presentationHomeGrabberAdditionalEdgeSpacing;
	CGRect _windowedAccessoryCutoutFrameInScreen;
	CGAffineTransform _presentationContentTransform;
	CGAffineTransform _presentationHomeGrabberTransform;

}

@property (assign,nonatomic,__weak) id<SBTransientOverlayViewControllerDelegate> transientOverlayDelegate;              //@synthesize transientOverlayDelegate=_transientOverlayDelegate - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * currentStatusBarStyleRequest;                             //@synthesize currentStatusBarStyleRequest=_currentStatusBarStyleRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleStatusBar; 
@property (nonatomic,retain) SBHomeGrabberView * grabberView;                                                           //@synthesize grabberView=_grabberView - In the implementation block
@property (assign,nonatomic) BOOL presentationAllowsHomeGrabberAutoHide;                                                //@synthesize presentationAllowsHomeGrabberAutoHide=_presentationAllowsHomeGrabberAutoHide - In the implementation block
@property (assign,nonatomic) double presentationContentCornerRadius;                                                    //@synthesize presentationContentCornerRadius=_presentationContentCornerRadius - In the implementation block
@property (assign,nonatomic) CGAffineTransform presentationContentTransform;                                            //@synthesize presentationContentTransform=_presentationContentTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform presentationHomeGrabberTransform;                                        //@synthesize presentationHomeGrabberTransform=_presentationHomeGrabberTransform - In the implementation block
@property (assign,nonatomic) double presentationHomeGrabberAlpha;                                                       //@synthesize presentationHomeGrabberAlpha=_presentationHomeGrabberAlpha - In the implementation block
@property (assign,nonatomic) double presentationHomeGrabberAdditionalEdgeSpacing;                                       //@synthesize presentationHomeGrabberAdditionalEdgeSpacing=_presentationHomeGrabberAdditionalEdgeSpacing - In the implementation block
@property (assign,nonatomic) BOOL presentationDimmingViewHidden;                                                        //@synthesize presentationDimmingViewHidden=_presentationDimmingViewHidden - In the implementation block
@property (assign,nonatomic) double presentationDimmingAlpha; 
@property (nonatomic,readonly) BOOL presentationPrefersStatusBarHidden;                                                 //@synthesize presentationPrefersStatusBarHidden=_presentationPrefersStatusBarHidden - In the implementation block
@property (nonatomic,readonly) BOOL dismissesForCoverSheetPresentation;                                                 //@synthesize dismissesForCoverSheetPresentation=_dismissesForCoverSheetPresentation - In the implementation block
@property (nonatomic,readonly) long long homeAffordanceSuppression; 
@property (nonatomic,readonly) BOOL preservesAppSwitcherDuringPresentationAndDismissal; 
@property (nonatomic,readonly) UIColor * presentationDimmingViewColor; 
@property (nonatomic,readonly) BOOL preventsClippingToBounds; 
@property (nonatomic,readonly) UIView * backgroundView;                                                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) BOOL allowsStackingOverlayContentAbove;                                                  //@synthesize allowsStackingOverlayContentAbove=_allowsStackingOverlayContentAbove - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * preferredSceneDeactivationReasonValue; 
@property (nonatomic,copy,readonly) id sceneDeactivationPredicate; 
@property (getter=isContentOpaque,nonatomic,readonly) BOOL contentOpaque;                                               //@synthesize contentOpaque=_contentOpaque - In the implementation block
@property (nonatomic,readonly) BOOL prefersProximityDetectionEnabled;                                                   //@synthesize prefersProximityDetectionEnabled=_prefersProximityDetectionEnabled - In the implementation block
@property (nonatomic,copy,readonly) _UILegibilitySettings * preferredStatusBarLegibilitySettings; 
@property (nonatomic,readonly) int preferredStatusBarStyleOverridesToCancel;                                            //@synthesize preferredStatusBarStyleOverridesToCancel=_preferredStatusBarStyleOverridesToCancel - In the implementation block
@property (nonatomic,readonly) BOOL prefersStatusBarActivityItemVisible;                                                //@synthesize prefersStatusBarActivityItemVisible=_prefersStatusBarActivityItemVisible - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableBanners;                                                               //@synthesize shouldDisableBanners=_shouldDisableBanners - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableControlCenter;                                                         //@synthesize shouldDisableControlCenter=_shouldDisableControlCenter - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableReachability;                                                          //@synthesize shouldDisableReachability=_shouldDisableReachability - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableInteractiveScreenshotGesture;                                          //@synthesize shouldDisableInteractiveScreenshotGesture=_shouldDisableInteractiveScreenshotGesture - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableSiri;                                                                  //@synthesize shouldDisableSiri=_shouldDisableSiri - In the implementation block
@property (nonatomic,readonly) BOOL shouldPendAlertItems;                                                               //@synthesize shouldPendAlertItems=_shouldPendAlertItems - In the implementation block
@property (nonatomic,readonly) BOOL dismissesSiriForPresentation; 
@property (nonatomic,readonly) BOOL shouldUseSceneBasedKeyboardFocus;                                                   //@synthesize shouldUseSceneBasedKeyboardFocus=_shouldUseSceneBasedKeyboardFocus - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventDragAndDrop;                                                           //@synthesize shouldPreventDragAndDrop=_shouldPreventDragAndDrop - In the implementation block
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
@property (nonatomic,readonly) BOOL prefersWindowHitTestingDisabled;                                                    //@synthesize prefersWindowHitTestingDisabled=_prefersWindowHitTestingDisabled - In the implementation block
@property (getter=isAttachedToWindowedAccessory,nonatomic,readonly) BOOL attachedToWindowedAccessory;                   //@synthesize attachedToWindowedAccessory=_attachedToWindowedAccessory - In the implementation block
@property (nonatomic,readonly) CGRect windowedAccessoryCutoutFrameInScreen;                                             //@synthesize windowedAccessoryCutoutFrameInScreen=_windowedAccessoryCutoutFrameInScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(long long)containerOrientation;
-(BOOL)handleVolumeDownButtonPress;
-(void)setNeedsUpdateOfHomeIndicatorAutoHidden;
-(id)succinctDescription;
-(BOOL)handleHomeButtonDoublePress;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(void)setContainerOrientation:(long long)arg1 ;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleHomeButtonPress;
-(void)setGrabberView:(SBHomeGrabberView *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(void)setNeedsWhitePointAdaptivityStyleUpdate;
-(BOOL)isAttachedToWindowedAccessory;
-(CGRect)windowedAccessoryCutoutFrameInScreen;
-(UIView *)backgroundView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)prefersStatusBarActivityItemVisible;
-(void)_setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(NSString *)description;
-(BOOL)hasVisibleStatusBar;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)viewDidLoad;
-(SBHomeGrabberView *)grabberView;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
-(UIStatusBarStyleRequest *)currentStatusBarStyleRequest;
-(BOOL)_isKeyboardVisibleForSpringBoard;
-(BOOL)shouldDisableControlCenter;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)idleWarnMode;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg1 windowedAccessoryCutoutFrameInScreen:(CGRect)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isContentOpaque;
-(UIView *)contentView;
-(id)succinctDescriptionBuilder;
-(BOOL)handleDoubleHeightStatusBarTap;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldDisableSiri;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(long long)preferredUnlockedGestureDismissalStyle;
-(void)beginIgnoringAppearanceUpdates;
-(void)beginIgnoringContentOverlayInsetUpdates;
-(void)endIgnoringAppearanceUpdates;
-(void)endIgnoringContentOverlayInsetUpdates;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldPendAlertItems;
-(BOOL)preservesAppSwitcherDuringPresentationAndDismissal;
-(BOOL)dismissesSiriForPresentation;
-(void)setPresentationPrefersStatusBarHidden:(BOOL)arg1 initialStatusBarSettings:(id)arg2 ;
-(void)setPresentationPrefersHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)handleGestureDismissal;
-(void)restoreInputViewsAnimated:(BOOL)arg1 ;
-(void)handlePictureInPictureDidBegin;
-(BOOL)isIgnoringAppearanceUpdates;
-(void)setNeedsContentOpaqueUpdate;
-(void)setNeedsGestureDismissalStyleUpdate;
-(void)setNeedsFeaturePolicyUpdate;
-(void)setNeedsSceneDeactivationUpdate;
-(void)setNeedsOrientationUpdatesDisabledUpdate;
-(BOOL)isIgnoringContentOverlayInsetUpdates;
-(long long)preferredLockedGestureDismissalStyle;
-(NSNumber *)preferredSceneDeactivationReasonValue;
-(int)preferredStatusBarStyleOverridesToCancel;
-(BOOL)shouldDisableReachability;
-(BOOL)shouldDisableOrientationUpdates;
-(BOOL)shouldDisableInteractiveScreenshotGesture;
-(int)pictureInPictureProcessIdentifier;
-(NSString *)preferredDisplayLayoutElementIdentifier;
-(SBDisplayItem *)representedDisplayItem;
-(id)sceneDeactivationPredicate;
-(BOOL)shouldUseSceneBasedKeyboardFocus;
-(void)setTransientOverlayDelegate:(id<SBTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)dismissesForCoverSheetPresentation;
-(BOOL)shouldPreventDragAndDrop;
-(void)setPresentationDimmingViewHidden:(BOOL)arg1 ;
-(void)setPresentationDimmingAlpha:(double)arg1 ;
-(void)setPresentationContentTransform:(CGAffineTransform)arg1 ;
-(void)setPresentationHomeGrabberTransform:(CGAffineTransform)arg1 ;
-(void)setPresentationHomeGrabberAlpha:(double)arg1 ;
-(void)setPresentationHomeGrabberAdditionalEdgeSpacing:(double)arg1 ;
-(void)setPresentationContentCornerRadius:(double)arg1 ;
-(BOOL)prefersProximityDetectionEnabled;
-(id<SBTransientOverlayViewControllerDelegate>)transientOverlayDelegate;
-(BOOL)prefersWindowHitTestingDisabled;
-(long long)homeAffordanceSuppression;
-(void)setHomeGrabberPointerClickDelegate:(id)arg1 ;
-(void)setNeedsWindowHitTestingUpdate;
-(UIColor *)presentationDimmingViewColor;
-(BOOL)preventsClippingToBounds;
-(void)setNeedsIdleTimerReset;
-(void)handleWillShowKeyboard:(BOOL)arg1 ;
-(_UILegibilitySettings *)preferredStatusBarLegibilitySettings;
-(void)setNeedsProximityDetectionUpdate;
-(void)_invalidateKeyboardHomeAffordanceAssertion;
-(void)_applyStatusBarStyleRequestWithInitialStatusBarSettings:(id)arg1 ;
-(void)_updateGrabberViewConfiguration;
-(CGRect)_currentStatusBarFrameForStyle:(long long)arg1 ;
-(id)_newHomeGrabberViewWithFrame:(CGRect)arg1 ;
-(void)addPresentationBackgroundView:(id)arg1 ;
-(void)removePresentationBackgroundView:(id)arg1 ;
-(void)_updateGrabberViewHiddenConfigurationAnimated:(BOOL)arg1 ;
-(double)presentationDimmingAlpha;
-(BOOL)presentationAllowsHomeGrabberAutoHide;
-(void)setPresentationAllowsHomeGrabberAutoHide:(BOOL)arg1 ;
-(double)presentationContentCornerRadius;
-(CGAffineTransform)presentationContentTransform;
-(CGAffineTransform)presentationHomeGrabberTransform;
-(double)presentationHomeGrabberAlpha;
-(double)presentationHomeGrabberAdditionalEdgeSpacing;
-(BOOL)presentationDimmingViewHidden;
-(BOOL)presentationPrefersStatusBarHidden;
@end
