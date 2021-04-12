/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

@class UIPanGestureRecognizer;


@protocol AVTransitionDriver <UIInteraction>
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic,__weak) id<AVTransitionDriverDelegate> transitionDriverDelegate; 
@property (nonatomic,readonly) long long transitionInteraction; 
@property (nonatomic,readonly) double rotation; 
@property (nonatomic,readonly) double rotationVelocity; 
@property (nonatomic,readonly) double pinchScale; 
@property (nonatomic,readonly) double pinchVelocity; 
@property (nonatomic,readonly) BOOL lastNonZeroVelocityWasDownward; 
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * contentTransitioningViewGestureRecognizer; 
@required
-(BOOL)isEnabled;
-(double)rotation;
-(CGPoint*)locationInWindow;
-(CGPoint*)translationInWindow;
-(CGPoint*)velocityInWindow;
-(double)angleOfVelocityInWindow;
-(BOOL)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
-(id<AVTransitionDriverDelegate>)transitionDriverDelegate;
-(void)setTransitionDriverDelegate:(id)arg1;
-(long long)transitionInteraction;
-(double)rotationVelocity;
-(double)pinchScale;
-(double)pinchVelocity;
-(BOOL)lastNonZeroVelocityWasDownward;
-(UIPanGestureRecognizer *)contentTransitioningViewGestureRecognizer;
-(void)setContentTransitioningViewGestureRecognizer:(id)arg1;

@end

