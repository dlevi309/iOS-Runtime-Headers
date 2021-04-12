/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPISystemActionHelper : NSObject {

	IOHIDUserDeviceRef _homeButtonUserDevice;
	unsigned long long _sysdiagnoseCancelCount;
	NSObject*<OS_dispatch_queue> _sysdiagnoseCancelCountQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)toggleNotificationCenter;
-(void)rebootDevice;
-(void)takeScreenshot;
-(void)toggleReachability;
-(void)activateSOSMode;
-(void)armApplePay;
-(void)toggleDock;
-(void)toggleSpotlight;
-(void)revealSpotlight;
-(void)adjustSystemZoom:(long long)arg1 ;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)toggleMute;
-(void)warm;
-(void)pressHomeButtonDown;
-(void)liftHomeButtonUp;
-(void)_handleHomeButtonDispatch:(BOOL)arg1 ;
-(void)pressLockButtonDown;
-(void)liftLockButtonUp;
-(void)_sendButtonEvent:(unsigned)arg1 ;
-(void)pressVolumeDownButtonDown;
-(void)liftVolumeDownButtonUp;
-(void)pressVolumeUpButtonDown;
-(void)liftVolumeUpButtonUp;
-(void)_sendShakeEvent;
-(void)_sendDeviceOrientationChange:(int)arg1 ;
-(void)activateSiri;
-(void)activateVoiceControl;
-(void)activateHomeButton;
-(void)toggleCommandAndControl;
-(void)toggleAppSwitcher;
-(void)activateLockButton;
-(void)toggleRingerSwitch:(BOOL)arg1 ;
-(void)activateTripleClick;
-(void)shake;
-(void)toggleControlCenter;
-(void)rotatePortrait;
-(void)rotateUpsideDown;
-(void)rotateLeft;
-(void)rotateRight;
-(void)performSysdiagnoseWithStatusUpdateHandler:(/*^block*/id)arg1 ;
-(void)_showAlertForReboot;
@end

