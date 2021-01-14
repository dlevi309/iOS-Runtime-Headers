/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDDatabaseMigrationTransactionDelegate
@required
-(void)migrationTransaction:(id)arg1 didCreateDatabasesWithIdentifier:(id)arg2;
-(void)migrationTransaction:(id)arg1 didEncounterDatabaseMismatchWithUnprotectedIdentifier:(id)arg2 protectedIdentifier:(id)arg3;

@end

