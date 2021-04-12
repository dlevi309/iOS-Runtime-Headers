/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <libobjc.A.dylib/CalReminderKitDatabaseMigrationContext.h>

@class REMStore, REMDatabaseMigrationContext, NSString;

@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext> {

	REMDatabaseMigrationContext* _remDatabaseMigrationContext;

}

@property (nonatomic,readonly) REMDatabaseMigrationContext * remDatabaseMigrationContext;              //@synthesize remDatabaseMigrationContext=_remDatabaseMigrationContext - In the implementation block
@property (nonatomic,readonly) REMStore * reminderStore; 
@property (nonatomic,readonly) BOOL shouldPerformMigration; 
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBeginMigration;
-(id)init;
-(BOOL)shouldDeleteMigratedData;
-(REMDatabaseMigrationContext *)remDatabaseMigrationContext;
-(void)didEndMigrationWithSuccess:(BOOL)arg1 ;
-(REMStore *)reminderStore;
-(void)recordMigrationFailure:(id)arg1 ;
-(BOOL)shouldPerformMigration;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2 ;
@end

