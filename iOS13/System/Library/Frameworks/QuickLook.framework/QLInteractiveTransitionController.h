/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLTransitionController.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class NSString;

@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning> {

	double _initialTransitioningViewWidth;
	double _completeProgress;

}

@property (assign,nonatomic) double completeProgress;                   //@synthesize completeProgress=_completeProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(double)transitionDuration:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_performForcedDismissal;
-(void)setCompleteProgress:(double)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 isFinal:(BOOL)arg2 ;
-(double)completeProgress;
@end

