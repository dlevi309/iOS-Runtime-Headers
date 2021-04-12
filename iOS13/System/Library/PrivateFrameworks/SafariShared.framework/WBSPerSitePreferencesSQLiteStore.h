/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, WBSSQLiteDatabase;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {

	NSURL* _databaseURL;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	WBSSQLiteDatabase* _database;

}
+(id)sharedStore;
-(id)init;
-(void)dealloc;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)closeDatabase;
-(void)_openDatabase;
-(void)_closeDatabase;
-(void)getAllPreferenceInformationForPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_isDatabaseOpen;
-(int)_createFreshDatabaseSchema;
-(BOOL)_migrateToSchemaVersion:(int)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(void)removeAllPreferenceValuesFromPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getValueOfPreference:(long long)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getDefaultValueForPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultValue:(id)arg1 forPreference:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getAllDomainsConfiguredForPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getTimestampAndValueOfPreference:(long long)arg1 forDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 includeTimestamp:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_openDatabaseIfNecessary;
-(void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_tryToPerformTransactionInBlock:(/*^block*/id)arg1 ;
@end

