/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIWindowAnimationController.h>

@interface _UIHostedWindowAnimationController : _UIWindowAnimationController {

	/*^block*/id _transitionActions;
	double _duration;

}

@property (nonatomic,copy) id transitionActions;              //@synthesize transitionActions=_transitionActions - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
-(void)animateTransition:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setTransitionActions:(id)arg1 ;
-(double)duration;
-(id)transitionActions;
@end

