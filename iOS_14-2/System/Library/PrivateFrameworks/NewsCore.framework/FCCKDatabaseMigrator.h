/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCKDatabaseMigrator <NSObject>
@required
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;

@end

