/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>

@protocol _UISearchControllerPresenting, UIViewControllerTransitionCoordinator;
@class UIPresentationController, UIView, UIDimmingView, NSString;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dimmingViewWasTapped:(id)arg1 ;
-(BOOL)searchBarToBecomeTopAttached;
-(id)initWithSearchPresentationController:(id)arg1 ;
-(void)setTransitioningToSizeCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
-(CGRect)_containerFrame;
-(double)statusBarAdjustment;
-(id)locateNavigationController;
-(BOOL)searchBarWillResizeForScopeBar;
-(id)searchBarContainerView;
-(BOOL)presentationIsPopoverToOverFullScreenAdaptation;
-(void)setPresentationWasAnimated:(BOOL)arg1 ;
-(void)setAdaptivePresentationController:(UIPresentationController*<_UISearchControllerPresenting>)arg1 ;
-(BOOL)shouldAccountForStatusBar;
-(CGRect)optimalFrameForSearchBar:(id)arg1 ;
-(void)removeContainerViewFromSuperview;
-(BOOL)_statusBarPreferredHidden;
-(id)_searchControllerPresenting;
-(CGSize)updateSearchBarContainerFrame;
-(BOOL)presentationWasAnimated;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)_currentTransitionIsRotating;
-(void)ensureAppropriatelySizedSearchBar:(id)arg1 ;
-(id)_searchBarContainerSuperview;
-(double)_statusBarHeightChangeDueToRotation;
-(id)dimmingView;
-(double)resultsControllerContentOffset;
-(BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1 ;
-(id<UIViewControllerTransitionCoordinator>)transitioningToSizeCoordinator;
-(void)dealloc;
@end

