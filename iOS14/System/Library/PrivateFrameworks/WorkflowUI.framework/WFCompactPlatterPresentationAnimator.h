/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface WFCompactPlatterPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initForPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(void)_animatePresentationWithTransitionContext:(id)arg1 ;
-(void)_animateDismissalWithTransitionContext:(id)arg1 ;
@end

