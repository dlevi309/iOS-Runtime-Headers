/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataImageCacheSettingsSQLiteStore.h>

@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore
+(long long)databaseSchemaVersion;
+(Class)cacheSettingsEntryClass;
-(id)_deleteAllEntriesSQLiteStatement;
-(id)_updateEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_selectAllEntriesSQLiteStatement;
-(id)_selectEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_insertEntrySQLiteStatementWithEntry:(id)arg1 ;
-(id)_deleteEntrySQLiteStatementWithHost:(id)arg1 ;
-(id)_statementsForMigrationToSchemaVersion:(long long)arg1 ;
-(id)_createNewDatabaseSQLiteStatement;
@end

