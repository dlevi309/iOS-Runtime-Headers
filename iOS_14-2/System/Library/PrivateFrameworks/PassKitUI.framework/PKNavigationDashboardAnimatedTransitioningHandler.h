/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class PKPassGroupsViewController, UIView, PKNavigationDashboardPassViewController, PKPassthroughView, UIViewPropertyAnimator, PKPGSVTransitionInterstitialView, NSString;

@interface PKNavigationDashboardAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	PKPassGroupsViewController* _presentingVC;
	UIView* _presentingView;
	PKNavigationDashboardPassViewController* _presentedVC;
	UIView* _presentedView;
	PKPassthroughView* _navigationItemsView;
	id<UIViewControllerContextTransitioning> _transitionContext;
	double _animationStartTime;
	BOOL _boostedPresentation;
	BOOL _completed;
	UIViewPropertyAnimator* _alphaPropertyAnimator;
	BOOL _presenting;
	BOOL _dragged;
	double _duration;
	PKPGSVTransitionInterstitialView* _leadingInterstitialItemView;
	PKPGSVTransitionInterstitialView* _trailingInterstitialItemView;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                          //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) double duration;                                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (nonatomic,retain) PKPGSVTransitionInterstitialView * leadingInterstitialItemView;               //@synthesize leadingInterstitialItemView=_leadingInterstitialItemView - In the implementation block
@property (nonatomic,retain) PKPGSVTransitionInterstitialView * trailingInterstitialItemView;              //@synthesize trailingInterstitialItemView=_trailingInterstitialItemView - In the implementation block
@property (assign,getter=wasDragged,nonatomic) BOOL dragged;                                               //@synthesize dragged=_dragged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_dismiss;
-(void)setPresenting:(BOOL)arg1 ;
-(void)_updateWithTransitionContext:(id)arg1 ;
-(double)_contentOffsetAnimationDurationForCollectionView:(id)arg1 ;
-(void)_startPresentation;
-(void)_cancelPresentation;
-(void)_completePresentation;
-(void)_moveGroupView:(id)arg1 toView:(id)arg2 belowView:(id)arg3 ;
-(void)_completeCancelledPresentation;
-(void)_clearNavigationItems;
-(void)boostPresentation;
-(void)completePresentationImmediately;
-(PKPGSVTransitionInterstitialView *)leadingInterstitialItemView;
-(void)setLeadingInterstitialItemView:(PKPGSVTransitionInterstitialView *)arg1 ;
-(PKPGSVTransitionInterstitialView *)trailingInterstitialItemView;
-(BOOL)wasDragged;
-(BOOL)wantsInteractiveStart;
-(void)setTrailingInterstitialItemView:(PKPGSVTransitionInterstitialView *)arg1 ;
-(void)setDragged:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(double)duration;
-(void)cancel;
@end

