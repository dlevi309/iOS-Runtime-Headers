/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, _UIGestureRecognizerTransformAnalyzer;

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
	_UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(double)_hysteresis;
-(double)velocity;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(void)_endOrFail;
-(void)_cancelOrFail;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)scale;
-(double)scaleThreshold;
-(void)_setEndsOnSingleTouch:(BOOL)arg1 ;
-(void)_applyScale:(double)arg1 atLocation:(CGPoint)arg2 touchDistance:(double)arg3 withEvent:(id)arg4 ;
-(BOOL)_endsOnSingleTouch;
-(CGPoint)anchorPoint;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_enableNestedHysteresis;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(double)_hysteresisForTouches:(id)arg1 ;
-(CGAffineTransform)transform;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)set_enableNestedHysteresis:(BOOL)arg1 ;
-(void)setScaleThreshold:(double)arg1 ;
-(void)_logStatisticsForScale:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_setHysteresis:(double)arg1 ;
@end

