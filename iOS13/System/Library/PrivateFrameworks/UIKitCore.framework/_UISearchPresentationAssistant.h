/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>

@protocol _UISearchControllerPresenting, UIViewControllerTransitionCoordinator;
@class UIPresentationController, UIView, UIDimmingView;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {

	UIPresentationController* _searchPresentationController;
	UIView* _searchBarContainerView;
	UIDimmingView* _dimmingView;
	BOOL _isFormSheetPresentation;
	BOOL _presentationWasAnimated;
	UIPresentationController*<_UISearchControllerPresenting> _adaptivePresentationController;
	id<UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;

}

@property (assign,nonatomic) BOOL presentationWasAnimated;                                                                         //@synthesize presentationWasAnimated=_presentationWasAnimated - In the implementation block
@property (assign,nonatomic) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController;              //@synthesize adaptivePresentationController=_adaptivePresentationController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;                             //@synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator - In the implementation block
-(void)dealloc;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)dimmingView;
-(id)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(id)initWithSearchPresentationController:(id)arg1 ;
-(void)setPresentationWasAnimated:(BOOL)arg1 ;
-(void)ensureAppropriatelySizedSearchBar:(id)arg1 ;
-(void)setAdaptivePresentationController:(UIPresentationController*<_UISearchControllerPresenting>)arg1 ;
-(BOOL)presentationIsPopoverToOverFullScreenAdaptation;
-(id)_searchBarContainerSuperview;
-(CGRect)optimalFrameForSearchBar:(id)arg1 ;
-(BOOL)_currentTransitionIsRotating;
-(BOOL)searchBarWillResizeForScopeBar;
-(id)_searchControllerPresenting;
-(CGRect)_containerFrame;
-(BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1 ;
-(id)locateNavigationController;
-(double)_statusBarHeightChangeDueToRotation;
-(BOOL)_statusBarPreferredHidden;
-(void)removeContainerViewFromSuperview;
-(CGSize)updateSearchBarContainerFrame;
-(BOOL)presentationWasAnimated;
-(id<UIViewControllerTransitionCoordinator>)transitioningToSizeCoordinator;
-(void)setTransitioningToSizeCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end

