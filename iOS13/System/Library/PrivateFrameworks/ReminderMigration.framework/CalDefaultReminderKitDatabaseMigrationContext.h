/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <libobjc.A.dylib/CalReminderKitDatabaseMigrationContext.h>

@class REMStore, REMDatabaseMigrationContext, NSString;

@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext> {

	REMDatabaseMigrationContext* _remDatabaseMigrationContext;

}

@property (nonatomic,readonly) REMDatabaseMigrationContext * remDatabaseMigrationContext;              //@synthesize remDatabaseMigrationContext=_remDatabaseMigrationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) REMStore * reminderStore; 
@property (nonatomic,readonly) BOOL shouldPerformMigration; 
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
-(id)init;
-(BOOL)shouldDeleteMigratedData;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2 ;
-(REMStore *)reminderStore;
-(BOOL)shouldPerformMigration;
-(REMDatabaseMigrationContext *)remDatabaseMigrationContext;
-(void)willBeginMigration;
-(void)didEndMigrationWithSuccess:(BOOL)arg1 ;
-(void)recordMigrationFailure:(id)arg1 ;
@end

