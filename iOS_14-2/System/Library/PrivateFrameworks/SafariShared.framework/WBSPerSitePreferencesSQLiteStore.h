/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeAllPreferenceValuesFromPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getDefaultValueForPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAllPreferenceInformationForPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)_openDatabase;
-(void)setDefaultValue:(id)arg1 forPreference:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getValuesOfPreferences:(id)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_closeDatabase;
-(void)getAllDomainsConfiguredForPreference:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_migrateToSchemaVersion_2;
-(int)_createFreshDatabaseSchema;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(void)getTimestampAndValueOfPreference:(long long)arg1 forDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 includeTimestamp:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_tryToPerformTransactionInBlock:(/*^block*/id)arg1 ;
-(void)closeDatabase;
-(BOOL)_isDatabaseOpen;
-(BOOL)_migrateToSchemaVersion:(int)arg1 ;
-(void)getValueOfPreference:(long long)arg1 forDomain:(id)arg2 withTimeoutInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_openDatabaseIfNecessary;
-(void)setValue:(id)arg1 ofPreference:(long long)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

