/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface ISLongPressForceGestureRecognizer : UILongPressGestureRecognizer {

	NSMutableSet* _trackingTouches;
	BOOL _longPressDidBeginForCurrentTouch;
	double _minimumPressure;
	double _maximumPressure;
	double _is_force;

}

@property (assign,nonatomic) double minimumPressure;              //@synthesize minimumPressure=_minimumPressure - In the implementation block
@property (assign,nonatomic) double maximumPressure;              //@synthesize maximumPressure=_maximumPressure - In the implementation block
@property (nonatomic,readonly) double is_force;                   //@synthesize is_force=_is_force - In the implementation block
-(void)reset;
-(void)setState:(long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateForce;
-(double)minimumPressure;
-(void)setMinimumPressure:(double)arg1 ;
-(double)maximumPressure;
-(void)setMaximumPressure:(double)arg1 ;
-(double)is_force;
@end

