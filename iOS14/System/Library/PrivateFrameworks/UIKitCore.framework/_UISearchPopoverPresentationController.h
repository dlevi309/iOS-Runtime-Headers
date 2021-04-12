/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, UIView, NSString;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
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
-(BOOL)searchBarToBecomeTopAttached;
-(unsigned long long)edgeForHidingNavigationBar;
-(CGRect)finalFrameForContainerView;
-(long long)adaptivePresentationStyle;
-(void)_transitionToDidEnd;
-(double)statusBarAdjustment;
-(UIView *)searchBarContainerView;
-(BOOL)shouldAccountForStatusBar;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)_forcePresentationInPresenterScene;
-(BOOL)animatorShouldLayoutPresentationViews;
-(id)_popoverHostingWindow;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)searchBarShouldClipToBounds;
-(BOOL)resultsUnderlapsSearchBar;
-(void)presentationTransitionWillBegin;
-(BOOL)searchBarCanContainScopeBar;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)forceObeyNavigationBarInsets;
-(double)resultsControllerContentOffset;
-(void)_transitionFromWillBegin;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI9)arg1 ;
@end

