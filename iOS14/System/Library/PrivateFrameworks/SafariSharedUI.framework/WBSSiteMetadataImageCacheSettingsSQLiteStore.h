/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@protocol OS_dispatch_queue;
@class WBSSQLiteDatabase, NSObject, NSURL;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {

	WBSSQLiteDatabase* _database;
	BOOL _isClosed;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	long long _protectionType;
	NSURL* _databaseURL;

}

@property (nonatomic,readonly) WBSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL;                       //@synthesize databaseURL=_databaseURL - In the implementation block
+(long long)databaseSchemaVersion;
+(Class)cacheSettingsEntryClass;
-(id)_deleteAllEntriesSQLiteStatement;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_selectAllEntriesSQLiteStatement;
-(void)close;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)allEntries;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_closeDatabase;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg1 ;
-(BOOL)_checkDatabaseIntegrity;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_statementsForMigrationToSchemaVersion:(long long)arg1 ;
-(NSURL *)databaseURL;
-(WBSSQLiteDatabase *)database;
-(id)_createNewDatabaseSQLiteStatement;
-(void)dealloc;
-(id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2 ;
-(BOOL)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2 ;
-(BOOL)_migrateToCurrentSchemaVersionifNeeded;
-(BOOL)_createNewDatabaseSchema;
-(BOOL)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2 ;
-(id)_updateEntry:(id)arg1 ;
-(id)_insertEntry:(id)arg1 ;
-(id)entryWithHost:(id)arg1 ;
-(id)saveEntry:(id)arg1 ;
-(BOOL)deleteEntryWithHost:(id)arg1 ;
-(BOOL)deleteAllEntries;
@end

