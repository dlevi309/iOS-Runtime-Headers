/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSMetricsDatabaseSchema : NSObject
+(id)databasePathForContainerId:(id)arg1 ;
+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg1 ;
+(BOOL)removeDatabaseForContainerId:(id)arg1 ;
+(void)migrateVersion0to1WithMigration:(id)arg1 ;
+(void)migrateVersion1to2WithMigration:(id)arg1 ;
+(id)_containerURLForContainerId:(id)arg1 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
@end

