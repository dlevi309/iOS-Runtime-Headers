/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <libobjc.A.dylib/CalReminderMigrationDefaultsProvider.h>

@class NSString;

@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (nonatomic,readonly) BOOL shouldBackupBeforeMigration; 
@property (assign,nonatomic) BOOL havePerformedReminderMigrationCleanup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)havePerformedReminderMigrationCleanup;
-(void)setHavePerformedReminderMigrationCleanup:(BOOL)arg1 ;
-(BOOL)shouldBackupBeforeMigration;
@end

