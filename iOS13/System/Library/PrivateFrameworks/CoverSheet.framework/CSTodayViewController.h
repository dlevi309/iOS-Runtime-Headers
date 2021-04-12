/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/CSStatusBarBackgroundIntersecting.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/CSDateViewScrolling.h>
#import <libobjc.A.dylib/SPUISearchBarDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate, CSSpotlightPresenting, CSTodayViewControllerDelegate, CSPersistentContentLayoutProviding, SBFAuthenticationStatusProvider, CSWidgetGroupViewControllerProviding;
@class _UILegibilitySettings, CSComponent, NSSet, WGWidgetGroupViewController, UIView, CSLayoutStrategy, CSPageViewController, SBViewControllerTransitionContext, CSPaddingHeaderViewController, CSTodayPageView, NSString;

@interface CSTodayViewController : CSCoverSheetViewControllerBase <WGWidgetGroupViewControllerDelegate, CSStatusBarBackgroundIntersecting, SBFLegibilitySettingsProviderDelegate, CSDateViewScrolling, SPUISearchBarDelegate, SBFLegibilitySettingsProvider> {

	CSComponent* _dateViewComponent;
	CSComponent* _statusBarBackgroundComponent;
	CSComponent* _proudLockComponent;
	CSComponent* _homeAffordanceComponent;
	CSComponent* _controlCenterGrabberComponent;
	NSSet* _contentViews;
	id<SBFLegibilitySettingsProvider> _spotlightLegibilityProvider;
	WGWidgetGroupViewController* _todayViewController;
	UIView* _fakeCanvasView;
	BOOL _pullToSearchPossible;
	BOOL _pullToSearchRecognizing;
	BOOL _scrollViewContentOffsetDirty;
	CGPoint _scrollViewLastContentOffset;
	BOOL _shouldAnimateNextDateComponentUpdate;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	CSLayoutStrategy* _layoutStrategy;
	id<CSSpotlightPresenting> _spotlightPresenter;
	id<CSTodayViewControllerDelegate> _todayViewControllerDelegate;
	id<CSPersistentContentLayoutProviding> _persistentLayoutProviding;
	CSPageViewController* _pageController;
	SBViewControllerTransitionContext* _transitionContext;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
	id<CSWidgetGroupViewControllerProviding> _widgetGroupViewControllerProvider;
	CSPaddingHeaderViewController* _timePaddingViewController;

}

@property (nonatomic,retain) CSTodayPageView * view; 
@property (assign,nonatomic,__weak) CSPaddingHeaderViewController * timePaddingViewController;                        //@synthesize timePaddingViewController=_timePaddingViewController - In the implementation block
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                       //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<CSTodayViewControllerDelegate> todayViewControllerDelegate;                    //@synthesize todayViewControllerDelegate=_todayViewControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CSPersistentContentLayoutProviding> persistentLayoutProviding;                 //@synthesize persistentLayoutProviding=_persistentLayoutProviding - In the implementation block
@property (assign,nonatomic,__weak) CSPageViewController * pageController;                                            //@synthesize pageController=_pageController - In the implementation block
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext;                                   //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                        //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,retain) id<CSWidgetGroupViewControllerProviding> widgetGroupViewControllerProvider;              //@synthesize widgetGroupViewControllerProvider=_widgetGroupViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<CSSpotlightPresenting> spotlightPresenter;                                            //@synthesize spotlightPresenter=_spotlightPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double distanceFromBarToContent; 
@property (nonatomic,readonly) double topContentInset; 
@property (nonatomic,readonly) double clippingOffset; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
+(Class)viewClass;
+(BOOL)_isPortrait;
+(double)verticalSpacingBetweenWidgets;
-(id)init;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateContentInsets;
-(double)_statusBarHeight;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(CSPageViewController *)pageController;
-(void)setPageController:(CSPageViewController *)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateAppearance;
-(void)_updateBehavior;
-(double)topContentInset;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)_searchBarViewController;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(UIEdgeInsets)widgetGroupViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2 ;
-(long long)participantState;
-(void)searchBarDidFocus;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(id<CSSpotlightPresenting>)spotlightPresenter;
-(void)setSpotlightPresenter:(id<CSSpotlightPresenting>)arg1 ;
-(void)setTodayViewControllerDelegate:(id<CSTodayViewControllerDelegate>)arg1 ;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(void)cleanupAfterSpotlightDismissal;
-(double)clippingOffset;
-(void)updateAppearanceForHidden:(BOOL)arg1 offset:(CGPoint)arg2 ;
-(void)updateAppearanceForStatusBarBackgroundHidden:(BOOL)arg1 ;
-(double)distanceFromBarToContent;
-(void)_evaluateContentViews;
-(void)updateAccessoryLegibility;
-(void)_prepareChildViewControllersIfNecessary;
-(void)_updateSpotlightLegibility;
-(void)_setUpScrollView:(id)arg1 ;
-(void)_widgetEditViewWillAppear:(id)arg1 ;
-(void)_widgetEditViewWillDisappear:(id)arg1 ;
-(void)_widgetEditViewDidDisappear:(id)arg1 ;
-(CGSize)_timePaddingSize;
-(void)_widgetEditViewDidDisappearImplementation;
-(void)_updateAppearanceForScrollView:(id)arg1 ;
-(double)_topContentInsetForNavigationBar:(id)arg1 ;
-(double)pullDownSearchGestureYOffset;
-(UIEdgeInsets)widgetListViewEdgeInsetsIncludingSearchHeader:(BOOL)arg1 ;
-(BOOL)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1 ;
-(double)pullDownSearchGesturePercentComplete;
-(void)handleDraggingWillEndWithTargetContentOffset:(inout CGPoint*)arg1 forScrollView:(id)arg2 ;
-(void)handleScrollingEnded:(id)arg1 ;
-(BOOL)_allowsDateViewScroll;
-(double)_dateMinY;
-(void)_updateAppearanceForScrollView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_initializeTodayViewControllerIfNecessary;
-(id<CSWidgetGroupViewControllerProviding>)widgetGroupViewControllerProvider;
-(void)_setTodayViewController:(id)arg1 ;
-(id)_dateMovingScrollView;
-(double)_totalDistanceForBlurTransition;
-(double)_maxClippingOffset;
-(id)_majorScrollView;
-(id<CSTodayViewControllerDelegate>)todayViewControllerDelegate;
-(id<CSPersistentContentLayoutProviding>)persistentLayoutProviding;
-(void)setPersistentLayoutProviding:(id<CSPersistentContentLayoutProviding>)arg1 ;
-(void)setWidgetGroupViewControllerProvider:(id<CSWidgetGroupViewControllerProviding>)arg1 ;
-(CSPaddingHeaderViewController *)timePaddingViewController;
-(void)setTimePaddingViewController:(CSPaddingHeaderViewController *)arg1 ;
@end

