/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(BOOL)searchBarToBecomeTopAttached;
-(unsigned long long)edgeForHidingNavigationBar;
-(CGRect)finalFrameForContainerView;
-(long long)adaptivePresentationStyle;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_transitionToDidEnd;
-(double)statusBarAdjustment;
-(id)presentedView;
-(UIView *)searchBarContainerView;
-(void)dismissalTransitionWillBegin;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)shouldAccountForStatusBar;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2 ;
-(BOOL)_shouldSubscribeToKeyboardNotifications;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)animatorShouldLayoutPresentationViews;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)searchBarShouldClipToBounds;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)resultsUnderlapsSearchBar;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionWillBegin;
-(BOOL)searchBarCanContainScopeBar;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)forceObeyNavigationBarInsets;
-(double)resultsControllerContentOffset;
-(void)_transitionFromWillBegin;
-(void)dealloc;
@end

