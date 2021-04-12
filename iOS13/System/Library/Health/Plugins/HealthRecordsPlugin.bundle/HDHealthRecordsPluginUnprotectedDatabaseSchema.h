/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDHealthRecordsPluginDatabaseSchema.h>

@class NSArray, NSString;

@interface HDHealthRecordsPluginUnprotectedDatabaseSchema : NSObject <HDHealthRecordsPluginDatabaseSchema>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long currentSchemaVersion; 
@property (nonatomic,copy,readonly) NSArray * databaseEntities; 
-(long long)currentSchemaVersion;
-(NSArray *)databaseEntities;
-(void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2 ;
-(long long)_peace_addClinicalAPIRemindersTableWithTransaction:(id)arg1 error:(id*)arg2 ;
@end

