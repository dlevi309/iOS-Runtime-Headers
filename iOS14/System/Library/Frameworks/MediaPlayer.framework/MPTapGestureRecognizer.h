/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setTapTimerWithDuration:(double)arg1 ;
-(void)_resetTapTimer;
-(void)_delayedHandleTaps:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(unsigned long long)tapCount;
-(void)dealloc;
@end

