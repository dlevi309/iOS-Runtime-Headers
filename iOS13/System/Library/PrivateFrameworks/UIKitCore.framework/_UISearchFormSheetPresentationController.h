/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class UIView, _UISearchPresentationAssistant, NSString;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _wrapperView;
	CGRect finalFrameForContainerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)presentedView;
-(long long)adaptivePresentationStyle;
-(void)containerViewWillLayoutSubviews;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)presentationTransitionWillBegin;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionFromWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(void)_transitionToDidEnd;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIView *)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(BOOL)shouldAccountForStatusBar;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(CGRect)finalFrameForContainerView;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
-(void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2 ;
-(BOOL)_shouldSubscribeToKeyboardNotifications;
@end

