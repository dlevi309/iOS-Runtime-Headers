/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <libobjc.A.dylib/SPLocalServerProtocol.h>

@class NSString;

@interface SPLocalServerProtocolStub : NSObject <SPLocalServerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLogLevel:(id)arg1 ;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)activeComplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUserNotification:(long long)arg1 applicationName:(id)arg2 ;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1 ;
-(void)cancelPendingInstallations;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlwaysInstall:(id)arg1 ;
-(void)fetchInstalledComplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1 ;
-(void)removeProvisioningProfileWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installAllApplicationsForProcessWithIdentifier:(id)arg1 ;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 installerIsTestFlight:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 withProvisioningProfiles:(id)arg3 profileNames:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAlwaysInstall:(id)arg1 forNRDeviceWithPairingID:(id)arg2 ;
@end

