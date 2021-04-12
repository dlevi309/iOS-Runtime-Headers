/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

@class SBInteractiveScreenshotSettings;

@interface SBInteractiveScreenshotScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer {

	SBInteractiveScreenshotSettings* _settings;
	long long _touchInterfaceOrientationWhenGestureBegan;

}
+(BOOL)_shouldSupportStylusTouches;
+(id)interactiveScreenshotScreenEdgePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(long long)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(BOOL)_isOrientedLocation:(CGPoint)arg1 inCorner:(unsigned long long)arg2 forOrientedBounds:(CGRect)arg3 withEdgeOffsets:(UIOffset)arg4 ;
-(BOOL)shouldReceiveTouch:(id)arg1 ;
@end

