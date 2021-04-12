/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/DataClassMigrators/MessagesDataMigrator.migrator/MessagesDataMigrator
*/

#import <DataMigration/DataClassMigrator.h>

@interface MessagesDataMigrator : DataClassMigrator
-(BOOL)performMigration;
-(float)estimatedDuration;
-(id)dataClassName;
-(void)saveDeviceState:(BOOL)arg1 isMigrating:(BOOL)arg2 ;
-(void)setiCloudBackupsAndRestoresEnabledForSMSDirectory;
-(void)clearMOCDefaultsForRestoreFromBackupIfNeeded;
@end

