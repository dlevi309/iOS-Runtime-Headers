/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

