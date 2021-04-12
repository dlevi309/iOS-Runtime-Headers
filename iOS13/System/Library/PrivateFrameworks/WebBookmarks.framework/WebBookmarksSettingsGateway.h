/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(id)init;
-(void)schedulePasswordIconsCleanup;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOriginsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)scheduleBookmarksDatabaseMaintenance;
-(void)scheduleBookmarksDatabaseMigrationTask;
-(void)scheduleHSTSSuperCookieCleanup;
@end

