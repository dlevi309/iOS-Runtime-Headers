/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPanelControllerDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISplitViewControllerImpl.h>

@protocol UISplitViewControllerDelegate;
@class UISplitViewController, UISplitViewControllerDisplayModeBarButtonItem, NSString, NSMutableArray, UITraitCollection, UISlidingBarStateRequest, UIResponder, UIPanelController, UIPanGestureRecognizer, UIDimmingView, UIImage, UITapGestureRecognizer, UIFocusContainerGuide, UISlidingBarConfiguration, UISlidingBarState, NSArray;

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl> {

	UISplitViewController* _svc;
	UISplitViewControllerDisplayModeBarButtonItem* _displayModeButtonItem;
	NSString* _displayModeButtonItemTitle;
	double _presentationGestureDirection;
	long long _lastNotifiedMode;
	NSMutableArray* _overrideReportedDisplayModeStack;
	long long _animatingToDisplayMode;
	BOOL _lastShouldAllowChange;
	BOOL _lastNotifiedIsCollapsed;
	UITraitCollection* _transitioningToTraitCollection;
	SCD_Struct_UI31 _transitioningFlags;
	CGSize _transitioningToSize;
	long long _transitioningToOrientation;
	UITraitCollection* _suspendedTraitCollection;
	CGSize _suspendedSize;
	UISlidingBarStateRequest* _suspendedStateRequest;
	long long _suspendedState;
	UIResponder* _postTransitionResponder;
	long long _primaryEdge;
	struct {
		unsigned usedNewSPI : 1;
		unsigned primaryHidingState : 2;
		unsigned didSetLastShouldAllowChangeDuringUpdate : 1;
		unsigned hasTransitioningSizeAndOrientation : 1;
		unsigned hasPendingPreferredDisplayModeChange : 1;
		unsigned firstResponderChangedFromPostTransitionResponder : 1;
		unsigned firstResponderChangedFromPostTransitionResponderToNil : 1;
		unsigned usesExtraWidePrimaryColumn : 1;
		unsigned usesDeviceOverlayPreferences : 1;
		unsigned prefersOverlayInRegularWidthPhone : 1;
	}  _flags;
	double _lastUserInitiatedPrimaryWidth;
	long long _primaryBackgroundStyle;
	BOOL _presentsWithGesture;
	id<UISplitViewControllerDelegate> _delegate;
	long long _preferredDisplayMode;
	double _preferredPrimaryColumnWidthFraction;
	double _minimumPrimaryColumnWidth;
	double _maximumPrimaryColumnWidth;
	unsigned long long _lastFocusedChildViewControllerIndex;
	UIPanelController* _panelController;
	UIPanGestureRecognizer* __presentationGestureRecognizer;
	UIDimmingView* __dimmingView;
	UIImage* __fullScreenButtonImage;
	UITapGestureRecognizer* _menuGestureRecognizer;
	UIFocusContainerGuide* _masterFocusContainerGuide;
	UIFocusContainerGuide* _detailFocusContainerGuide;

}

