/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
*/

#import <libobjc.A.dylib/CalReminderKitProvider.h>

@class NSString;

@interface CalDefaultReminderKitProvider : NSObject <CalReminderKitProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)newDatabaseMigrationContext;
-(id)newSaveRequestWithStore:(id)arg1 ;
-(void)setDefaultReminderListIdentifier:(id)arg1 ;
@end

