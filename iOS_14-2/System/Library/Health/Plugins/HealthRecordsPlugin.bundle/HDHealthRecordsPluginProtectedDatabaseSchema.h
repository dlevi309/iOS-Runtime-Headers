/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDHealthRecordsPluginDatabaseSchema.h>

@class NSArray, NSString;

@interface HDHealthRecordsPluginProtectedDatabaseSchema : NSObject <HDHealthRecordsPluginDatabaseSchema>

@property (nonatomic,readonly) long long currentSchemaVersion; 
@property (nonatomic,copy,readonly) NSArray * databaseEntities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentSchemaVersion;
-(NSArray *)databaseEntities;
-(void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2 ;
@end

