/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <libobjc.A.dylib/CalReminderMigrator.h>

@protocol CalReminderKitProvider, CalReminderMigrationDefaultsProvider;
@class NSString;

@interface CalInProcessReminderMigrator : NSObject <CalReminderMigrator> {

	id<CalReminderKitProvider> _reminderKitProvider;
	id<CalReminderMigrationDefaultsProvider> _defaultsProvider;

}

@property (nonatomic,readonly) id<CalReminderKitProvider> reminderKitProvider;                         //@synthesize reminderKitProvider=_reminderKitProvider - In the implementation block
@property (nonatomic,readonly) id<CalReminderMigrationDefaultsProvider> defaultsProvider;              //@synthesize defaultsProvider=_defaultsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReminderKitProvider:(id)arg1 defaultsProvider:(id)arg2 ;
-(id<CalReminderMigrationDefaultsProvider>)defaultsProvider;
-(id<CalReminderKitProvider>)reminderKitProvider;
-(BOOL)attemptMigrationWithHomeDirectory:(id)arg1 ;
@end

