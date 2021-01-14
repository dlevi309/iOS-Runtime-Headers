/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_endContinuousEvaluation;
-(void)_beginForContinuousEvaluationForTouches:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)recognize;
-(void)setView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_adjustSteadyForceDurationIfNeeded:(id)arg1 event:(id)arg2 ;
-(void)_evaluateTouches:(id)arg1 ;
-(void)_evaluateWithTouchForce:(double)arg1 ;
-(double)minimumSteadyTouchForceDuration;
-(void)setMinimumSteadyTouchForceDuration:(double)arg1 ;
-(void)cancel;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
@end

