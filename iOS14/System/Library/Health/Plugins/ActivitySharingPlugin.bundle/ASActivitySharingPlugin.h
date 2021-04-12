/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface ASActivitySharingPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDTaskServerClassProvider>

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
-(id)taskServerClasses;
-(id)extensionForProfile:(id)arg1 ;
-(id)_dropTableSQLStringForCompetitionLists;
-(id)init;
-(id)_dropTableSQLStringForCompetitions;
-(id)_createTableSQLStringForCompetitionLists;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(NSString *)schemaName;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(NSString *)pluginIdentifier;
@end