@property (nonatomic,retain) UIPanelController * panelController;                                                                                    //@synthesize panelController=_panelController - In the implementation block
@property (setter=_setPresentationGestureRecognizer:,nonatomic,retain) UIPanGestureRecognizer * _presentationGestureRecognizer;                      //@synthesize _presentationGestureRecognizer=__presentationGestureRecognizer - In the implementation block
@property (setter=_setDimmingView:,nonatomic,retain) UIDimmingView * _dimmingView;                                                                   //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (setter=_setFullScreenButtonImage:,nonatomic,retain) UIImage * _fullScreenButtonImage;                                                     //@synthesize _fullScreenButtonImage=__fullScreenButtonImage - In the implementation block
@property (getter=_menuGestureRecognizer,nonatomic,readonly) UITapGestureRecognizer * menuGestureRecognizer;                                         //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (getter=_lastFocusedChildViewControllerIndex,nonatomic,readonly) unsigned long long lastFocusedChildViewControllerIndex;                   //@synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex - In the implementation block
@property (getter=_masterFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * masterFocusContainerGuide;                                  //@synthesize masterFocusContainerGuide=_masterFocusContainerGuide - In the implementation block
@property (getter=_detailFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * detailFocusContainerGuide;                                  //@synthesize detailFocusContainerGuide=_detailFocusContainerGuide - In the implementation block
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presentsWithGesture;                                                                                               //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode;                                                                                         //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction;                                                                             //@synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumPrimaryColumnWidth;                                                                                       //@synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) double maximumPrimaryColumnWidth;                                                                                       //@synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (assign,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
-(void)encodeWithCoder:(id)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(UISlidingBarState *)currentState;
-(UISlidingBarConfiguration *)configuration;
-(void)_initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIDimmingView *)_dimmingView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI47*)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(BOOL)isCollapsed;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(long long)preferredLeadingStatusBarStyle;
-(long long)preferredTrailingStatusBarStyle;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)_handlesCounterRotationForPresentation;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)_setUpFocusContainerGuides;
-(id)childViewControllerForStatusBarStyle;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_updateChildContentMargins;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(id)detailViewController;
-(void)removeChildViewController:(id)arg1 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(BOOL)_isRotating;
-(id)masterViewController;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(NSArray *)possibleStates;
-(BOOL)_isCollapsed;
-(BOOL)_layoutPrimaryOnRight;
-(UISlidingBarStateRequest *)stateRequest;
-(Class)viewClassForPanelController:(id)arg1 ;
-(id)primaryViewControllerForCollapsingPanelController:(id)arg1 ;
-(BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2 ;
-(void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4 ;
-(id)primaryViewControllerForExpandingPanelController:(id)arg1 ;
-(id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(/*^block*/id)panelControllerWillUpdate:(id)arg1 ;
-(void)panelController:(id)arg1 willChangeToState:(id)arg2 ;
-(void)panelController:(id)arg1 didChangeToState:(id)arg2 withSize:(CGSize)arg3 ;
-(void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4 ;
-(void)panelController:(id)arg1 animateTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 predictedDuration:(double)arg4 ;
-(void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2 ;
-(void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3 ;
-(void)panelController:(id)arg1 adjustTrailingViewController:(id)arg2 forKeyboardInfo:(id)arg3 ;
-(void)animateToRequest:(id)arg1 ;
-(id)initWithSplitViewController:(id)arg1 ;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(long long)preferredDisplayMode;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(id)displayModeButtonItem;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(double)primaryColumnWidth;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)setPrimaryEdge:(long long)arg1 ;
-(long long)primaryEdge;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1 ;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(id)_primaryDimmingView;
-(void)setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)prefersOverlayInRegularWidthPhone;
-(void)setUsesDeviceOverlayPreferences:(BOOL)arg1 ;
-(BOOL)usesDeviceOverlayPreferences;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)toggleMasterVisible:(id)arg1 ;
-(void)setPrimaryBackgroundStyle:(long long)arg1 ;
-(long long)primaryBackgroundStyle;
-(void)unloadViewForced:(BOOL)arg1 ;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_primaryContentResponder;
-(void)updateDisplayModeButtonItem;
-(void)_updateDisplayModeButtonItem;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1 ;
-(long long)_primaryHidingState;
-(long long)_currentInterfaceIdiom;
-(long long)_effectiveTargetDisplayMode;
-(double)_defaultMaximumPrimaryColumnWidthForSize:(CGSize)arg1 ;
-(id)_childContainingSender:(id)arg1 ;
-(void)_setPrimaryHidingState:(long long)arg1 ;
-(void)_triggerDisplayModeAction:(id)arg1 ;
-(unsigned long long)_lastFocusedChildViewControllerIndex;
-(id)_masterFocusContainerGuide;
-(id)_detailFocusContainerGuide;
-(id)_menuGestureRecognizer;
-(void)setPanelController:(UIPanelController *)arg1 ;
-(UIPanelController *)panelController;
-(id)_currentPrimaryViewController;
-(BOOL)_isPrimaryLeading;
-(void)_updatePresentationGestureRecognizer;
-(void)_changeToDisplayMode:(long long)arg1 fromPreferredDisplayMode:(long long)arg2 ;
-(long long)_displayModeForState:(id)arg1 ;
-(void)_primaryColumnWidthAffectingPropertyDidChange;
-(void)_updateConfigurationBackgroundStyle;
-(void)_updateDimmingView;
-(void)_updateFocusContainerGuideFrames;
-(long long)_svcOrientation;
-(void)_pushOverrideOfReportedDisplayMode:(long long)arg1 ;
-(void)_popOverrideOfReportedDisplayMode;
-(CGSize)_screenSize;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 isCompact:(BOOL)arg2 shouldUseOverlay:(BOOL)arg3 ;
-(BOOL)_iPadShouldUseOverlayInCurrentEnvironment;
-(BOOL)_setPanelConfigurationWithIsPrimaryShown:(BOOL)arg1 shouldUseOverlay:(BOOL)arg2 ;
-(void)callDeprecatedWillHideDelegateCallbackIfNecessary;
-(void)callDeprecatedWillShowDelegateCallbackIfNecessary;
-(BOOL)_isPrimaryShown;
-(long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1 ;
-(void)_stopTransitionsInViewController:(id)arg1 ;
-(CGSize)_predictedDetailSizeForPredictedEndState:(id)arg1 ;
-(UIPanGestureRecognizer *)_presentationGestureRecognizer;
-(void)_presentationGestureRecognizerChanged:(id)arg1 ;
-(void)_setPresentationGestureRecognizer:(id)arg1 ;
-(void)_setPrimaryShownFromGesture:(BOOL)arg1 ;
-(void)_setDimmingView:(id)arg1 ;
-(UIImage *)_fullScreenButtonImage;
-(void)_setFullScreenButtonImage:(id)arg1 ;
-(long long)_svcViewWindowOrientation;
-(long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2 ;
-(double)_primaryColumnWidthForSize:(CGSize)arg1 shouldUseOverlay:(BOOL)arg2 ;
-(void)_addFocusPromiseRegionInContext:(id)arg1 ;
@end

