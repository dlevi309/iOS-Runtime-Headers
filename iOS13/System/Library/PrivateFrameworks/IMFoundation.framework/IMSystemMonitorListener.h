/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol IMSystemMonitorListener
@optional
-(void)systemDidBecomeIdle;
-(void)systemDidBecomeUnidle;
-(void)screenSaverDidStart;
-(void)screenSaverDidStop;
-(void)screenLocked;
-(void)screenUnlocked;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidLeaveMemoryPressure;
-(void)systemWillShutdown;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)notificationCenterDidDisappear;
-(void)systemDidStartBackup;
-(void)systemDidStopBackup;
-(void)systemDidFinishMigration;
-(void)systemRestoreStateDidChange;
-(void)systemDidFastUserSwitchOut;
-(void)systemDidFastUserSwitchIn;
-(void)systemDidLogout;
-(void)systemDidLock;
-(void)systemDidUnlock;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;

@end

