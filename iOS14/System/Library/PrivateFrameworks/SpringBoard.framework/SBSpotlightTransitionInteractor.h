/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelTransition;
-(id)init;
-(long long)completionCurve;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)setCompletionCurve:(long long)arg1 ;
-(void)updateTransition:(double)arg1 ;
-(void)finishInteractiveTransition;
-(void)setCompletionSpeed:(double)arg1 ;
-(double)completionSpeed;
-(id)initWithAnimator:(id)arg1 ;
@end

