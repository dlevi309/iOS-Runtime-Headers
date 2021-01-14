/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDSyncEntityProvider.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface ACHAchievementsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
@property (nonatomic,copy,readonly) NSString * syncSchemaIdentifier; 
-(id)taskServerClasses;
-(id)extensionForProfile:(id)arg1 ;
-(void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)arg1 ;
-(void)_addValidateEarnedInstanceRowStepToMigrator:(id)arg1 ;
-(void)_addAddSuffixesColumnMigrationToMigrator:(id)arg1 ;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(id)orderedSyncEntities;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(NSString *)syncSchemaIdentifier;
-(void)_addVersion5MigratorToMigrator:(id)arg1 ;
-(void)_addGraceExpressionColumnsMigrationToMigrator:(id)arg1 ;
-(NSString *)schemaName;
-(void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)arg1 ;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(void)_addResetSyncAnchorsMigrationStepToMigrator:(id)arg1 ;
-(void)_addGracePredicateColumnsMigrationToMigrator:(id)arg1 ;
-(NSString *)pluginIdentifier;
-(void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)arg1 ;
@end

