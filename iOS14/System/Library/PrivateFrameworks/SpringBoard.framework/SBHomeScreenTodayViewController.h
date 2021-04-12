/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/SPUISearchBarDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/SBUISpotlightInitiating.h>
#import <libobjc.A.dylib/SBHLegibility.h>
#import <libobjc.A.dylib/SBHOccludable.h>

@protocol SBHomeScreenTodayViewControllerDelegate;
@class WGWidgetGroupViewController, SBUISpotlightBarNavigationController, FBDisplayLayoutElement, SPUISearchBarController, SBViewControllerTransitionContext, _UILegibilitySettings, UIViewController, NSString;

@interface SBHomeScreenTodayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SPUISearchBarDelegate, SBUICoronaAnimationControllerParticipant, SBUISpotlightInitiating, SBHLegibility, SBHOccludable> {

	WGWidgetGroupViewController* _widgetViewController;
	SBUISpotlightBarNavigationController* _spotlightNavController;
	FBDisplayLayoutElement* _displayLayoutElement;
	SPUISearchBarController* _searchBarViewController;
	BOOL _scrollViewContentOffsetDirty;
	CGPoint _scrollViewLastContentOffset;
	BOOL _occluded;
	BOOL _showsSearchBar;
	BOOL _ignoresScrolling;
	SBViewControllerTransitionContext* _transitionContext;
	_UILegibilitySettings* _legibilitySettings;
	UIViewController* _spotlightViewController;
	id<SBHomeScreenTodayViewControllerDelegate> _delegate;
	long long _pullToSearchState;

}

@property (assign,nonatomic,__weak) id<SBHomeScreenTodayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long pullToSearchState;                                              //@synthesize pullToSearchState=_pullToSearchState - In the implementation block
@property (assign,nonatomic) BOOL ignoresScrolling;                                                    //@synthesize ignoresScrolling=_ignoresScrolling - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIViewController * spotlightViewController;                             //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (assign,nonatomic) BOOL showsSearchBar;                                                      //@synthesize showsSearchBar=_showsSearchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext;                    //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,getter=isOccluded,nonatomic) BOOL occluded;                                          //@synthesize occluded=_occluded - In the implementation block
+(double)_verticalSpacingBetweenWidgets;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_widgetEditViewDidDisappear:(id)arg1 ;
-(void)cleanupAfterSpotlightDismissal;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)widgetListViewEdgeInsetsIncludingSearchHeader:(BOOL)arg1 ;
-(void)_setRequestDisableRootFolderScrolling:(BOOL)arg1 reason:(id)arg2 ;
-(id)spotlightHeaderAcquiringViewController;
-(void)setIgnoresScrolling:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setOccluded:(BOOL)arg1 ;
-(void)_statusBarHeightDidChange:(id)arg1 ;
-(void)_removeMatchMoveAnimations;
-(void)_updateScrollViewContentInsetAndOffsetIfNecessary;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(double)_maxClippingOffset;
-(void)setShowsSearchBar:(BOOL)arg1 ;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(void)_coverSheetDidPresent:(id)arg1 ;
-(id<SBHomeScreenTodayViewControllerDelegate>)delegate;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_configureOuterMatchMoveAnimation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)searchBarDidFocus;
-(long long)pullToSearchState;
-(double)pullDownSearchGestureYOffset;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(double)_topContentInsetForNavigationBar:(id)arg1 ;
-(void)handleDraggingWillEndWithTargetContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 forScrollView:(id)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)isOccluded;
-(UIEdgeInsets)widgetGroupViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2 ;
-(void)setDelegate:(id<SBHomeScreenTodayViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(UIEdgeInsets)defaultTodayViewContentInsets;
-(BOOL)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1 ;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)_applyScaleOnlyMatchMoveToView:(id)arg1 withSourceView:(id)arg2 animationKey:(id)arg3 ;
-(BOOL)showsSearchBar;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_widgetEditViewDidDisappearImplementation;
-(void)handleScrollingEnded:(id)arg1 ;
-(void)viewDidLoad;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_widgetGroupViewController;
-(CGRect)_suggestedTodayViewFrameForBounds:(CGRect)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setRequestDisableRootFolderParallax:(BOOL)arg1 reason:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setPullToSearchState:(long long)arg1 ;
-(id)_majorScrollView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)pullDownSearchGesturePercentComplete;
-(BOOL)canBeginPullDownSearchGesture;
-(void)_widgetEditViewWillAppear:(id)arg1 ;
-(BOOL)ignoresScrolling;
-(void)_configureMatchMoveAnimations;
-(void)_configureInnerMatchMoveAnimation;
-(void)_resetScrollViewInsets;
-(id)_eligibleScrollViews;
-(UIViewController *)spotlightViewController;
-(void)_updateLegibilitySettings;
@end

