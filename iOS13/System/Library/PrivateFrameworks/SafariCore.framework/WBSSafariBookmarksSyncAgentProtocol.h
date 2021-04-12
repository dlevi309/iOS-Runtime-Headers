/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol WBSSafariBookmarksSyncAgentProtocol <WBSCyclerCloudBookmarksAssistant>
@required
-(void)registerForPushNotificationsIfNeeded;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1;
-(void)userDidUpdateBookmarkDatabase;
-(void)userAccountDidChange:(long long)arg1;
-(void)fetchUserIdentityWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)beginMigrationFromDAV;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1;

@end

