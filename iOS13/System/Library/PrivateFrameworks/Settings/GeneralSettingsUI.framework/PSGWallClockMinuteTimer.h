/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/


@class NSTimer;

@interface PSGWallClockMinuteTimer : NSObject {

	id _target;
	SEL _action;
	NSTimer* _timer;

}
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)startTimer;
-(void)_fireAction;
@end

