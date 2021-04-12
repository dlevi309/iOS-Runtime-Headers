/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)_connection;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)resetToDAVDatabaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearLocalDataIncludingMigrationState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)migrateToCloudKitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerForPushNotificationsIfNeeded;
-(void)setUsesOpportunisticPushTopic:(BOOL)arg1 ;
-(void)userDidUpdateBookmarkDatabase;
-(void)userAccountDidChange:(long long)arg1 ;
-(void)fetchUserIdentityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchRemoteMigrationStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)observeRemoteMigrationStateForSecondaryMigration;
-(void)beginMigrationFromDAV;
-(void)collectDiagnosticsDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCloudTabContainerManateeStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

