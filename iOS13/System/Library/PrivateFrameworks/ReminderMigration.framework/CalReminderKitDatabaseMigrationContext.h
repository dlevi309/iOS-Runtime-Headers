/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

@class REMStore;


@protocol CalReminderKitDatabaseMigrationContext <NSObject>
@property (nonatomic,readonly) REMStore * reminderStore; 
@property (nonatomic,readonly) BOOL shouldPerformMigration; 
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
@required
-(BOOL)shouldDeleteMigratedData;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2;
-(REMStore *)reminderStore;
-(BOOL)shouldPerformMigration;
-(void)willBeginMigration;
-(void)didEndMigrationWithSuccess:(BOOL)arg1;
-(void)recordMigrationFailure:(id)arg1;

@end

