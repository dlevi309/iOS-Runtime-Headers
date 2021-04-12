/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;
@class NSString;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning> {

	double _percentComplete;
	BOOL _presenting;
	id<SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBFramewiseInteractiveTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                               //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,readonly) double percentVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)delegate;
-(void)setDelegate:(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)percentComplete;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)supportsRestarting;
-(double)percentVisible;
@end

