/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)allowedFlickDirections;
-(double)minimumFlickVelocity;
-(BOOL)_validateFlickWithTouch:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumFlickVelocity:(double)arg1 ;
-(void)_evaluateFlickAtTimeout;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)maximumFlickTime;
-(void)setAllowedFlickDirections:(unsigned long long)arg1 ;
-(void)_beginFlickWithTouch:(id)arg1 ;
-(void)reset;
-(void)setMaximumFlickTime:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

