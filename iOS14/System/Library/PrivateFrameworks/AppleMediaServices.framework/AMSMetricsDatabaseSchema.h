/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSMetricsDatabaseSchema : NSObject
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(id)databasePathForContainerId:(id)arg1 ;
+(id)_containerURLForContainerId:(id)arg1 ;
+(void)migrateVersion0to1WithMigration:(id)arg1 ;
+(void)migrateVersion2to3WithMigration:(id)arg1 ;
+(void)migrateVersion1to2WithMigration:(id)arg1 ;
+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg1 ;
+(BOOL)removeDatabaseForContainerId:(id)arg1 ;
+(void)migrateVersion3to4WithMigration:(id)arg1 ;
@end

