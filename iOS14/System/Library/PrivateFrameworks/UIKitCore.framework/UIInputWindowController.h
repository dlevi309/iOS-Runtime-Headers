/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationRotationFollowingControllerNoTouches.h>
#import <UIKit/UIInputViewAnimationHost.h>
#import <UIKitCore/_UITextEffectsSceneObserver.h>
#import <UIKit/UIKeyboardFloatingTransitionControllerDelegate.h>
#import <UIKitCore/_UIInputHostController.h>

@class NSMutableArray, UIInputWindowControllerHosting, UIView, UIInputViewSetNotificationInfo, NSString, NSDate, UIKeyboardFloatingTransitionController, _UIKeyboardPasscodeObscuringInteraction, UIInputViewSet, UIInputViewSetPlacement, UIInputViewController, UIInputViewPlacementTransition, UIKeyboardPathEffectView, NSLayoutConstraint;

@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UIInputViewAnimationHost, _UITextEffectsSceneObserver, UIKeyboardFloatingTransitionControllerDelegate, _UIInputHostController> {

	NSMutableArray* _animationStyleStack;
	int _suppressedCallbacks;
	int _suppressedNotifications;
	BOOL _isChangingPlacement;
	BOOL _isChangingInputViews;
	BOOL _isSnapshotting;
	int _hiddenCount;
	BOOL _inhibitingHiding;
	unsigned long long _rotationState;
	BOOL _disablePlacementChanges;
	BOOL _suppressUpdateVisibilityConstraints;
	/*^block*/id _pendingTransitionActivity;
	UIInputWindowControllerHosting* _hosting;
	UIView* _preRotationSnapshot;
	CGSize _preRotationInputViewSize;
	CGSize _preRotationInputAssistantViewSize;
	CGSize _preRotationInputAccessoryViewSize;
	CGAffineTransform _preRotationInputViewTransform;
	CGAffineTransform _preRotationInputAssistantViewTransform;
	CGAffineTransform _preRotationInputAccessoryViewTransform;
	UIInputViewSetNotificationInfo* _rotationInfo;
	CGRect _preLayoutHostViewFrame;
	BOOL _didOverridePreLayoutHostViewFrame;
	BOOL _didPostLayoutNotification;
	UIInputViewSetNotificationInfo* _keyboardHeightChangeNotificationInfo;
	BOOL _wasOnScreen;
	NSString* _lastKeyboardID;
	NSDate* _keyboardShowTimestamp;
	BOOL _supportsDockViewController;
	UIKeyboardFloatingTransitionController* _floatingTransitionController;
	_UIKeyboardPasscodeObscuringInteraction* _passcodeObscuringInteraction;
	BOOL _shouldNotifyRemoteKeyboards;
	BOOL _forceAccessoryViewToBottomOfHostView;
	BOOL _dontDismissKeyboardOnScrolling;
	BOOL _dontDismissReachability;
	UIInputViewSet* _inputViewSet;
	UIInputViewSetPlacement* _placement;
	UIInputViewController* _inputViewController;
	UIInputViewController* _inputAssistantViewController;
	UIInputViewController* _inputAccessoryViewController;
	UIInputViewSetPlacement* _postRotationPlacement;
	UIInputViewSet* _postRotationInputViewSet;
	/*^block*/id _postRotationPendingBlock;
	UIInputViewSetNotificationInfo* _postRotationInputViewNotificationInfo;
	UIInputViewSetNotificationInfo* _templateNotificationInfo;
	UIInputViewPlacementTransition* _currentTransition;
	UIKeyboardPathEffectView* _pathEffectView;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _assistantViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;
	UIInputViewSet* _transientInputViewSet;

}

