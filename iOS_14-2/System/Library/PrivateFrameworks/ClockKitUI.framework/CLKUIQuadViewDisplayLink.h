/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@class CLKUIQuadView, CADisplayLink, CLKClockTimerToken;

@interface CLKUIQuadViewDisplayLink : NSObject {

	CLKUIQuadView* _quadView;
	CADisplayLink* _displayLink;
	BOOL _synchronizeWithClockTimer;
	CLKClockTimerToken* _timerToken;
	long long _preferredFramesPerSecond;
	BOOL _paused;

}
-(double)timestamp;
-(void)setPaused:(BOOL)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(unsigned long long)preferredFramesPerSecond;
-(void)_updatePausedState;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(BOOL)isPaused;
-(id)initWithTarget:(id)arg1 synchronizeWithClockTimer:(BOOL)arg2 ;
@end

