/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)close;
-(WBSSQLiteDatabase *)database;
-(id)allEntries;
-(NSURL *)databaseURL;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)_closeDatabase;
-(BOOL)_checkDatabaseIntegrity;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(BOOL)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2 ;
-(id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2 ;
-(BOOL)_migrateToCurrentSchemaVersionifNeeded;
-(BOOL)_createNewDatabaseSchema;
-(id)_statementsForMigrationToSchemaVersion:(long long)arg1 ;
-(BOOL)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2 ;
-(id)_createNewDatabaseSQLiteStatement;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_selectAllEntriesSQLiteStatement;
-(int)_updateEntry:(id)arg1 ;
-(int)_insertEntry:(id)arg1 ;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_deleteAllEntriesSQLiteStatement;
-(id)entryWithHost:(id)arg1 ;
-(BOOL)saveEntry:(id)arg1 ;
-(BOOL)deleteEntryWithHost:(id)arg1 ;
-(BOOL)deleteAllEntries;
@end

