/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <libobjc.A.dylib/CalReminderMigrationDefaultsProvider.h>

@class NSString;

@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBackupBeforeMigration; 
@property (assign,nonatomic) BOOL havePerformedReminderMigrationCleanup; 
+(id)sharedInstance;
-(BOOL)havePerformedReminderMigrationCleanup;
-(BOOL)shouldBackupBeforeMigration;
-(void)setHavePerformedReminderMigrationCleanup:(BOOL)arg1 ;
@end

