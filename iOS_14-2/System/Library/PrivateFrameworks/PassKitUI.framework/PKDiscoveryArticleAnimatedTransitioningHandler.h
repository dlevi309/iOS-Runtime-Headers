/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class PKPassGroupsViewController, UIView, PKDiscoveryArticleViewController, NSString;

@interface PKDiscoveryArticleAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning> {

	PKPassGroupsViewController* _presentingVC;
	UIView* _presentingView;
	PKDiscoveryArticleViewController* _presentedVC;
	UIView* _presentedView;
	UIView* _containerView;
	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _completed;
	BOOL _presenting;
	double _duration;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)_moveCardView:(id)arg1 toView:(id)arg2 belowView:(id)arg3 ;
-(void)_updateWithTransitionContext:(id)arg1 ;
-(BOOL)isPresenting;
-(double)duration;
@end

