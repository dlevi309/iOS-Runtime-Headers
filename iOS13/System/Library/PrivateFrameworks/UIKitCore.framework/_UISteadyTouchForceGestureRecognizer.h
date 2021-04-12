/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, _UIVelocityIntegrator, NSDate;

@interface _UISteadyTouchForceGestureRecognizer : UIGestureRecognizer {

	CADisplayLink* _continuousEvaluationDisplayLink;
	_UIVelocityIntegrator* _velocityIntegrator;
	double _currentTouchForce;
	NSDate* _steadyTimestamp;
	BOOL _useOverridingMinimumDuration;
	double _overrideMinimumSteadyTouchForceDuration;
	double _minimumSteadyTouchForceDuration;

}

@property (assign,nonatomic) double minimumSteadyTouchForceDuration;              //@synthesize minimumSteadyTouchForceDuration=_minimumSteadyTouchForceDuration - In the implementation block
-(void)cancel;
-(void)reset;
-(void)setView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_endContinuousEvaluation;
-(void)_beginForContinuousEvaluationForTouches:(id)arg1 ;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(void)recognize;
-(void)_adjustSteadyForceDurationIfNeeded:(id)arg1 event:(id)arg2 ;
-(void)_evaluateTouches:(id)arg1 ;
-(void)_evaluateWithTouchForce:(double)arg1 ;
-(double)minimumSteadyTouchForceDuration;
-(void)setMinimumSteadyTouchForceDuration:(double)arg1 ;
@end

