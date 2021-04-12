/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

