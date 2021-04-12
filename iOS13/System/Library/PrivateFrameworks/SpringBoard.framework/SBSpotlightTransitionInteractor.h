/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBViewControllerInteractiveTransitioning.h>

@protocol SBViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning;
@class NSString;

@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	id<UIViewControllerAnimatedTransitioning> _animator;
	double _completionSpeed;
	long long _completionCurve;

}

@property (assign,nonatomic) double completionSpeed;                    //@synthesize completionSpeed=_completionSpeed - In the implementation block
@property (assign,nonatomic) long long completionCurve;                 //@synthesize completionCurve=_completionCurve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(id)init;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(double)completionSpeed;
-(long long)completionCurve;
-(void)setCompletionSpeed:(double)arg1 ;
-(id)initWithAnimator:(id)arg1 ;
-(void)setCompletionCurve:(long long)arg1 ;
-(void)cancelTransition;
-(void)updateTransition:(double)arg1 ;
@end

