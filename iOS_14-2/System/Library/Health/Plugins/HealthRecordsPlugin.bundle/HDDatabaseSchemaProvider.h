/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

@class NSString;


@protocol HDDatabaseSchemaProvider
@property (nonatomic,copy,readonly) NSString * schemaName; 
@required
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;
-(id)databaseEntitiesForProtectionClass:(long long)arg1;
-(NSString *)schemaName;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1;

@end

