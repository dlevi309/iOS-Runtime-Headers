/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataImageCacheSettingsSQLiteStore.h>

@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore
+(long long)databaseSchemaVersion;
+(Class)cacheSettingsEntryClass;
-(id)_statementsForMigrationToSchemaVersion:(long long)arg1 ;
-(id)_createNewDatabaseSQLiteStatement;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_selectAllEntriesSQLiteStatement;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_deleteAllEntriesSQLiteStatement;
@end