@property (nonatomic,retain) NSLayoutConstraint * inputViewHeightConstraint;                                      //@synthesize inputViewHeightConstraint=_inputViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * assistantViewHeightConstraint;                                  //@synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                                  //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * postRotationPlacement;                                     //@synthesize postRotationPlacement=_postRotationPlacement - In the implementation block
@property (nonatomic,retain) UIInputViewSet * postRotationInputViewSet;                                           //@synthesize postRotationInputViewSet=_postRotationInputViewSet - In the implementation block
@property (nonatomic,copy) id postRotationPendingBlock;                                                           //@synthesize postRotationPendingBlock=_postRotationPendingBlock - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * postRotationInputViewNotificationInfo;              //@synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * templateNotificationInfo;                           //@synthesize templateNotificationInfo=_templateNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewSet * transientInputViewSet;                                              //@synthesize transientInputViewSet=_transientInputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewPlacementTransition * currentTransition;                                  //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,readonly) UIView * _inputView; 
@property (nonatomic,readonly) UIView * _inputAssistantView; 
@property (nonatomic,readonly) UIView * _inputAccessoryView; 
@property (nonatomic,retain) UIInputViewController * _inputViewController;                                        //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAssistantViewController;                               //@synthesize inputAssistantViewController=_inputAssistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAccessoryViewController;                               //@synthesize inputAccessoryViewController=_inputAccessoryViewController - In the implementation block
@property (nonatomic,readonly) BOOL isChangingInputViews;                                                         //@synthesize isChangingInputViews=_isChangingInputViews - In the implementation block
@property (nonatomic,retain,readonly) UIInputWindowControllerHosting * hosting;                                   //@synthesize hosting=_hosting - In the implementation block
@property (nonatomic,readonly) long long keyboardOrientation; 
@property (nonatomic,retain,readonly) UIKeyboardPathEffectView * _pathEffectView;                                 //@synthesize pathEffectView=_pathEffectView - In the implementation block
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (nonatomic,readonly) BOOL isTransitionStarted; 
@property (nonatomic,readonly) BOOL isSnapshotting; 
@property (assign,nonatomic) BOOL dontDismissKeyboardOnScrolling;                                                 //@synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling - In the implementation block
@property (assign,nonatomic) BOOL dontDismissReachability;                                                        //@synthesize dontDismissReachability=_dontDismissReachability - In the implementation block
@property (getter=isInputViewsHidden,nonatomic,readonly) BOOL inputViewsHidden; 
@property (nonatomic,readonly) BOOL isTransitioningBetweenKeyboardStates; 
@property (nonatomic,readonly) BOOL isTransitioningBetweenFloatingStates; 
@property (nonatomic,readonly) UIInputViewSetPlacement * expectedPlacement; 
@property (nonatomic,retain) UIInputViewSet * inputViewSet;                                                       //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * placement;                                                 //@synthesize placement=_placement - In the implementation block
@property (nonatomic,retain,readonly) UIView * bottomEdgeView; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placementIgnoringRotation; 
@property (assign,nonatomic) BOOL shouldNotifyRemoteKeyboards;                                                    //@synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards - In the implementation block
@property (assign,nonatomic) BOOL forceAccessoryViewToBottomOfHostView;                                           //@synthesize forceAccessoryViewToBottomOfHostView=_forceAccessoryViewToBottomOfHostView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetBackdropHeight;
-(long long)overrideUserInterfaceStyle;
-(UIInputViewController *)_inputViewController;
-(UIInputViewSet *)inputViewSet;
-(BOOL)isSplitting;
-(BOOL)dontDismissReachability;
-(CGRect)visibleFrame;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(id)nextAnimationStyle;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(void)updateViewConstraints;
-(void)willResume:(id)arg1 ;
-(CGRect)transitioningFrame;
-(void)didSuspend:(id)arg1 ;
-(void)syncToExistingAnimations;
-(BOOL)isTranslating;
-(BOOL)isUndocked;
-(id)viewForTransitionScreenSnapshot;
-(void)performWithoutAppearanceCallbacks:(/*^block*/id)arg1 ;
-(void)_didChangeDeepestActionResponder;
-(BOOL)hasInputOrAssistantViewsOnScreen;
-(void)viewWillLayoutSubviews;
-(BOOL)isOnScreen;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)transitioningView;
-(UIInputViewSetPlacement *)placement;
-(void)dismissViewController:(id)arg1 ;
-(NSLayoutConstraint *)assistantViewHeightConstraint;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setPostRotationInputViewSet:(UIInputViewSet *)arg1 ;
-(void)setRotationAwarePlacement:(id)arg1 ;
-(void)updateForKeyplaneChangeWithContext:(id)arg1 ;
-(void)setPostRotationPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 layoutSubviews:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 ;
-(void)set_inputAssistantViewController:(UIInputViewController *)arg1 ;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI53*)arg1 ;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)performWithoutCallbacksOrNotifications:(/*^block*/id)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)invalidateInputView;
-(BOOL)isSnapshotting;
-(void)_forcePreLayoutHostViewFrame;
-(void)setDisableUpdateMaskForSecureTextEntry:(BOOL)arg1 ;
-(UIInputViewController *)_inputAssistantViewController;
-(BOOL)isInputViewsHidden;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(BOOL)_useLiveRotation;
-(void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3 ;
-(CGRect)convertRectFromContainerCoordinateSpaceToScreenSpace:(CGRect)arg1 ;
-(void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg1 ;
-(CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;
-(UIView *)bottomEdgeView;
-(unsigned long long)changeToInputViewSet:(id)arg1 ;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(UIInputViewSetPlacement *)placementIgnoringRotation;
-(void)prepareForSplitTransition;
-(void)setPlacement:(id)arg1 starting:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isTransitionStarted;
-(void)addPendingActivity:(/*^block*/id)arg1 ;
-(UIInputViewSetNotificationInfo *)templateNotificationInfo;
-(UIInputViewController *)_inputAccessoryViewController;
-(BOOL)forceAccessoryViewToBottomOfHostView;
-(void)validateInputView;
-(void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(BOOL)isViewLandscape;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)postTransitionEndNotification;
-(id)currentPresentationPlacement;
-(void)performOperations:(/*^block*/id)arg1 withTemplateNotificationInfo:(id)arg2 ;
-(BOOL)inputViewSetContainsView:(id)arg1 ;
-(BOOL)shouldNotifyRemoteKeyboards;
-(BOOL)_allowsSkippingLayout;
-(void)updateAmbiguousControlCenterActivationMargin:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIView *)_inputAccessoryView;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(void)transferActiveNotificationInfoToInfo:(id)arg1 ;
-(void)willBeginTransitionWithController:(id)arg1 ;
-(id)inputWindowControllerForController:(id)arg1 ;
-(id)initialNotificationInfo;
-(BOOL)isChangingInputViews;
-(void)invalidateInputAccessoryView;
-(BOOL)inhibitRotationAnimation;
-(UIInputViewSetPlacement *)expectedPlacement;
-(void)setShouldNotifyRemoteKeyboards:(BOOL)arg1 ;
-(void)willSnapshot;
-(void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2 ;
-(void)transferPlacementStateToInputWindowController:(id)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)setDontDismissKeyboardOnScrolling:(BOOL)arg1 ;
-(UIInputViewSet *)transientInputViewSet;
-(void)registerPowerLogEvent:(BOOL)arg1 ;
-(void)_collectTransitionTimeStatistics:(unsigned long long)arg1 withStart:(id)arg2 ;
-(void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)didReceiveMemoryWarning;
-(void)updateInputAssistantViewForInputViewSet:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)setExclusiveTouch:(BOOL)arg1 ;
-(void)generateNotificationsForStart:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)set_inputAccessoryViewController:(UIInputViewController *)arg1 ;
-(id)screenSnapshotOfView:(id)arg1 ;
-(UIKeyboardPathEffectView *)_pathEffectView;
-(BOOL)isTransitioningBetweenFloatingStates;
-(void)setCurrentTransition:(UIInputViewPlacementTransition *)arg1 ;
-(CGRect)_visibleInputViewFrame;
-(void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
-(void)_updatePlacementWithPlacement:(id)arg1 ;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)setForceAccessoryViewToBottomOfHostView:(BOOL)arg1 ;
-(void)hostViewWillDisappear;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(CGRect)visibleInputViewFrame;
-(BOOL)isDragging;
-(CGRect)_visibleFrame;
-(void)updateGestureRecognizers;
-(long long)keyboardOrientation;
-(BOOL)dontDismissKeyboardOnScrolling;
-(void)updateKeyboardSizeClass;
-(id)inputSetContainerView;
-(BOOL)isChangingPlacement;
-(void)postValidatedStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(BOOL)isTransitioning;
-(void)hostAppSceneBoundsChanged;
-(void)postValidatedEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)chainPlacementsIfNecessaryFrom:(id)arg1 toPlacement:(id)arg2 transition:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPostRotationPendingBlock:(id)arg1 ;
-(void)finishSplitTransition;
-(void)didSnapshot;
-(void)flushPendingActivities;
-(UIView *)_inputView;
-(void)setAssistantViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDontDismissReachability:(BOOL)arg1 ;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(BOOL)shouldBeginTransitionForController:(id)arg1 ;
-(UIInputViewPlacementTransition *)currentTransition;
-(void)setTemplateNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(UIInputViewSetNotificationInfo *)postRotationInputViewNotificationInfo;
-(void)keyboardHeightChangeDone;
-(void)loadView;
-(void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(BOOL)isOnScreenRotating;
-(void)performWithSafeTransitionFrames:(/*^block*/id)arg1 ;
-(int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3 ;
-(UIInputViewSetPlacement *)postRotationPlacement;
-(void)didEndTransitionWithController:(id)arg1 ;
-(CGRect)_defaultInitialViewFrame;
-(UIInputWindowControllerHosting *)hosting;
-(id)_screenCoordinateSpace;
-(void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)set_inputViewController:(UIInputViewController *)arg1 ;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)setTransientInputViewSet:(UIInputViewSet *)arg1 ;
-(id)postRotationPendingBlock;
-(void)updateInputAssistantView:(id)arg1 ;
-(BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1 ;
-(UIEdgeInsets)_inputViewPadding;
-(CGPoint)_centerForOrientation:(long long)arg1 ;
-(void)updateKeyboardDockViewVisibility;
-(void)setHostingNeedsLayout;
-(BOOL)isTransitioningBetweenKeyboardStates;
-(void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2 ;
-(void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2 ;
-(void)setPlacement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3 ;
-(void)setInputViewSet:(UIInputViewSet *)arg1 ;
-(void)updateSupportsDockViewController;
-(void)setPostRotationInputViewNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(BOOL)isHostingView:(id)arg1 ;
-(BOOL)isRotating;
-(void)updateViewSizingConstraints;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIInputViewSet *)postRotationInputViewSet;
-(CGRect)_boundsForOrientation:(long long)arg1 ;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(UIView *)_inputAssistantView;
-(void)invalidateInputAssistantView;
-(void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

