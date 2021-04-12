/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, NSTimer;

@interface CCUIFlickGestureRecognizer : UIGestureRecognizer {

	UITouch* _touch;
	NSTimer* _timeoutTimer;
	double _initialTouchTimestamp;
	CGPoint _initialTouchLocation;
	BOOL _latched;
	double _maximumFlickTime;
	double _minimumFlickVelocity;
	unsigned long long _allowedFlickDirections;

}

@property (assign,nonatomic) double maximumFlickTime;                                //@synthesize maximumFlickTime=_maximumFlickTime - In the implementation block
@property (assign,nonatomic) double minimumFlickVelocity;                            //@synthesize minimumFlickVelocity=_minimumFlickVelocity - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFlickDirections;              //@synthesize allowedFlickDirections=_allowedFlickDirections - In the implementation block
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedFlickDirections:(unsigned long long)arg1 ;
-(unsigned long long)allowedFlickDirections;
-(void)setMaximumFlickTime:(double)arg1 ;
-(void)setMinimumFlickVelocity:(double)arg1 ;
-(double)minimumFlickVelocity;
-(void)_beginFlickWithTouch:(id)arg1 ;
-(BOOL)_validateFlickWithTouch:(id)arg1 ;
-(double)maximumFlickTime;
-(void)_evaluateFlickAtTimeout;
@end

