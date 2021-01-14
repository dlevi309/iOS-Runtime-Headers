/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, WBSSQLiteDatabase;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {

	NSURL* _databaseURL;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	WBSSQLiteDatabase* _database;

}
+(id)_defaultDatabaseURL;
+(id)standardStore;
-(void)_openDatabase;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_openDatabaseIfNeeded;
-(long long)_idForThirdPartyWithHighLevelDomain:(id)arg1 ;
-(long long)_idForFirstPartyWithHighLevelDomain:(id)arg1 ;
-(void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 onFirstParty:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_clearStatisticsAfter:(id)arg1 before:(id)arg2 ;
-(void)_clearStatisticsForDomain:(id)arg1 ;
-(void)_deleteUnusedDomains;
-(void)_closeDatabaseOnDatabaseQueue;
-(void)_createDatabaseSchemaIfNeeded;
-(void)recordThirdPartyResourceBlocked:(id)arg1 onFirstParty:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearAllStatisticsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearStatisticsAfter:(id)arg1 before:(id)arg2 ;
-(void)clearStatisticsForDomains:(id)arg1 ;
-(void)_configureDatabase;
-(long long)_schemaVersion;
-(void)closeDatabase;
@end

