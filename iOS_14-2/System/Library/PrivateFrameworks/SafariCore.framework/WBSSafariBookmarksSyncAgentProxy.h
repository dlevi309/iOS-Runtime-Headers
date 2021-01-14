/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSSafariBookmarksSyncAgentProtocol.h>

@class NSXPCConnection, NSString;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol> {

	NSXPCConnection* __connection;

}

@property (retain) NSXPCConnection * _connection;                   //@synthesize _connection=__connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProxy;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)beginMigrationFromDAV;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1 ;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userAccountDidChange:(long long)arg1 ;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)fetchCloudTabDevicesAndCloseRequests;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearLocalDataIncludingMigrationState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)_connection;
-(void)userDidUpdateBookmarkDatabase;
-(void)migrateToCloudKitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetToDAVDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerForPushNotificationsIfNeeded;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

