/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject, AXPIFingerController;

@interface AXPISystemActionHelper : NSObject {

	IOHIDUserDeviceRef _homeButtonUserDevice;
	unsigned long long _sysdiagnoseCancelCount;
	NSObject*<OS_dispatch_queue> _sysdiagnoseCancelCountQueue;
	AXPIFingerController* _fingerController;

}
+(id)sharedInstance;
-(void)takeScreenshot;
-(id)init;
-(void)warm;
-(void)rebootDevice;
-(void)shake;
-(void)toggleMute;
-(void)toggleNotificationCenter;
-(void)toggleDock;
-(void)armApplePay;
-(void)revealSpotlight;
-(void)adjustSystemZoom:(long long)arg1 ;
-(void)activateSOSMode;
-(void)toggleReachability;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)toggleSpotlight;
-(void)activateSiri;
-(void)toggleAppSwitcher;
-(void)toggleControlCenter;
-(void)activateSiriFromClient:(id)arg1 ;
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
-(BOOL)_hasScreenSwitch;
-(void)_sendShakeEvent;
-(void)_sendDeviceOrientationChange:(int)arg1 ;
-(void)performActionForSystemAction:(id)arg1 fromClient:(id)arg2 ;
-(void)activateTripleClick;
-(void)activateHomeButton;
-(void)activateLockButton;
-(BOOL)isRingerSwitchOn;
-(void)toggleRingerSwitch:(BOOL)arg1 ;
-(void)toggleCommandAndControl;
-(void)confirmApplePay;
-(void)_performScrollAction:(BOOL)arg1 ;
-(void)_toggleAssistiveTouch;
-(void)_toggleVoiceOver;
-(void)_toggleClassicInvertColors;
-(void)_toggleSmartInvert;
-(void)_toggleZoom;
-(void)_toggleMagnifier;
-(void)_toggleSwitchControl;
-(void)_toggleFullKeyboardAccess;
-(void)_activateSpeakScreen;
-(void)activatePeopleDetection;
-(void)activateVoiceControl;
-(void)rotatePortrait;
-(void)rotateUpsideDown;
-(void)rotateLeft;
-(void)rotateRight;
-(void)performSysdiagnoseWithStatusUpdateHandler:(/*^block*/id)arg1 ;
-(void)_showAlertForReboot;
-(void)performActionForSystemAction:(id)arg1 ;
@end

