/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

@class REMStore;


@protocol CalReminderKitDatabaseMigrationContext <NSObject>
@property (nonatomic,readonly) REMStore * reminderStore; 
@property (nonatomic,readonly) BOOL shouldPerformMigration; 
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
@required
-(void)willBeginMigration;
-(BOOL)shouldDeleteMigratedData;
-(void)didEndMigrationWithSuccess:(BOOL)arg1;
-(REMStore *)reminderStore;
-(void)recordMigrationFailure:(id)arg1;
-(BOOL)shouldPerformMigration;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2;

@end

