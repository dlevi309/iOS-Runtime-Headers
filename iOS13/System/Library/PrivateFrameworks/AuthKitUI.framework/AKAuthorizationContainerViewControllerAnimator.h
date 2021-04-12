/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface AKAuthorizationContainerViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)isPresenting;
-(id)initWithPresenting:(BOOL)arg1 ;
-(id)_viewControllerForTransitionContext:(id)arg1 ;
@end

