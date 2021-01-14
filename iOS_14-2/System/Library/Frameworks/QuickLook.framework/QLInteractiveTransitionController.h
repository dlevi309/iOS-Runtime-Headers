/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)_performForcedDismissal;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)setCompleteProgress:(double)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 isFinal:(BOOL)arg2 ;
-(double)completeProgress;
@end

