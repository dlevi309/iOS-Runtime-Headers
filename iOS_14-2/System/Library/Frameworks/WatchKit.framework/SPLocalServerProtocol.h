/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@protocol SPLocalServerProtocol <NSObject>
@required
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1;
-(void)activeComplicationsWithCompletion:(/*^block*/id)arg1;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)showUserNotification:(long long)arg1 applicationName:(id)arg2;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1;

@end

