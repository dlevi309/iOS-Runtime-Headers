/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {

	unsigned long long _lastTapCount;
	CGPoint _tapLocation;
	UITouch* _trackingTouch;
	NSTimer* _tapHandleTimer;

}

@property (assign) unsigned long long tapCount;              //@synthesize lastTapCount=_lastTapCount - In the implementation block
-(void)dealloc;
-(void)reset;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)tapCount;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)_setTapTimerWithDuration:(double)arg1 ;
-(void)_resetTapTimer;
-(void)_delayedHandleTaps:(id)arg1 ;
@end

