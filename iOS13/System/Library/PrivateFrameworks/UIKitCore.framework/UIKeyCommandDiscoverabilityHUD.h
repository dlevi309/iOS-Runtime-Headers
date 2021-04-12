/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSTimer, NSValue, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	NSValue* _pointerLocation;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
+(void)dismissHUD;
-(void)dealloc;
-(void)_clearHUDPopTimer;
-(void)_dismissHUD;
-(void)_scheduleHUDPresentation;
-(void)_applicationWillResignActive;
-(void)_didTakeScreenshot;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(BOOL)_HUDAllowedForWindow:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
@end

