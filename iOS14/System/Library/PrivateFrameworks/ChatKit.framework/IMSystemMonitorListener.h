/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol IMSystemMonitorListener
@optional
-(void)systemDidBecomeUnidle;
-(void)systemDidStartBackup;
-(void)systemDidBecomeIdle;
-(void)systemDidUnlock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidEnterMemoryPressure;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemWillSleep;
-(void)screenUnlocked;
-(void)screenSaverDidStart;
-(void)screenSaverDidStop;
-(void)systemDidLeaveMemoryPressure;
-(void)systemWillShutdown;
-(void)notificationCenterWillAppear;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemDidStopBackup;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterDidDisappear;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)systemDidFastUserSwitchOut;
-(void)systemDidFastUserSwitchIn;
-(void)systemDidLogout;
-(void)systemDidLock;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;
-(void)systemDidWake;
-(void)systemApplicationDidEnterBackground;
-(void)screenLocked;

@end

