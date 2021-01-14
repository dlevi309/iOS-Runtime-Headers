/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface OFUITrackingPinchGestureRecognizer : UIPinchGestureRecognizer {

	unsigned long long _zoomMode;
	unsigned long long _leftTouchIndex;
	unsigned long long _rightTouchIndex;
	CGPoint _leftTouchLocation;
	CGPoint _rightTouchLocation;
	CGPoint _centerPoint;
	CGPoint _previousLeftLocation;
	CGPoint _previousRightLocation;
	double _originalWidth;
	double _originalAngle;
	double _pinchWidth;
	double _pinchAngle;
	double _pinchScale;
	long long _magnifyState;
	long long _rotateState;
	BOOL _startedPinchingOut;
	BOOL _startedPinchingIn;

}

@property (assign) unsigned long long zoomMode;              //@synthesize zoomMode=_zoomMode - In the implementation block
@property (assign) double pinchWidth;                        //@synthesize pinchWidth=_pinchWidth - In the implementation block
@property (assign) double pinchAngle;                        //@synthesize pinchAngle=_pinchAngle - In the implementation block
@property (assign) double pinchScale;                        //@synthesize pinchScale=_pinchScale - In the implementation block
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setPinchScale:(double)arg1 ;
-(void)setZoomMode:(unsigned long long)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)pinchAngle;
-(double)pinchWidth;
-(void)reset;
-(void)setPinchAngle:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)pinchScale;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 mode:(unsigned long long)arg3 ;
-(void)setPinchWidth:(double)arg1 ;
-(unsigned long long)zoomMode;
-(void)dealloc;
@end

