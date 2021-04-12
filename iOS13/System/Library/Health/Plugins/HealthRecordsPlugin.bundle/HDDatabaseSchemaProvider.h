/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

@class NSString;


@protocol HDDatabaseSchemaProvider
@property (nonatomic,copy,readonly) NSString * schemaName; 
@required
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1;
-(id)databaseEntitiesForProtectionClass:(long long)arg1;
-(NSString *)schemaName;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;

@end

