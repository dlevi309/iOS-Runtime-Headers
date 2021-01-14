/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)rotation;
-(CGPoint*)velocityInWindow;
-(double)angleOfVelocityInWindow;
-(BOOL)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
-(id<AVTransitionDriverDelegate>)transitionDriverDelegate;
-(void)setTransitionDriverDelegate:(id)arg1;
-(long long)transitionInteraction;
-(double)rotationVelocity;
-(double)pinchVelocity;
-(BOOL)lastNonZeroVelocityWasDownward;
-(UIPanGestureRecognizer *)contentTransitioningViewGestureRecognizer;
-(void)setContentTransitioningViewGestureRecognizer:(id)arg1;
-(CGPoint*)translationInWindow;
-(BOOL)isEnabled;
-(double)pinchScale;
-(CGPoint*)locationInWindow;

@end

