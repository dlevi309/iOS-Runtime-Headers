/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

@class NSArray;


@protocol HDHealthRecordsPluginDatabaseSchema <NSObject>
@property (nonatomic,readonly) long long currentSchemaVersion; 
@property (nonatomic,copy,readonly) NSArray * databaseEntities; 
@required
-(long long)currentSchemaVersion;
-(NSArray *)databaseEntities;
-(void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;

@end

