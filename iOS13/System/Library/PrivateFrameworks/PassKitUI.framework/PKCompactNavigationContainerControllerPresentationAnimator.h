/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIViewController, UIView, PKCompactNavigationContainerController, NSString;

@interface PKCompactNavigationContainerControllerPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _presenting;
	UIViewController* _presentingVC;
	UIView* _presentingView;
	PKCompactNavigationContainerController* _presentedVC;
	UIView* _presentedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithPresenting:(BOOL)arg1 ;
-(void)_updateWithTransitionContext:(id)arg1 ;
@end

