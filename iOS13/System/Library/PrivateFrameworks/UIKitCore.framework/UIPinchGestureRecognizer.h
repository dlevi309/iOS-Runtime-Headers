/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialScale;
	double _lastEventTime;
	double _velocity;
	double _previousVelocity;
	double _lastNonZeroTimestampDelta;
	double _scaleThreshold;
	CGAffineTransform _transform;
	CGPoint _anchorSceneReferencePoint;
	UITouch* _touches[2];
	double _hysteresis;
	id _transformAnalyzer;
	unsigned _loggedPinchStatistic : 1;
	unsigned _loggedZoomStatistic : 1;
	unsigned _endsOnSingleTouch : 1;
	BOOL __enableNestedHysteresis;

}

@property (assign,nonatomic) double scaleThreshold;                                                    //@synthesize scaleThreshold=_scaleThreshold - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (assign,setter=_setHysteresis:,getter=_hysteresis,nonatomic) double hysteresis;              //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL _enableNestedHysteresis;                                             //@synthesize _enableNestedHysteresis=__enableNestedHysteresis - In the implementation block
@property (assign,nonatomic) double scale; 
@property (nonatomic,readonly) double velocity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)transform;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(double)velocity;
-(CGPoint)anchorPoint;
-(BOOL)_shouldReceiveTransformEvent:(id)arg1 ;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)_hysteresis;
-(void)_resetGestureRecognizer;
-(void)_setHysteresis:(double)arg1 ;
-(void)_cancelOrFail;
-(double)_hysteresisForTouches:(id)arg1 ;
-(void)_applyScale:(double)arg1 atLocation:(CGPoint)arg2 touchDistance:(double)arg3 withEvent:(id)arg4 ;
-(void)_endOrFail;
-(void)_logStatisticsForScale:(double)arg1 ;
-(BOOL)_endsOnSingleTouch;
-(void)_setEndsOnSingleTouch:(BOOL)arg1 ;
-(double)scaleThreshold;
-(void)setScaleThreshold:(double)arg1 ;
-(BOOL)_enableNestedHysteresis;
-(void)set_enableNestedHysteresis:(BOOL)arg1 ;
@end

