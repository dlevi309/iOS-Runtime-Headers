/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

