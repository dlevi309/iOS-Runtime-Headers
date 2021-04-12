/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/SPUISearchBarDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/SBUISpotlightInitiating.h>
#import <libobjc.A.dylib/SBHLegibility.h>

@protocol SBHomeScreenTodayViewControllerDelegate;
@class SBViewControllerTransitionContext, _UILegibilitySettings, WGWidgetGroupViewController, SBUISpotlightBarNavigationController, FBDisplayLayoutElement, SPUISearchBarController, UIViewController, NSString;

@interface SBHomeScreenTodayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SPUISearchBarDelegate, SBUICoronaAnimationControllerParticipant, SBUISpotlightInitiating, SBHLegibility> {

	WGWidgetGroupViewController* _widgetViewController;
	SBUISpotlightBarNavigationController* _spotlightNavController;
	FBDisplayLayoutElement* _displayLayoutElement;
	SPUISearchBarController* _searchBarViewController;
	BOOL _scrollViewContentOffsetDirty;
	CGPoint _scrollViewLastContentOffset;
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
+(double)_verticalSpacingBetweenWidgets;
-(id<SBHomeScreenTodayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBHomeScreenTodayViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_statusBarHeightDidChange:(id)arg1 ;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(UIEdgeInsets)widgetGroupViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2 ;
-(void)searchBarDidFocus;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)_updateLegibilitySettings;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(void)cleanupAfterSpotlightDismissal;
-(id)spotlightHeaderAcquiringViewController;
-(void)_widgetEditViewWillAppear:(id)arg1 ;
-(void)_widgetEditViewDidDisappear:(id)arg1 ;
-(void)_widgetEditViewDidDisappearImplementation;
-(double)_topContentInsetForNavigationBar:(id)arg1 ;
-(double)pullDownSearchGestureYOffset;
-(UIEdgeInsets)widgetListViewEdgeInsetsIncludingSearchHeader:(BOOL)arg1 ;
-(BOOL)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1 ;
-(double)pullDownSearchGesturePercentComplete;
-(void)handleScrollingEnded:(id)arg1 ;
-(double)_maxClippingOffset;
-(id)_majorScrollView;
-(void)_coverSheetDidPresent:(id)arg1 ;
-(UIViewController *)spotlightViewController;
-(void)setShowsSearchBar:(BOOL)arg1 ;
-(id)_widgetGroupViewController;
-(CGRect)_suggestedTodayViewFrameForBounds:(CGRect)arg1 ;
-(void)_updateScrollViewContentInsetAndOffsetIfNecessary;
-(void)_configureMatchMoveAnimations;
-(void)_setRequestDisableRootFolderParallax:(BOOL)arg1 reason:(id)arg2 ;
-(void)_setRequestDisableRootFolderScrolling:(BOOL)arg1 reason:(id)arg2 ;
-(void)_removeMatchMoveAnimations;
-(BOOL)canBeginPullDownSearchGesture;
-(void)setPullToSearchState:(long long)arg1 ;
-(id)_eligibleScrollViews;
-(long long)pullToSearchState;
-(BOOL)ignoresScrolling;
-(void)handleDraggingWillEndWithTargetContentOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 forScrollView:(id)arg3 ;
-(UIEdgeInsets)defaultTodayViewContentInsets;
-(void)_configureOuterMatchMoveAnimation;
-(void)_configureInnerMatchMoveAnimation;
-(void)_applyScaleOnlyMatchMoveToView:(id)arg1 withSourceView:(id)arg2 animationKey:(id)arg3 ;
-(BOOL)showsSearchBar;
-(void)setIgnoresScrolling:(BOOL)arg1 ;
@end

