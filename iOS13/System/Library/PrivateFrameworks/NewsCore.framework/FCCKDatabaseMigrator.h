/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCKDatabaseMigrator <NSObject>
@required
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;

@end

