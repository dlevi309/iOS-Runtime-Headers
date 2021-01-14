/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UITouch;

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {

	UITouch* _touch1;
	UITouch* _touch2;
	CGPoint _initialTouch1Point;
	CGPoint _initialTouch2Point;
	double _initialDistance;

}
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)_distanceFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)_activeTouchesForEvent:(id)arg1 ;
@end

