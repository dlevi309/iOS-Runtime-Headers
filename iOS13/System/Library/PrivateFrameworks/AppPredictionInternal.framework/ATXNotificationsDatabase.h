/*
* Generated on Monday, March 1, 2021 at 2:33:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, _PASSqliteDatabase;

@interface ATXNotificationsDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	_PASSqliteDatabase* _db;
	BOOL _dbInitialized;

}

@property (nonatomic,readonly) _PASSqliteDatabase * db; 
-(id)init;
-(long long)currentSchemaVersion;
-(_PASSqliteDatabase *)db;
-(id)createSchema;
-(long long)latestVersion;
-(BOOL)migrate;
-(id)initWithDefaultPath:(id)arg1 ;
-(id)initWithDbPath:(id)arg1 ;
-(void)_startDatabase;
-(void)_disconnectFromDb;
-(BOOL)_configureDatabase;
-(id)createCustomSchema;
-(void)_initializeSchemaVersion:(long long)arg1 ;
-(void)_runMigration;
-(BOOL)_initializeTables;
-(long long)countRowsOfTable:(id)arg1 ;
@end

