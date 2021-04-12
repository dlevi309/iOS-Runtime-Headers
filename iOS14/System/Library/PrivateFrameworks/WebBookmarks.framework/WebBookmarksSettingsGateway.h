/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(id)init;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOriginsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)schedulePasswordIconsCleanup;
-(void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)scheduleBookmarksDatabaseMaintenance;
-(void)scheduleBookmarksDatabaseMigrationTask;
-(void)scheduleHSTSSuperCookieCleanup;
@end

