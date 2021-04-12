/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SPUISearchBarDelegate.h>
#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBTodayViewSpotlightPresenterDelegate;
@class SBHHomePullToSearchSettings, SPUISearchBarController, _SBTodaySpotlightViewController, UIView, UIScrollView, SBFFluidBehaviorSettings, SBHFeatherBlurView, NSLayoutConstraint, NSArray, MTMaterialView, _UIPortalView, NSMutableSet, NSString;

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver> {

	SBHHomePullToSearchSettings* _pullToSearchSettings;
	BOOL _scrollViewBeganScrollingFromTop;
	SPUISearchBarController* _searchBarViewController;
	_SBTodaySpotlightViewController* _spotlightViewController;
	UIView* _containerView;
	UIScrollView* _scrollView;
	id<SBTodayViewSpotlightPresenterDelegate> _delegate;
	SBFFluidBehaviorSettings* _searchAnimationSettings;
	long long _searchState;
	SBHFeatherBlurView* _featherBlurView;
	NSLayoutConstraint* _featherBlurHeightConstraint;
	NSArray* _searchBarGradientMaskLayers;
	MTMaterialView* _searchBackdropView;
	_UIPortalView* _searchBarPortalView;
	NSLayoutConstraint* _searchBarViewTopConstraint;
	NSMutableSet* _searchBarPortalRequirementReasons;

}

@property (nonatomic,retain) UIView * containerView;                                                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<SBTodayViewSpotlightPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * searchAnimationSettings;                     //@synthesize searchAnimationSettings=_searchAnimationSettings - In the implementation block
@property (assign,nonatomic) long long searchState;                                                  //@synthesize searchState=_searchState - In the implementation block
@property (assign,nonatomic) BOOL scrollViewBeganScrollingFromTop;                                   //@synthesize scrollViewBeganScrollingFromTop=_scrollViewBeganScrollingFromTop - In the implementation block
@property (nonatomic,retain) SBHFeatherBlurView * featherBlurView;                                   //@synthesize featherBlurView=_featherBlurView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * featherBlurHeightConstraint;                       //@synthesize featherBlurHeightConstraint=_featherBlurHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * searchBarGradientMaskLayers;                                  //@synthesize searchBarGradientMaskLayers=_searchBarGradientMaskLayers - In the implementation block
@property (nonatomic,retain) MTMaterialView * searchBackdropView;                                    //@synthesize searchBackdropView=_searchBackdropView - In the implementation block
@property (nonatomic,retain) _SBTodaySpotlightViewController * spotlightViewController;              //@synthesize spotlightViewController=_spotlightViewController - In the implementation block
@property (nonatomic,retain) _UIPortalView * searchBarPortalView;                                    //@synthesize searchBarPortalView=_searchBarPortalView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * searchBarViewTopConstraint;                        //@synthesize searchBarViewTopConstraint=_searchBarViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchBarPortalRequirementReasons;                       //@synthesize searchBarPortalRequirementReasons=_searchBarPortalRequirementReasons - In the implementation block
@property (nonatomic,readonly) SPUISearchBarController * searchBarViewController;                    //@synthesize searchBarViewController=_searchBarViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTMaterialView *)searchBackdropView;
-(void)setContainerView:(UIView *)arg1 ;
-(id<SBTodayViewSpotlightPresenterDelegate>)delegate;
-(NSArray *)searchBarGradientMaskLayers;
-(void)setSearchBarGradientMaskLayers:(NSArray *)arg1 ;
-(void)searchBarDidFocus;
-(void)_layoutSearchViewsWithMode:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_layoutSearchViews;
-(double)_rubberbandingOffsetForContentOffset:(CGPoint)arg1 ;
-(SBFFluidBehaviorSettings *)searchAnimationSettings;
-(void)setSearchAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(BOOL)scrollViewBeganScrollingFromTop;
-(void)setScrollViewBeganScrollingFromTop:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setDelegate:(id<SBTodayViewSpotlightPresenterDelegate>)arg1 ;
-(UIView *)containerView;
-(SPUISearchBarController *)searchBarViewController;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)dismissSearchView;
-(double)_topOffset;
-(void)setSearchState:(long long)arg1 ;
-(long long)searchState;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)isPresenting;
-(UIScrollView *)scrollView;
-(_SBTodaySpotlightViewController *)spotlightViewController;
-(void)layout;
-(id)sharedRemoteSearchViewController;
-(void)dismissSpotlightAnimated:(BOOL)arg1 ;
-(void)setSpotlightViewController:(_SBTodaySpotlightViewController *)arg1 ;
-(id)initWithSearchBarViewController:(id)arg1 containerView:(id)arg2 scrollView:(id)arg3 delegate:(id)arg4 ;
-(void)containerViewDidMoveToWindow:(id)arg1 ;
-(void)containerViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 ;
-(void)_setUpSearchAnimationSettings;
-(void)_setUpSearchBar;
-(void)_setUpSearchBackdrop;
-(void)_setUpSearchBackdropMatchMoveAnimation;
-(void)_setUpFeatherBackgroundMatchMoveAnimations;
-(void)_willPresentSpotlightAnimated:(BOOL)arg1 ;
-(void)_beginRequiringSearchBarPortalViewForReason:(id)arg1 ;
-(double)_spotlightPresentationProgressForOffset:(double)arg1 ;
-(void)_didPresentSpotlight;
-(void)_willDismissSpotlightAnimated:(BOOL)arg1 ;
-(void)_endRequiringSearchBarPortalViewForReason:(id)arg1 ;
-(void)_didDismissSpotlight;
-(void)presentSpotlightAnimated:(BOOL)arg1 ;
-(SBHFeatherBlurView *)featherBlurView;
-(void)setFeatherBlurView:(SBHFeatherBlurView *)arg1 ;
-(NSLayoutConstraint *)featherBlurHeightConstraint;
-(void)setFeatherBlurHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSearchBackdropView:(MTMaterialView *)arg1 ;
-(_UIPortalView *)searchBarPortalView;
-(void)setSearchBarPortalView:(_UIPortalView *)arg1 ;
-(NSLayoutConstraint *)searchBarViewTopConstraint;
-(void)setSearchBarViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSMutableSet *)searchBarPortalRequirementReasons;
-(void)setSearchBarPortalRequirementReasons:(NSMutableSet *)arg1 ;
@end
