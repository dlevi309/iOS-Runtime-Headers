/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationRotationFollowingControllerNoTouches.h>
#import <UIKit/UIInputViewAnimationHost.h>
#import <UIKitCore/_UITextEffectsSceneObserver.h>
#import <UIKit/UIKeyboardFloatingTransitionControllerDelegate.h>
#import <UIKitCore/_UIInputHostController.h>

@class NSMutableArray, UIInputWindowControllerHosting, UIView, UIInputViewSetNotificationInfo, NSString, NSDate, UIKeyboardFloatingTransitionController, UIInputViewSet, UIInputViewSetPlacement, UIInputViewController, UIInputViewPlacementTransition, UIKeyboardPathEffectView, NSLayoutConstraint;

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
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(UIView *)_inputView;
-(UIView *)_inputAccessoryView;
-(UIView *)_inputAssistantView;
-(UIInputViewController *)_inputViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)_getRotationContentSettings:(SCD_Struct_UI47*)arg1 ;
-(BOOL)isDragging;
-(void)setExclusiveTouch:(BOOL)arg1 ;
-(BOOL)isRotating;
-(CGRect)_viewFrameInWindowForContentOverlayInsetsCalculation;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(CGRect)_defaultInitialViewFrame;
-(void)_didChangeDeepestUnambiguousResponder;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)nextAnimationStyle;
-(long long)overrideUserInterfaceStyle;
-(void)didReceiveMemoryWarning;
-(void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(/*^block*/id)arg6 ;
-(CGPoint)_centerForOrientation:(long long)arg1 ;
-(CGRect)_boundsForOrientation:(long long)arg1 ;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)updateViewConstraints;
-(void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 newSize:(CGSize)arg4 ;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(id)viewForTransitionScreenSnapshot;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(BOOL)isSplitting;
-(UIInputViewSetPlacement *)placement;
-(void)willResume:(id)arg1 ;
-(BOOL)isOnScreen;
-(BOOL)isUndocked;
-(CGRect)visibleFrame;
-(CGRect)visibleInputViewFrame;
-(UIInputViewSet *)inputViewSet;
-(BOOL)isSnapshotting;
-(void)setInputViewSet:(UIInputViewSet *)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setRotationAwarePlacement:(id)arg1 ;
-(BOOL)isTransitioning;
-(void)syncToExistingAnimations;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)updateViewSizingConstraints;
-(void)registerPowerLogEvent:(BOOL)arg1 ;
-(void)updateForKeyplaneChangeWithContext:(id)arg1 ;
-(BOOL)isOnScreenRotating;
-(BOOL)dontDismissReachability;
-(void)setDontDismissReachability:(BOOL)arg1 ;
-(void)updateKeyboardDockViewVisibility;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(BOOL)isTransitioningBetweenFloatingStates;
-(id)screenSnapshotOfView:(id)arg1 ;
-(void)updateGestureRecognizers;
-(BOOL)isTranslating;
-(void)prepareForSplitTransition;
-(void)finishSplitTransition;
-(UIKeyboardPathEffectView *)_pathEffectView;
-(void)setHostingNeedsLayout;
-(void)_forcePreLayoutHostViewFrame;
-(void)updateInputAssistantView:(id)arg1 ;
-(BOOL)shouldNotifyRemoteKeyboards;
-(long long)keyboardOrientation;
-(void)performWithoutAppearanceCallbacks:(/*^block*/id)arg1 ;
-(void)setTemplateNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(id)inputSetContainerView;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(id)initialNotificationInfo;
-(CGRect)convertRectFromContainerCoordinateSpaceToScreenSpace:(CGRect)arg1 ;
-(void)postValidatedStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)postValidatedEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)updateKeyboardSizeClass;
-(UIEdgeInsets)_inputViewPadding;
-(void)updateSupportsDockViewController;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(UIInputViewSetNotificationInfo *)templateNotificationInfo;
-(void)updateAmbiguousControlCenterActivationMargin:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(UIInputViewController *)_inputAccessoryViewController;
-(UIInputViewController *)_inputAssistantViewController;
-(int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3 ;
-(void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3 ;
-(UIInputViewPlacementTransition *)currentTransition;
-(void)transferActiveNotificationInfoToInfo:(id)arg1 ;
-(void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)performWithSafeTransitionFrames:(/*^block*/id)arg1 ;
-(void)updateInputAssistantViewForInputViewSet:(id)arg1 ;
-(void)resetBackdropHeight;
-(BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1 ;
-(void)addPendingActivity:(/*^block*/id)arg1 ;
-(void)flushPendingActivities;
-(void)setCurrentTransition:(UIInputViewPlacementTransition *)arg1 ;
-(void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updatePlacementWithPlacement:(id)arg1 ;
-(void)_collectTransitionTimeStatistics:(unsigned long long)arg1 withStart:(id)arg2 ;
-(void)performWithoutCallbacksOrNotifications:(/*^block*/id)arg1 ;
-(UIInputViewSet *)transientInputViewSet;
-(unsigned long long)changeToInputViewSet:(id)arg1 ;
-(void)setPostRotationPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withTemplateNotificationInfo:(id)arg2 ;
-(UIInputViewSetPlacement *)postRotationPlacement;
-(BOOL)_useLiveRotation;
-(void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 layoutSubviews:(BOOL)arg2 ;
-(UIInputViewSet *)postRotationInputViewSet;
-(UIInputViewSetNotificationInfo *)postRotationInputViewNotificationInfo;
-(void)setPostRotationInputViewSet:(UIInputViewSet *)arg1 ;
-(void)setPostRotationInputViewNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)postTransitionEndNotification;
-(void)set_inputViewController:(UIInputViewController *)arg1 ;
-(void)set_inputAssistantViewController:(UIInputViewController *)arg1 ;
-(void)set_inputAccessoryViewController:(UIInputViewController *)arg1 ;
-(void)invalidateInputAssistantView;
-(void)setTransientInputViewSet:(UIInputViewSet *)arg1 ;
-(void)invalidateInputView;
-(void)invalidateInputAccessoryView;
-(id)currentPresentationPlacement;
-(void)setPlacement:(id)arg1 starting:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)_visibleFrame;
-(id)_screenCoordinateSpace;
-(CGRect)_visibleInputViewFrame;
-(void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2 ;
-(void)hostAppSceneBoundsChanged;
-(void)willSnapshot;
-(void)didSnapshot;
-(id)inputWindowControllerForController:(id)arg1 ;
-(void)willBeginTransitionWithController:(id)arg1 ;
-(void)didEndTransitionWithController:(id)arg1 ;
-(BOOL)shouldBeginTransitionForController:(id)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 ;
-(UIView *)bottomEdgeView;
-(void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2 ;
-(BOOL)isViewLandscape;
-(void)setDisableUpdateMaskForSecureTextEntry:(BOOL)arg1 ;
-(BOOL)isInputViewsHidden;
-(UIInputViewSetPlacement *)placementIgnoringRotation;
-(BOOL)isHostingView:(id)arg1 ;
-(void)generateNotificationsForStart:(BOOL)arg1 ;
-(void)setPlacement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
-(BOOL)inputViewSetContainsView:(id)arg1 ;
-(BOOL)isChangingPlacement;
-(void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2 ;
-(void)keyboardHeightChangeDone;
-(void)transferPlacementStateToInputWindowController:(id)arg1 ;
-(BOOL)inhibitRotationAnimation;
-(BOOL)isTransitionStarted;
-(BOOL)isTransitioningBetweenKeyboardStates;
-(UIInputViewSetPlacement *)expectedPlacement;
-(void)beginFloatingTransitionFromPanGestureRecognizer:(id)arg1 ;
-(void)setShouldNotifyRemoteKeyboards:(BOOL)arg1 ;
-(UIInputWindowControllerHosting *)hosting;
-(BOOL)forceAccessoryViewToBottomOfHostView;
-(void)setForceAccessoryViewToBottomOfHostView:(BOOL)arg1 ;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)assistantViewHeightConstraint;
-(void)setAssistantViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)isChangingInputViews;
-(BOOL)dontDismissKeyboardOnScrolling;
-(void)setDontDismissKeyboardOnScrolling:(BOOL)arg1 ;
@end

