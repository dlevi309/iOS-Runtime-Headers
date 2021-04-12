/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, UIView, NSMapTable, NSString;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _placeholderView;
	NSMapTable* _excisedSearchBarConstraitMap;
	NSMapTable* _placeholderConstraitMap;
	CGRect _finalFrameForContainerView;
	SCD_Struct_UI62 _controllerFlags;

}

@property (nonatomic,readonly) UIView * backgroundObscuringView; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView;                                                                    //@synthesize finalFrameForContainerView=_finalFrameForContainerView - In the implementation block
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(BOOL)searchBarToBecomeTopAttached;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(unsigned long long)edgeForHidingNavigationBar;
-(CGRect)finalFrameForContainerView;
-(void)_placeSearchBarBackIntoOriginalContext;
-(long long)adaptivePresentationStyle;
-(void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)arg1 ;
-(void)_updateContainerFinalFrameForNonExcisedSearchBar;
-(void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)arg1 ;
-(void)_transitionToDidEnd;
-(double)statusBarAdjustment;
-(void)_exciseSearchBarFromCurrentContext;
-(UIView *)searchBarContainerView;
-(void)dismissalTransitionWillBegin;
-(void)hideBackgroundObscuringView;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)shouldAccountForStatusBar;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;
-(void)showBackgroundObscuringView;
-(double)_visibleRefreshControlHeightForTableView:(id)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(UIView *)backgroundObscuringView;
-(BOOL)animatorShouldLayoutPresentationViews;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)searchBarShouldClipToBounds;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
-(void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)arg1 ;
-(void)_updatePresentingViewControllerContentScrollViewWithOffsets:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
-(BOOL)resultsUnderlapsSearchBar;
-(id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3 ;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
-(BOOL)searchBarCanContainScopeBar;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)forceObeyNavigationBarInsets;
-(void)_layoutPresentationWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(double)resultsControllerContentOffset;
-(void)_transitionFromWillBegin;
-(void)dealloc;
-(void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)arg1 ;
@end

