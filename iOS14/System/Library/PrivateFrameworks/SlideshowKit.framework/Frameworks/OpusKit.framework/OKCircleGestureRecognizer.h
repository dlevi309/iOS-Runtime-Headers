/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class CAShapeLayer;

@interface OKCircleGestureRecognizer : UIGestureRecognizer {

	CGPoint _origin;
	double _lastAngle;
	double _angle;
	CAShapeLayer* _roundLayer;
	CAShapeLayer* _pointLayer;
	CAShapeLayer* _originLayer;
	double _continuousProgress;
	double _diffenceProgress;

}

@property (nonatomic,readonly) double diffenceProgress;                //@synthesize diffenceProgress=_diffenceProgress - In the implementation block
@property (nonatomic,readonly) double continuousProgress;              //@synthesize continuousProgress=_continuousProgress - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)initDebugLayer:(CGPoint)arg1 ;
-(void)updateDebug:(CGPoint)arg1 angle:(double)arg2 ;
-(void)resetDebug;
-(double)continuousProgress;
-(double)diffenceProgress;
@end

