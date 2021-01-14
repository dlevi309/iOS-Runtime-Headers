/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UILayoutContainerViewDelegate.h>
#import <UIKitCore/_UIScrollViewScrollObserver.h>
#import <UIKitCore/_UITVScrollViewManagerDelegate.h>
#import <UIKitCore/_UITabBarDelegateInternal.h>
#import <UIKit/UITabBarDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UITabBarControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class UITabBar, UILayoutContainerView, UIView, UIViewController, UIMoreNavigationController, NSArray, UITapGestureRecognizer, UIGestureRecognizer, UIFocusContainerGuide, UILongPressGestureRecognizer, UIScrollView, _UITVScrollViewManager, UIFocusGuide, NSMutableArray, NSMapTable, NSString, UINavigationController;

@interface UITabBarController : UIViewController <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, _UIScrollViewScrollObserver, _UITVScrollViewManagerDelegate, _UITabBarDelegateInternal, UITabBarDelegate, NSCoding> {

	UITabBar* _tabBar;
	UILayoutContainerView* _containerView;
	UIView* _viewControllerTransitionView;
	id _tabBarItemsToViewControllers;
	UIViewController* _selectedViewController;
	UIMoreNavigationController* _moreNavigationController;
	NSArray* _customizableViewControllers;
	UIViewController* _selectedViewControllerDuringWillAppear;
	UIViewController* _transientViewController;
	unsigned long long _customMaxItems;
	unsigned long long _defaultMaxItems;
	long long _tabBarPosition;
	UITapGestureRecognizer* _backGestureRecognizer;
	UITapGestureRecognizer* _nudgeLeftGestureRecognizer;
	UITapGestureRecognizer* _nudgeRightGestureRecognizer;
	UITapGestureRecognizer* _selectGestureRecognizer;
	UIGestureRecognizer* _touchDetectionGestureRecognizer;
	UIFocusContainerGuide* _contentFocusContainerGuide;
	UILongPressGestureRecognizer* _accessibilityLongPressGestureRecognizer;
	UIScrollView* _observingScrollView;
	UIView* _tabBarContainerView;
	_UITVScrollViewManager* _scrollViewManager;
	UIFocusGuide* _tabBarOffscreenFocusGuide;
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
		unsigned barLayoutIsValid : 1;
		unsigned reselectTab : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned preferTabBarFocused : 1;
		unsigned notifySplitViewControllerForSelectionChange : 1;
		unsigned offscreen : 1;
		unsigned hidNavBar : 1;
	}  _tabBarControllerFlags;
	BOOL __shouldFocusViewControllerAfterTransition;
	BOOL __allowLateralFocusMovementOutOfTabBar;
	NSMutableArray* _moreChildViewControllers;
	UIView* _accessoryView;
	NSMapTable* _rememberedFocusedItemsByViewController;
	id<UITabBarControllerDelegate> _delegate;
	NSString* __backdropGroupName;
	id<UIViewControllerAnimatedTransitioning> __animator;
	id<UIViewControllerInteractiveTransitioning> __interactor;

}

