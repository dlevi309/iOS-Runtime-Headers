/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)tabStatesWithBrowserWindowUUID:(id)arg1 ;
-(void)removeTabWithTabData:(id)arg1 ;
-(void)deleteAllRecentlyClosedWindows;
-(id)init;
-(id)readSavedSessionStateDataForTabWithUUIDString:(id)arg1 ;
-(BOOL)deleteAllSavedStates;
-(int)_migrateToSchemaVersion_3;
-(void)_updateBrowserWindowStateWithDictionary:(id)arg1 ;
-(void)saveTabStateWithDictionary:(id)arg1 ;
-(void)removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg1 ;
-(void)regenerateTabUUIDsForDeviceRestoration;
-(id)_readSavedSessionStateDataForTabWithUUIDString:(id)arg1 ;
-(void)_insertTabStateWithData:(id)arg1 ;
-(void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)browserWindows;
-(BOOL)_isTabStateCached:(id)arg1 ;
-(void)updateTabWithTabStateData:(id)arg1 ;
-(void)_updateOrInsertTabStateWithData:(id)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(void)_migrateFromLegacyPlistWithPath:(id)arg1 ;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(void)_cacheUUIDForTabStateData:(id)arg1 ;
-(void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(int)_migrateToSchemaVersion_5;
-(id)initWithDatabaseURL:(id)arg1 ;
-(int)_createTableForTabSession;
-(BOOL)updateSceneID:(id)arg1 ;
-(void)_closeDatabase;
-(int)_migrateToSchemaVersion_2;
-(void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_regenerateTabUUIDsForDeviceRestoration;
-(void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(long long)_saveBrowserWindowStateWithData:(id)arg1 ;
-(int)_createFreshDatabaseSchema;
-(BOOL)_checkDatabaseIntegrity;
-(void)_migrateFromLegacyPlistIfNeeded;
-(void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2 ;
-(BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(void)_removeSavedSessionStateDataForTabsWithUUIDStrings:(id)arg1 ;
-(id)_sqliteStatementForTabDeleting;
-(id)tabStateDataForUUID:(id)arg1 ;
-(int)_createTableForTabs;
-(void)mergeAllWindows;
-(int)_migrateToSchemaVersion_4;
-(void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_tabStateDataForUUID:(id)arg1 ;
-(int)_mergeAllWindowsIfNeeded;
-(int)_schemaVersion;
-(void)closeDatabase;
-(BOOL)_isDatabaseOpen;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(BOOL)_updateTabStateWithData:(id)arg1 ;
-(int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
-(NSArray *)recentlyClosedWindows;
-(long long)_databaseIDForBrowserWindow:(id)arg1 ;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
-(long long)_saveBrowserWindowStateWithDictionary:(id)arg1 ;
-(void)checkPointWriteAheadLog;
-(id)_tabUUIDsInWindow:(id)arg1 ;
-(void)dealloc;
-(void)_vacuum;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg1 ;
@end

