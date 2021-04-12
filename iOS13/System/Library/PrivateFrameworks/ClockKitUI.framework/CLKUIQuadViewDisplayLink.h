/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@class CLKUIQuadView, CADisplayLink;

@interface CLKUIQuadViewDisplayLink : NSObject {

	CLKUIQuadView* _quadView;
	CADisplayLink* _displayLink;

}
-(void)invalidate;
-(id)initWithTarget:(id)arg1 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(unsigned long long)preferredFramesPerSecond;
@end