@property (setter=_setBackdropGroupName:,getter=_backdropGroupName,nonatomic,retain) NSString * _backdropGroupName;                             //@synthesize _backdropGroupName=__backdropGroupName - In the implementation block
@property (getter=_rememberedFocusedItemsByViewController,nonatomic,readonly) NSMapTable * rememberedFocusedItemsByViewController;              //@synthesize rememberedFocusedItemsByViewController=_rememberedFocusedItemsByViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreChildViewControllers;                                                                         //@synthesize moreChildViewControllers=_moreChildViewControllers - In the implementation block
@property (setter=_setAnimator:,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> _animator;                                          //@synthesize _animator=__animator - In the implementation block
@property (setter=_setInteractor:,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> _interactor;                                   //@synthesize _interactor=__interactor - In the implementation block
@property (setter=_setAccessoryView:,nonatomic,retain) UIView * _accessoryView;                                                                 //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL _shouldFocusViewControllerAfterTransition;                                                                    //@synthesize _shouldFocusViewControllerAfterTransition=__shouldFocusViewControllerAfterTransition - In the implementation block
@property (assign,setter=_setAllowLateralFocusMovementOutOfTabBar:,nonatomic) BOOL _allowLateralFocusMovementOutOfTabBar;                       //@synthesize _allowLateralFocusMovementOutOfTabBar=__allowLateralFocusMovementOutOfTabBar - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) UIViewController * selectedViewController; 
@property (assign,nonatomic) unsigned long long selectedIndex; 
@property (nonatomic,readonly) UINavigationController * moreNavigationController; 
@property (nonatomic,copy) NSArray * customizableViewControllers;                                                                               //@synthesize customizableViewControllers=_customizableViewControllers - In the implementation block
@property (nonatomic,readonly) UITabBar * tabBar; 
@property (assign,nonatomic,__weak) id<UITabBarControllerDelegate> delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+(Class)_moreNavigationControllerClass;
+(BOOL)_directlySetsContentOverlayInsetsForChildren;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(UITabBar *)tabBar;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_allContainedViewControllers;
-(id)preferredFocusedView;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)_deepestActionResponder;
-(id)_overrideTraitCollectionToPassDuringTraitChangeToChildViewController:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(BOOL)arg4 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)_shouldAdjustContentViewFrameForOffscreenFocus:(id)arg1 adjustedTabBarFrame:(CGRect)arg2 ;
-(BOOL)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(BOOL)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(void)_setUpFocusContainerGuides;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI17*)arg1 ;
-(NSArray *)viewControllers;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)__viewWillLayoutSubviews;
-(CGRect)_adjustContentViewFrameForOffscreenFocus:(CGRect)arg1 viewController:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(id<UITabBarControllerDelegate>)delegate;
-(id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setMoreNavigationControllerRestorationIdentifier;
-(void)_toggleAccessibilityHUDLongPressRecognizerIfNecessary;
-(void)_updateOffscreenStatus:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2 ;
-(BOOL)_doAllViewControllersSupportInterfaceOrientation:(long long)arg1 ;
-(id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)_adjustTabBarFrameForOffscreenFocus:(CGRect)arg1 barPosition:(long long)arg2 ;
-(void)_setNotifySplitViewControllerForSelectionChange:(BOOL)arg1 ;
-(id)_childViewControllerForMultitaskingDragExclusionRects;
-(void)_updateViewController:(id)arg1 forTabbarObservedScrollView:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id<UIViewControllerInteractiveTransitioning>)_interactor;
-(unsigned long long)supportedInterfaceOrientations;
-(id)_overridingPreferredFocusEnvironment;
-(id)_recallRememberedFocusedItemForViewController:(id)arg1 ;
-(void)_forgetFocusedItemForViewController:(id)arg1 ;
-(BOOL)_shouldFocusViewControllerAfterTransition;
-(id)_rememberedFocusedItemsByViewController;
-(void)_adjustTVTabBarForContentScrollView:(id)arg1 ;
-(UIEdgeInsets)_overlayInsetsAdjustment;
-(id)rotatingHeaderView;
-(void)_configureTargetActionForTabBarItem:(id)arg1 ;
-(UINavigationController *)moreNavigationController;
-(id)_backdropBarGroupName;
-(BOOL)_allowsAutorotation;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)transientViewController;
-(void)concealTabBarSelection;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setView:(id)arg1 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(id)rotatingFooterView;
-(void)revealTabBarSelection;
-(id)_viewControllersInTabBar;
-(id)_viewControllerForSelectAtIndex:(unsigned long long)arg1 ;
-(void)_childViewController:(id)arg1 updatedObservedScrollView:(id)arg2 ;
-(void)setCustomizableViewControllers:(NSArray *)arg1 ;
-(void)setTransientViewController:(id)arg1 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(BOOL)_notifySplitViewControllerForSelectionChange;
-(NSArray *)customizableViewControllers;
-(void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 duration:(double)arg3 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_isFocusedTabVisible;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_hideBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 ;
-(void)setDelegate:(id<UITabBarControllerDelegate>)arg1 ;
-(void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 duration:(double)arg3 ;
-(BOOL)_isBarEffectivelyHidden;
-(id)_viewControllerForTabBarItem:(id)arg1 ;
-(void)hideBarWithTransition:(int)arg1 ;
-(void)setTabBar:(UITabBar *)arg1 ;
-(void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(id)childViewControllerForStatusBarStyle;
-(id)_customInteractionControllerForAnimator:(id)arg1 ;
-(void)set_shouldFocusViewControllerAfterTransition:(BOOL)arg1 ;
-(void)showBarWithTransition:(int)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldUseOnePartRotation;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_invalidateBarLayoutIfNecessary;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)_scrollViewManagerDidFinishScrolling:(id)arg1 ;
-(BOOL)_isPresentationContextByDefault;
-(void)updateTabBarItemForViewController:(id)arg1 ;
-(BOOL)_reallyWantsFullScreenLayout;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2 ;
-(void)_setAllowLateralFocusMovementOutOfTabBar:(BOOL)arg1 ;
-(id)childViewControllerForUserInterfaceStyle;
-(BOOL)_transitionsChildViewControllers;
-(void)hideBarWithTransition:(int)arg1 duration:(double)arg2 ;
-(unsigned long long)selectedIndex;
-(void)showBarWithTransition:(int)arg1 duration:(double)arg2 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(BOOL)arg3 ;
-(BOOL)_wrapsNavigationController:(id*)arg1 ;
-(double)_childViewControllerModernTVTabBarTopInset;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)setShowsEditButtonOnLeft:(BOOL)arg1 ;
-(void)_setMaximumNumberOfItems:(unsigned long long)arg1 ;
-(void)_setSelectedViewControllerNeedsLayout;
-(void)_setAccessoryView:(id)arg1 ;
-(id)rotatingSnapshotViewForWindow:(id)arg1 ;
-(void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2 ;
-(void)viewDidLoad;
-(NSMutableArray *)moreChildViewControllers;
-(void)_setInteractor:(id)arg1 ;
-(void)setMoreChildViewControllers:(NSMutableArray *)arg1 ;
-(BOOL)_allowLateralFocusMovementOutOfTabBar;
-(id)_existingMoreNavigationController;
-(BOOL)_ignoreUnselectedTabsForStateRestoration;
-(void)_performBackGesture:(id)arg1 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)_tabBarWindowForInterfaceOrientation:(id)arg1 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_backdropGroupName;
-(BOOL)_isBarHidden;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)transitionCoordinator;
-(id)allViewControllers;
-(void)setSelectedViewController:(UIViewController *)arg1 ;
-(void)_prepareTabBar;
-(UIView *)_accessoryView;
-(id<UIViewControllerAnimatedTransitioning>)_animator;
-(void)_setAnimator:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setRestorationIdentifier:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)_isTabBarFocused;
-(void)loadView;
-(BOOL)_isModernTVTabBar;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_allowsCustomizing;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)tabBarSizingDidChange:(id)arg1 ;
-(void)beginCustomizingTabBar:(id)arg1 ;
-(BOOL)showsEditButtonOnLeft;
-(void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2 ;
-(void)_tabBarVisibilityDidChange;
-(unsigned long long)_effectiveMaxItems;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(void)_layoutContainerView;
-(void)_setBackdropGroupName:(id)arg1 ;
-(void)_tabBarItemClicked:(id)arg1 ;
-(void)_performLeftGesture:(id)arg1 ;
-(void)_performRightGesture:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_transitionView;
-(BOOL)_isLegacyTabBar;
-(long long)_tabBarPosition;
-(void)_performFocusGesture:(unsigned long long)arg1 ;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(void)_updateTabBarLayout;
-(UIViewController *)selectedViewController;
-(void)_layoutViewController:(id)arg1 ;
-(id)_selectedViewControllerInTabBar;
-(id)_viewForViewController:(id)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(CGRect)_frameForWrapperViewForViewController:(id)arg1 ;
-(CGRect)_frameForViewController:(id)arg1 ;
-(void)_setTabBarPosition:(long long)arg1 ;
-(id)_wrapperViewForViewController:(id)arg1 ;
-(void)_rebuildTabBarItemsIfNeeded;
-(void)_setSelectedTabBarItem:(id)arg1 ;
-(void)_performSelectGesture:(id)arg1 ;
-(void)dealloc;
-(void)_safeAreaInsetsDidChangeForView;
-(long long)_effectiveTabBarPosition;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGRect)_adjustTabBarFrameForSafeAreas:(CGRect)arg1 ;
-(void)_updateGestureRecognizersForTraitCollection:(id)arg1 ;
-(void)_accessibilityLongPressChanged:(id)arg1 ;
-(id)_accessibilityHUDLongPressRecognizer;
-(void)_updateLayoutForTraitCollection:(id)arg1 ;
-(void)_rebuildTabBarItemsAnimated:(BOOL)arg1 ;
-(id)childViewControllerForPointerLock;
-(void)_showBarWithTransition:(int)arg1 isExplicit:(BOOL)arg2 ;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)_performTouchDetectionGesture:(id)arg1 ;
-(void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2 ;
-(void)_rememberPresentingFocusedItem:(id)arg1 ;
@end

