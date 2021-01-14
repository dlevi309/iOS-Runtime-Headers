/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/


@class NSTimer;

@interface PSGWallClockMinuteTimer : NSObject {

	id _target;
	SEL _action;
	NSTimer* _timer;

}
-(void)startTimer;
-(void)_fireAction;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

