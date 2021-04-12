/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIWindowAnimationController.h>

@interface _UIHostedWindowAnimationController : _UIWindowAnimationController {

	/*^block*/id _transitionActions;
	double _duration;

}

@property (nonatomic,copy) id transitionActions;              //@synthesize transitionActions=_transitionActions - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setTransitionActions:(id)arg1 ;
-(id)transitionActions;
@end

