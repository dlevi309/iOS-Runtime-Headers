/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSTimer, NSValue, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	NSValue* _pointerLocation;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(void)dismissHUD;
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
-(BOOL)_HUDAllowedForWindow:(id)arg1 ;
-(void)_didTakeScreenshot;
-(void)_clearHUDPopTimer;
-(void)_dismissHUD;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
-(void)_applicationWillResignActive;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(void)dealloc;
-(void)_scheduleHUDPresentation;
@end

