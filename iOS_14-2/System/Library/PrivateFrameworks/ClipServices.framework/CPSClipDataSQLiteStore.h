/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject;

@interface CPSClipDataSQLiteStore : NSObject {

	NSURL* _databaseURL;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}
+(id)defaultStore;
-(id)init;
-(int)_migrateToSchemaVersion_7;
-(int)_migrateToSchemaVersion_3;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_migrateToSchemaVersion_5;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_closeDatabase;
-(int)_migrateToSchemaVersion_2;
-(int)_createFreshDatabaseSchema;
-(BOOL)_checkDatabaseIntegrity;
-(int)_migrateToSchemaVersion_6;
-(int)_migrateToSchemaVersion_4;
-(int)_schemaVersion;
-(BOOL)_isDatabaseOpen;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg1 ;
-(void)removeRecordWithBundleID:(id)arg1 ;
-(void)getAppClipRecordWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveAppClipRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveClipEntryPointRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEntryPointRecordWithWebClipIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_createClipEntryPointsTable;
-(int)_migrateToSchemeVersion_8;
-(BOOL)_updateAppClipRecord:(id)arg1 ;
-(BOOL)_insertAppClipRecord:(id)arg1 ;
-(BOOL)_insertOrReplaceEntryPointRecord:(id)arg1 ;
@end

