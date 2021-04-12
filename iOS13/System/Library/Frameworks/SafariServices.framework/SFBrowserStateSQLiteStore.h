/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject, NSMutableDictionary, WBSSQLiteStatement, NSArray;

@interface SFBrowserStateSQLiteStore : NSObject {

	NSURL* _databaseURL;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableDictionary* _tabUUIDStrings;
	NSMutableDictionary* _browserWindowDatabaseIDs;
	WBSSQLiteStatement* _cachedTabDeleteStatement;
	BOOL _generateUUIDFunctionAttached;

}

@property (nonatomic,copy,readonly) NSArray * browserWindows; 
@property (nonatomic,copy,readonly) NSArray * recentlyClosedWindows; 
-(id)init;
-(void)dealloc;
-(int)_schemaVersion;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)closeDatabase;
-(void)_closeDatabase;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg1 ;
-(BOOL)_isDatabaseOpen;
-(BOOL)_checkDatabaseIntegrity;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_createFreshDatabaseSchema;
-(void)_migrateFromLegacyPlistIfNeeded;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(void)_migrateFromLegacyPlistWithPath:(id)arg1 ;
-(void)_updateBrowserWindowStateWithDictionary:(id)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
-(int)_migrateToSchemaVersion_3;
-(int)_migrateToSchemaVersion_4;
-(int)_migrateToSchemaVersion_5;
-(int)_createTableForTabs;
-(int)_createTableForTabSession;
-(int)_mergeAllWindowsIfNeeded;
-(void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2 ;
-(void)_removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg1 ;
-(BOOL)_updateTabStateWithData:(id)arg1 ;
-(void)_insertTabStateWithData:(id)arg1 ;
-(id)_tabStateDataForUUID:(id)arg1 ;
-(void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheUUIDForTabStateData:(id)arg1 ;
-(long long)_saveBrowserWindowStateWithData:(id)arg1 ;
-(long long)_databaseIDForBrowserWindow:(id)arg1 ;
-(BOOL)_isTabStateCached:(id)arg1 ;
-(long long)_saveBrowserWindowStateWithDictionary:(id)arg1 ;
-(void)_updateOrInsertTabStateWithData:(id)arg1 ;
-(id)_tabUUIDsInWindow:(id)arg1 ;
-(id)_sqliteStatementForTabDeleting;
-(void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(id)_readSavedSessionStateDataForTabWithUUIDString:(id)arg1 ;
-(void)_vacuum;
-(void)_regenerateTabUUIDsForDeviceRestoration;
-(void)mergeAllWindows;
-(BOOL)updateSceneID:(id)arg1 ;
-(NSArray *)browserWindows;
-(NSArray *)recentlyClosedWindows;
-(void)deleteAllRecentlyClosedWindows;
-(void)removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg1 ;
-(void)saveTabStateWithDictionary:(id)arg1 ;
-(id)tabStateDataForUUID:(id)arg1 ;
-(void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tabStatesWithBrowserWindowUUID:(id)arg1 ;
-(void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSavedSessionStateDataForTabWithUUIDString:(id)arg1 ;
-(BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(void)updateTabWithTabStateData:(id)arg1 ;
-(void)removeTabWithTabData:(id)arg1 ;
-(BOOL)deleteAllSavedStates;
-(void)checkPointWriteAheadLog;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
@end

