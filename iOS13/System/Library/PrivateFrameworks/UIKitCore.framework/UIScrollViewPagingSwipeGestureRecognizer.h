/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _swipeFailureDelay;
	CGPoint _startLocation;
	CGPoint _lastLocation;
	double _lastTime;
	int _directionalFailureCount;

}
+(BOOL)_shouldDefaultToTouches;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)enoughTimeElapsed:(id)arg1 ;
-(void)clearTimer;
-(void)_processNewLocation:(CGPoint)arg1 ;
@end

