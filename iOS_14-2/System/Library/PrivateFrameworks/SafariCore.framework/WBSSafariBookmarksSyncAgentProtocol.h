/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol WBSSafariBookmarksSyncAgentProtocol <WBSCyclerCloudBookmarksAssistant>
@required
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)beginMigrationFromDAV;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)userAccountDidChange:(long long)arg1;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)fetchCloudTabDevicesAndCloseRequests;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1;
-(void)userDidUpdateBookmarkDatabase;
-(void)registerForPushNotificationsIfNeeded;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1;

@end

