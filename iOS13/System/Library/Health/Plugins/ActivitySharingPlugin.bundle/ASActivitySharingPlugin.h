/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface ASActivitySharingPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDTaskServerClassProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
-(id)init;
-(NSString *)pluginIdentifier;
-(id)taskServerClasses;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(NSString *)schemaName;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(id)_createTableSQLStringForCompetitionLists;
-(id)_dropTableSQLStringForCompetitions;
-(id)_dropTableSQLStringForCompetitionLists;
@end

